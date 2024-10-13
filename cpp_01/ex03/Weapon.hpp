/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 05:47:18 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/10 06:28:40 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Weapon
{
    private:
        std::string type;
        
    public:
        Weapon();
        Weapon(std::string type);
        ~Weapon();
        const std::string& getType();
        void    setType(std::string type);
};

