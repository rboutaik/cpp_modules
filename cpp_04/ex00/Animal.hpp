/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:31:32 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/23 12:58:58 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
    protected:
        std::string type;

    public:
        Animal();
        virtual ~Animal();
        Animal(const Animal& a);
        Animal& operator=(const Animal&);
        
        std::string getType() const;

        virtual void makeSound() const;
};

