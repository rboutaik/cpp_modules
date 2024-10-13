/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:53:29 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/08 02:11:11 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    to_upper(char *s)
{
    int i = 0;

    while (s[i])
    {
        std::cout << (char)std::toupper(s[i]);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else
    {
        int i = 1;
        while (av[i])
        {
            to_upper(av[i]);
            i++;
        }
        std::cout << std::endl;
    }
    return (0);
}