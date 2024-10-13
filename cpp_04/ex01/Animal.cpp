/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:31:24 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/23 13:16:29 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Animal")
{
    std::cout << "Animal: constractor called\n"; 
}

Animal::~Animal()
{
    
    std::cout << "Animal: destructor called\n"; 
}

Animal::Animal(const Animal& a) : type(a.type)
{
    std::cout << "Animal: copy destructor called\n"; 
}

Animal& Animal::operator=(const Animal& a)
{
    if (this != &a)
    {
        this->type = a.type;
    }
    return (*this);
}

std::string Animal::getType() const
{
    return (type);
}

void    Animal::makeSound() const
{
    std::cout << type << " has no sound!!\n";
}