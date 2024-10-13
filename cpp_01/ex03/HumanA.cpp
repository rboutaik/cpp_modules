/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 05:47:28 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/10 06:22:34 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wp) : wp(wp), name(name)
{
    
}

HumanA::~HumanA()
{
    
}
void    HumanA::attack()
{
    std::cout << this->name << "  attacks with their " << this->wp.getType() << std::endl;
}