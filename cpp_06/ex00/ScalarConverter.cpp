/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:08:25 by rboutaik          #+#    #+#             */
/*   Updated: 2024/10/01 10:06:25 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool    noDot(std::string s)
{
    int i;

    i = s.find('.');
    if (i == -1)
        return (1);
    i++;
    while (s[i])
    {
        if (s[i] != '0' && s[i] != 'f')
            return (0);
        i++;
    }
    return (1);
}

void    toChar(double d, std::string s)
{
    
    std::cout << "char: ";

    if (d > CHAR_MAX || d < 0 || (!isdigit(s[0]) && s[0] != '+') || (s[0] == '+' && !isdigit(s[1])))
        std::cout << "impossible\n";
    else if (d < 32 || d == 127)
    {
        std::cout << "Non displayable\n";
    }
    else
    {
        char c = static_cast<char>(d);
        std::cout << "'" << c << "'" << std::endl;
    }
}

void    toInt(double d, std::string s)
{
    
    std::cout << "int: ";

    if (d > INT_MAX || (!isdigit(s[0]) && s[0] != '+' && s[0] != '-') || ((s[0] == '+' || s[0] == '-') && !isdigit(s[1])))
        std::cout << "impossible\n";
    else
    {
        int c = static_cast<int>(d);
        std::cout << c << std::endl;
    }
}


void    toFloat(double d, std::string s)
{
    
    std::cout << "float: ";

    if (d > __FLT_MAX__ && d != INFINITY && d != -INFINITY)
        std::cout << "impossible\n";
    else if (s[0] == 'n')
    {
        std::cout << "nanf" << std::endl;
    }
    else if (s.size() > 1 && s[1] == 'i')
    {
        if (s[0] == '+')
            std::cout << "+inff" << std::endl;
        if (s[0] == '-')
            std::cout << "-inff" << std::endl;
    }
    else
    {
        
        double c = static_cast<double>(d);
        if (noDot(s))
            std::cout << std::fixed << std::setprecision(1) << c << "f" <<  std::endl;
        else
            std::cout << c << "f" <<  std::endl;
    }
}

void    toDouble(long double d, std::string s)
{
    
    std::cout << "double: ";

    if (d > __DBL_MAX__ && d != INFINITY && d != -INFINITY)
        std::cout << "impossible\n";
    else if (s[0] == 'n')
    {
        std::cout << "nan" << std::endl;
    }
    else if (s.size() > 1 && s[1] == 'i')
    {
        if (s[0] == '+')
            std::cout << "+inf" << std::endl;
        if (s[0] == '-')
            std::cout << "-inf" << std::endl;
    }
    else
    {
        double c = static_cast<double>(d);
        if (noDot(s))
            std::cout << std::fixed << std::setprecision(1) << c <<  std::endl;
        else
            std::cout << c <<  std::endl;
    }
}


void    ScalarConverter::convert(std::string s)
{
     double d;

    std::string newS = s;

    if (s[s.size() - 1] == 'f')
        newS.erase(s.size() - 1);

    std::stringstream strm(newS);

    strm >> d;

    toChar(d, s);
    toInt(d, s);
    toFloat(d, s);
    toDouble(d, s);
    
}














/*  Canonical Form Methods  */

ScalarConverter::~ScalarConverter()
{
    
}

ScalarConverter& ScalarConverter::operator=(ScalarConverter& s)
{
    (void)s;
    return (*this);
}

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::ScalarConverter(const ScalarConverter& s)
{
    (void)s;
}