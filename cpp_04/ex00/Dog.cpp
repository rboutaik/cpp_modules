/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:44:12 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/23 13:04:27 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog: constractor called\n"; 
}

Dog::~Dog()
{
    
    std::cout << "Dog: destructor called\n"; 
}

Dog::Dog(const Dog& a)
{
    this->type = a.type;
    std::cout << "Dog: copy destructor called\n"; 
}

Dog& Dog::operator=(const Dog& a)
{
    if (this != &a)
    {
        this->type = a.type;
    }
    return (*this);
}

void    Dog::makeSound() const
{
    std::cout << type << " bark!!\n";
}