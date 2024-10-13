/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:08:15 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/30 19:42:06 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


bool    parseIt(std::string s)
{
    std::string allows = "f.+-";
    int i = 0;
    int invalidChar = 0;
    int dotsNbr = 0;
    int pmNbr = 0;
    int fNbr = 0;
    int digitNbr = 0;

    if (s == "nan" || s == "nanf"
        || s == "-inf" || s == "+inf"
        || s == "-inff" || s == "+inff")
        return (0);
    while (s[i])
    {
        if (!isdigit(s[i]) && allows.find(s[i]) == std::string::npos)
            invalidChar = 1;
        if (s[i] == '+' || s[i] == '-')
            pmNbr++;
        if (s[i] == 'f')
            fNbr++;
        if (s[i] == '.')
            dotsNbr++;
        if (isdigit(s[i]))
            digitNbr++;
        i++;
    }

    if (invalidChar || pmNbr > 1 || fNbr > 1 || dotsNbr > 1 || !digitNbr)
        return (1);

    if ((pmNbr == 1 && s[0] != '+' && s[0] != '-'))
        return (1);
    if ((fNbr == 1 && s[s.size() - 1] != 'f'))
        return (1);
    if ((dotsNbr == 1 && (s[s.size() - 1] == '.' || s[0] == '.')))
        return (1);

    if ((dotsNbr == 1 && fNbr == 1 && (s[s.size() - 1] == 'f' && s[s.size() - 2] == '.')))
        return (1);

    return (0);
}

int main(int ac, char *av[])
{
    if (ac != 2)
    {
        std::cout << "Invalid number of args\n";
        return (1);
    }

    std::string s = static_cast<std::string>(av[1]);
    if (parseIt(s))
    {
        std::cout << "Invlid number\n";
        return (1);
    }


    ScalarConverter::convert(s);

}