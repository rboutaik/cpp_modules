
#include "BitcoinExchange.hpp"

int main(int ac, char *argv[])
{
    if (ac != 2)
    {
        std::cout << "Error: could not open file.\n";
        return (1);
    }

    try
    {
        std::string av = static_cast<std::string>(argv[1]);
        BitcoinExchange btc;

        btc.calcule(av);
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    return (0);
}