/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 06:55:01 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/16 07:17:34 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor called\n";
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap parameterized constructor called\n";
    setName(name);
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap& c)
{
    std::cout << "ScavTrap copy constructor called\n";
    *this = c;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& c)
{
    
    setName(c.getName());
    setHitPoints(c.getHitPoints());
    setEnergyPoints(c.getEnergyPoints());
    setAttackDamage(c.getAttackDamage());

    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called\n";
}

void ScavTrap::attack(const std::string& target)
{
    if (this->EnergyPoints && this->HitPoints)
        this->EnergyPoints--;
    else
    {
         if (!this->HitPoints)
            std::cout << "ScavTrap " << this->name << " has no hit points" << std::endl;
        if (!this->EnergyPoints)
            std::cout << "ScavTrap " << this->name << " has no energy points" << std::endl;
        return ;
    }

    std::cout << "ScavTrap " << this->name << " attacks " << target
              << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}