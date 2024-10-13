/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 09:18:25 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/27 10:12:00 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor called\n";
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap parameterized constructor called\n";
    setName(name);
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap& c)
{
    std::cout << "FragTrap copy constructor called\n";
    *this = c;
}

FragTrap& FragTrap::operator=(const FragTrap& c)
{
    
    setName(c.getName());
    setHitPoints(c.getHitPoints());
    setEnergyPoints(c.getEnergyPoints());
    setAttackDamage(c.getAttackDamage());

    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called\n";
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap request a positive high fives" << std::endl;
}