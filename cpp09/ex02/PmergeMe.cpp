
#include "PmergeMe.hpp"

bool    parsing(std::vector<int> &v, char *av[], int ac)
{

    for (int i = 1; i < ac; i++)
    {
        std::istringstream ist(av[i]);
        int nbr;

        if (ist >> nbr && ist.eof())
        {
            if (nbr < 0)
                return (0);

            v.push_back(nbr);
        }
        else
            return (0);
    }

    return (1);
}

void    sortVector(std::vector<int> array)
{
    int Unpaired = -1;


    if (array.size() % 2)
    {
        Unpaired = array.back();
        array.pop_back();
    }

    std::vector<int> jacobsthal(array.size());

    jacobsthal[0] = 0;
    jacobsthal[1] = 1;
    for (size_t i = 2; i < jacobsthal.size(); i++)
        jacobsthal[i] = jacobsthal[i - 1] + 2 * jacobsthal[i - 2];
    
    std::vector<int> jacob(array.size());
    jacob[0] = 0;
    jacob[1] = 1;
    int id = 2;
    for (size_t i = 3; i < jacobsthal.size(); i++)
    {
        jacob[id] = jacobsthal[i];
        int l, r;
        l = jacob[id - 1], r = jacob[id];
        id++;
        l++;
        while (l < r)
        {
            if (find(jacob.begin(), jacob.end(), l) == jacob.end())
            {
                jacob[id] = l;
                id++;
            }
            l++;
        }
        if ((size_t)id >= array.size())
            break ;
    }

    for (size_t i = 0; i < array.size(); i += 2)
    {
        if (array[i] < array[i + 1])
            std::swap(array[i], array[i + 1]);
    }

    int curr1, curr2, j;

    for (size_t i = 2; i < array.size(); i += 2)
    {
        curr1 = array[i];
        curr2 = array[i + 1];
        j = i - 2;

        while (j >= 0 && array[j] > curr1)
        {
            array[j + 2] = array[j];
            array[j + 3] = array[j + 1];
            j -= 2;
        }

        array[j + 2] = curr1;
        array[j + 3] = curr2;
    }


    std::vector<int> main_chain, pend_elements;

    for (size_t i = 0; i < array.size(); i += 2)
    {
        main_chain.push_back(array[i]);
        pend_elements.push_back(array[i + 1]);
    }

    if (pend_elements.size())
    {
        main_chain.insert(main_chain.begin(), pend_elements[0]);
    }

    for (size_t i = 0; i < main_chain.size(); i++)
    {
        if (i < pend_elements.size() && i)
        {
            std::vector<int>::iterator it = std::lower_bound(main_chain.begin(), main_chain.end(), pend_elements[jacob[i]]);
            main_chain.insert(it, pend_elements[jacob[i]]);
        }
    }


    if (Unpaired != -1)
    {
        std::vector<int>::iterator it = std::lower_bound(main_chain.begin(), main_chain.end(), Unpaired);
        main_chain.insert(it, Unpaired);
    }

    std::cout << "After: ";
    for (size_t i = 0; i < main_chain.size(); i++)
        std::cout << main_chain[i] << " ";
    std::cout << std::endl;
}


void    sortDeque(std::deque<int> array)
{
    int Unpaired = -1;

    if (array.size() % 2)
    {
        Unpaired = array.back();
        array.pop_back();
    }


    std::deque<int> jacobsthal(array.size());

    jacobsthal[0] = 0;
    jacobsthal[1] = 1;
    for (size_t i = 2; i < jacobsthal.size(); i++)
        jacobsthal[i] = jacobsthal[i - 1] + 2 * jacobsthal[i - 2];
    
    std::deque<int> jacob(array.size());
    jacob[0] = 0;
    jacob[1] = 1;
    int id = 2;
    for (size_t i = 3; i < jacobsthal.size(); i++)
    {
        jacob[id] = jacobsthal[i];
        int l, r;
        l = jacob[id - 1], r = jacob[id];
        id++;
        l++;
        while (l < r)
        {
            if (find(jacob.begin(), jacob.end(), l) == jacob.end())
            {
                jacob[id] = l;
                id++;
            }
            l++;
        }
        if ((size_t)id >= array.size())
            break ;
    }


    for (size_t i = 0; i < array.size(); i += 2)
    {
        if (array[i] < array[i + 1])
            std::swap(array[i], array[i + 1]);
    }

    int curr1, curr2, j;

    for (size_t i = 2; i < array.size(); i += 2)
    {
        curr1 = array[i];
        curr2 = array[i + 1];
        j = i - 2;

        while (j >= 0 && array[j] > curr1)
        {
            array[j + 2] = array[j];
            array[j + 3] = array[j + 1];
            j -= 2;
        }

        array[j + 2] = curr1;
        array[j + 3] = curr2;
    }


    std::deque<int> main_chain, pend_elements;

    for (size_t i = 0; i < array.size(); i += 2)
    {
        main_chain.push_back(array[i]);
        pend_elements.push_back(array[i + 1]);
    }

    if (pend_elements.size())
        main_chain.push_front(pend_elements[0]);

    for (size_t i = 1; i < pend_elements.size(); i++)
    {
        std::deque<int>::iterator it = std::lower_bound(main_chain.begin(), main_chain.end(), pend_elements[i]);
        main_chain.insert(it, pend_elements[i]);
    }


    if (Unpaired != -1)
    {
        std::deque<int>::iterator it = std::lower_bound(main_chain.begin(), main_chain.end(), Unpaired);
        main_chain.insert(it, Unpaired);
    }

}

void    PmergeMe(std::vector<int> &v)
{
    clock_t start = clock();
    sortVector(v);
    clock_t end = clock();
    double time = (static_cast<double>(end - start) / CLOCKS_PER_SEC) * 1e6; 
    std::cout << "Time to process a range of " << v.size() << " elements with std::vector : " << time << " us" << std::endl;

    start = clock();
    std::deque<int> array(v.begin(), v.end());
    sortDeque(array);
    end = clock();
    time = (static_cast<double>(end - start) / CLOCKS_PER_SEC) * 1e6; 
    std::cout << "Time to process a range of " << v.size() << " elements with std::deque : " << time << " us" << std::endl;

}