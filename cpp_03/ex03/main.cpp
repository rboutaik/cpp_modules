/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 04:01:55 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/27 10:12:36 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

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

    std::cout << "=============================\n";
    
    FragTrap F("gggg");
    F.attack("rrrr");
    F.beRepaired(5);
    F.takeDamage(500);
    F.attack("rrrr");
    F.beRepaired(1);
    F.highFivesGuys();

    std::cout << "=============================\n";
    
    DiamondTrap D("ttttt");
    D.attack("lllll");
    D.beRepaired(5);
    D.takeDamage(500);
    D.attack("lllll");
    D.beRepaired(1);
    D.whoAmI();
    D.highFivesGuys();
    D.guardGate();

    return (0);
}