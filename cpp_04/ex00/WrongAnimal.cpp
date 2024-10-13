/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:31:24 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/23 13:14:21 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal")
{
    std::cout << "WrongAnimal: constractor called\n"; 
}

WrongAnimal::~WrongAnimal()
{
    
    std::cout << "WrongAnimal: destructor called\n"; 
}

WrongAnimal::WrongAnimal(const WrongAnimal& a) : type(a.type)
{
    std::cout << "WrongAnimal: copy destructor called\n"; 
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& a)
{
    if (this != &a)
    {
        this->type = a.type;
    }
    return (*this);
}

std::string WrongAnimal::getType() const
{
    return (type);
}

void    WrongAnimal::makeSound() const
{
    std::cout << type << " has wrong sound!!\n";
}