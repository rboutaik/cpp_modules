/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 04:03:28 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/16 06:53:29 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "claptrap default constructor called\n";
    name = "Unknown";
    HitPoints = 10;
    EnergyPoints = 10;
    AttackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "claptrap parameterized constructor called\n";
    this->name = name;
    HitPoints = 10;
    EnergyPoints = 10;
    AttackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& c)
{
    std::cout << "claptrap copy constructor called\n";
    *this = c;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& c)
{
    
    name = c.name;
    HitPoints = c.HitPoints;
    EnergyPoints = c.EnergyPoints;
    AttackDamage = c.AttackDamage;

    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "claptrap destructor called\n";
}

void    ClapTrap::setName(std::string name)
{
    this->name = name;
}
void    ClapTrap::setHitPoints(int HitPoints)
{
    this->HitPoints = HitPoints;
}
void    ClapTrap::setEnergyPoints(int EnergyPoints)
{
    this->EnergyPoints = EnergyPoints;
}
void    ClapTrap::setAttackDamage(int AttackDamage)
{
    this->AttackDamage = AttackDamage;
}

std::string ClapTrap::getName() const
{
    return (name);
}
int         ClapTrap::getHitPoints() const
{
    return (HitPoints);
}
int         ClapTrap::getEnergyPoints() const
{
    return (EnergyPoints);
}
int         ClapTrap::getAttackDamage() const
{
    return (AttackDamage);
}

void        ClapTrap::takeDamage(unsigned int amount)
{
    if (!this->HitPoints || !this->EnergyPoints || (int)amount < 0)
    {
        if (!this->HitPoints)
            std::cout << "ClapTrap " << this->name << " has no hit points" << std::endl;
        if (!this->EnergyPoints)
            std::cout << "ClapTrap " << this->name << " has no energy points" << std::endl;
        return ;
    }
    this->HitPoints -= amount;
    if (this->HitPoints < 0)
        this->HitPoints = 0;

    std::cout << "ClapTrap " << this->name << "takes " << amount << " points of damage!" << std::endl;

}

void ClapTrap::attack(const std::string& target)
{
    if (this->EnergyPoints && this->HitPoints)
        this->EnergyPoints--;
    else
    {
         if (!this->HitPoints)
            std::cout << "ClapTrap " << this->name << " has no hit points" << std::endl;
        if (!this->EnergyPoints)
            std::cout << "ClapTrap " << this->name << " has no energy points" << std::endl;
        return ;
    }

    std::cout << "ClapTrap " << this->name << " attacks " << target
              << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if ((int)amount < 0)
        return ;

    if (this->EnergyPoints && this->HitPoints)
    {
        this->HitPoints += amount;
        this->EnergyPoints--;
    }
    else
    {
        if (!this->HitPoints)
            std::cout << "ClapTrap " << this->name << " has no hit points" << std::endl;
        if (!this->EnergyPoints)
            std::cout << "ClapTrap " << this->name << " has no energy points" << std::endl;
        return ;
    }

        std::cout << "ClapTrap " << this->name << " repairs it self with " << amount << " hit points!" << std::endl;
}