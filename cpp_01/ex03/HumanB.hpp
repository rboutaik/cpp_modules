/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 05:47:52 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/10 06:26:37 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon* wp;
        std::string name;
    public:
        HumanB(std::string name);
        ~HumanB();
        void    attack();
        void    setWeapon(Weapon &wp);
};