
#include "BitcoinExchange.hpp"

std::string trimStr(std::string str)
{
    std::string newStr = "";

    int start = 0;
    while ((size_t)start < str.size() && std::isspace(str[start]))
        start++;
    
    int end = str.size() - 1;
    while (end >= 0 && std::isspace(str[end]))
        end--;
    return (str.substr(start,  end - start + 1));
}

std::list<std::string>    split(std::string str, char delem)
{
    std::list<std::string> v;
    std::string part;


    for (size_t i = 0; i < str.size(); i++)
    {
        if (str[i] == delem)
        {
            if (!part.empty())
            {
                v.push_back(trimStr(part));
                part.clear();
            }
        }
        else
            part += str[i];
    }

    if (!part.empty())
        v.push_back(trimStr(part));
    return (v);
}

BitcoinExchange::BitcoinExchange()
{
    std::string line;
    std::ifstream datafile("data.csv");
    std::list<std::string> spliteddata;

    if (datafile.fail())
        throw std::runtime_error("Can't Open data.csv file");
    std::getline(datafile, line);
    while (std::getline(datafile, line))
    {
        spliteddata = split(line, ',');

        if (spliteddata.size() != 2)
        {
            datafile.close();
            throw std::runtime_error("invalid data content");
        }
        std::istringstream iss(*spliteddata.rbegin());
        float nbr;
        if (iss >> nbr && iss.eof())
            data[*spliteddata.begin()] = nbr;
        else
            throw std::runtime_error("invalid data content");
    }
    
    datafile.close();
}

BitcoinExchange::~BitcoinExchange()
{

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& btc)
{
    *this = btc;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& btc)
{
    if (this != &btc)
        data = btc.data;

    return (*this);
}

bool    isLeapYear(int year)
{
    return ( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) );
}

bool    checkdate(std::string date)
{
    std::list<std::string> splited;
    int year, month, day;

    splited = split(date, '-');

    if (splited.size() != 3 || std::count(date.begin(), date.end(), '-') != 2)
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return (0);
    }

    std::list<std::string>::iterator it = splited.begin();

    std::istringstream iy(*it);
    if ((*it).size() != 4)
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return (0);
    }
    it++;
    std::istringstream im(*it);
    if ((*it).size() != 2)
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return (0);
    }
    it++;
    std::istringstream id(*it);
    if ((*it).size() != 2)
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return (0);
    }

    if (iy >> year && im >> month && id >> day  && iy.eof() && im.eof() && id.eof())
    {
        if (year < 1 || month < 1 || month > 12 || day < 1)
        {
            std::cout << "Error: bad input => " << date << std::endl;
            return (0);
        }
        
        int nbDaysInMonth[12] = {31, 28 + isLeapYear(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        return (day <= nbDaysInMonth[month - 1]);
    }
    else
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return (0);
    }
    return (0);
}

void    BitcoinExchange::calcule(std::string input)
{
    std::string line;
    std::ifstream inputfile(input);
    std::list<std::string> spliteddata;

    if (inputfile.fail())
        throw std::runtime_error("Can't Open data.csv file");
    if (!std::getline(inputfile, line))
    {
        std::cout << "Empty input file\n";
        inputfile.close();
        return ;
    }
    spliteddata = split(line, '|');

    if (spliteddata.size() != 2 || std::count(line.begin(), line.end(), '|') != 1 || *spliteddata.begin() != "date" || *spliteddata.rbegin() != "value")
    {
        std::cout << "Error: bad input => " << line << std::endl;
        inputfile.close();
        return ;
    }
    while (std::getline(inputfile, line))
    {
        spliteddata = split(line, '|');

        if (spliteddata.size() != 2 || std::count(line.begin(), line.end(), '|') != 1)
        {
            std::cout << "Error: bad input => " << line << std::endl;
        }
        else
        {
            std::string date = *spliteddata.begin();
            std::string nbr = *spliteddata.rbegin();
            float         count;
            if (checkdate(date))
            {
                std::istringstream iss(nbr);

                if (iss >> count && iss.eof())
                {
                    if (nbr.size() > 4 || count > 1000)
                    {
                        std::cout << "Error: too large a number.\n";
                    }
                    else if (count < 0)
                    {
                        std::cout << "Error: not a positive number.\n";
                    }
                    else
                    {
                        std::map<std::string, float>::iterator it = data.upper_bound(date);
                        if (it != data.begin())
                        {
                            it--;
                            std::cout << *spliteddata.begin() << " => " << *spliteddata.rbegin() << " = " << count * (*it).second << std::endl;
                        }
                        else
                            std::cout << "Error: bad input => " << line << std::endl;
                    }

                }
                else
                    std::cout << "Error: bad input => " << line << std::endl;
            }
            else
                    std::cout << "Error: bad input => " << line << std::endl;
        }
    }

    inputfile.close();
}

