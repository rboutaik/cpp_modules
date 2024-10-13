/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 23:41:53 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/11 00:18:31 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char *av[])
{
    Harl h;
    std::string level;

    if (ac != 2)
    {
        std::cout << "Invalid args number\n";
        return (1);
    }
    level = av[1];
    h.complain(level);

}