/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 05:47:07 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/10 22:51:57 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    
}
Weapon::Weapon(std::string type)
{
    this->type = type;
}

Weapon::~Weapon()
{

}

const std::string &Weapon::getType()
{
    return (type);
}
void    Weapon::setType(std::string type)
{
    this->type = type;
}