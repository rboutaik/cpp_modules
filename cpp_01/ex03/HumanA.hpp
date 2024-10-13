/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 05:47:37 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/10 06:21:13 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon& wp;
        std::string name;
    public:
        HumanA(std::string name, Weapon &wp);
        ~HumanA();
        void    attack();
};
