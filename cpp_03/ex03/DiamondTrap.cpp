/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 09:28:23 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/17 09:51:05 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap default constructor called\n";
    this->name = "unknown";
    ClapTrap::name = this->name + "_clap_name";
    setHitPoints(FragTrap::HitPoints);
    setEnergyPoints(ScavTrap::EnergyPoints);
    setAttackDamage(FragTrap::AttackDamage);
}

DiamondTrap::DiamondTrap(std::string name)
{
    std::cout << "DiamondTrap parameterized constructor called\n";
    this->name = name;
    ClapTrap::name = this->name + "_clap_name";
    setHitPoints(FragTrap::HitPoints);
    setEnergyPoints(ScavTrap::EnergyPoints);
    setAttackDamage(FragTrap::AttackDamage);
}

DiamondTrap::DiamondTrap(const DiamondTrap& c)
{
    std::cout << "DiamondTrap copy constructor called\n";
    *this = c;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& c)
{
    
    setName(c.getName());
    setHitPoints(c.getHitPoints());
    setEnergyPoints(c.getEnergyPoints());
    setAttackDamage(c.getAttackDamage());

    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called\n";
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap Name: " << this->name << "  its ClapTrap name: " << ClapTrap::getName() << std::endl;
}