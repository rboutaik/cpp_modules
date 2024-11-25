
#include "RPN.hpp"

int main(int ac, char *av[])
{

    if (ac != 2)
    {
        std::cout << "Error" << std::endl;
        return (1);
    }

    std::string str = static_cast<std::string>(av[1]);

    if (!parsing(str))
    {
        std::cout << "Error" << std::endl;
        return (1);
    }

    if(!RPN(str))
    {
        std::cout << "Error" << std::endl;
        return (1); 
    }

    return (0);
}