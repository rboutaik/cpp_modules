/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 04:03:40 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/16 07:16:04 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
    protected:
        std::string name;
        int HitPoints;
        int EnergyPoints;
        int AttackDamage;

    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& c);
        ClapTrap& operator=(const ClapTrap& c);
        virtual ~ClapTrap();

        
        void        setName(std::string name);
        void        setHitPoints(int HitPoints);
        void        setEnergyPoints(int EnergyPoints);
        void        setAttackDamage(int AttackDamage);

        std::string getName() const;
        int         getHitPoints() const;
        int         getEnergyPoints() const;
        int         getAttackDamage() const;
        
        virtual void        attack(const std::string& target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
};

