/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 05:47:44 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/10 06:30:26 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::~HumanB()
{
    
}
HumanB::HumanB(std::string name)
{
    this->name = name;
}
void    HumanB::attack()
{
    std::cout << this->name << "  attacks with their " << this->wp->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &wp)
{
    this->wp = &wp;
}