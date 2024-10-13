/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 04:01:55 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/17 09:25:54 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{

    ClapTrap C("Rachid");

    C.attack("Ahmed");
    C.beRepaired(5);
    C.takeDamage(100);
    C.attack("Ahmed");
    C.beRepaired(1);
    

    std::cout << "=============================\n";

    ScavTrap S("test");
    S.attack("ss");
    S.beRepaired(5);
    S.takeDamage(100);
    S.attack("ss");
    S.beRepaired(1);
    S.guardGate();
    

    return (0);
}