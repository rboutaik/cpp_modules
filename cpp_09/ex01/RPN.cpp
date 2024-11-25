
#include "RPN.hpp"

bool    parsing(std::string str)
{
    std::string elem = "0123456789+-/* ";
    for (size_t i = 0; i < str.size(); i++)
    {
        if (elem.find(str[i]) == std::string::npos)
            return (0);
    }
    if (str == "")
        return (0);

    std::istringstream iss(str);

    std::string nbr;

    while (iss >> nbr)
    {
        if (nbr.size() > 1)
            return (0);
    }

    return (1);
}

int isOperator(std::string op)
{
    if (op == "+")
        return (1);
    if (op == "-")
        return (2);
    if (op == "*")
        return (3);
    if (op == "/")
        return (4);
    return (0);
}

bool    RPN(std::string str)
{
    std::stack<float> st;
    float nb1, nb2;

    std::istringstream iss(str);
    std::string nbr;

    while (iss >> nbr)
    {
        int op = isOperator(nbr);
        if (op)
        {
            if (st.size() < 2)
                return (0);
            nb2 = st.top();
            st.pop();
            nb1 = st.top();
            st.pop();

            if (op == 1)
                st.push(nb1 + nb2);
            if (op == 2)
                st.push(nb1 - nb2);
            if (op == 3)
                st.push(nb1 * nb2);
            if (op == 4)
            {
                if (nb2 == 0)
                {
                    std::cout << "Divide by zero\n";
                    return (0);
                }
                st.push(nb1 / nb2);
            }
        }
        else
        {
            std::istringstream inbr(nbr);
            if (inbr >> nb1)
            {
                st.push(nb1);
            }
            else
                return (0);
        }
    }
    if (st.size() != 1)
        return (0);

    std::cout << st.top() << std::endl;
    return (1);
}