
#include "PmergeMe.hpp"

int main(int ac, char *av[])
{
    std::vector<int> v;

    if (ac < 2)
    {
        std::cerr << "Error" << std::endl;
        return (1);
    }

    if (!parsing(v, av, ac))
    {
        std::cerr << "Error" << std::endl;
        return (1);
    }


    std::cout << "Before: ";
    for (size_t i = 0; i < v.size(); i++)
        std::cout << v[i] << " ";
    std::cout << std::endl;

    PmergeMe(v);
    
    return (0);
}