/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:31:24 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/23 15:27:42 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(): type("AAnimal")
{
    std::cout << "AAnimal: constractor called\n"; 
}

AAnimal::~AAnimal()
{
    
    std::cout << "AAnimal: destructor called\n"; 
}

AAnimal::AAnimal(const AAnimal& a) : type(a.type)
{
    std::cout << "AAnimal: copy destructor called\n"; 
}

AAnimal& AAnimal::operator=(const AAnimal& a)
{
    if (this != &a)
    {
        this->type = a.type;
    }
    return (*this);
}

std::string AAnimal::getType() const
{
    return (type);
}

void    AAnimal::makeSound() const
{
    std::cout << type << " has no sound!!\n";
}