/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:44:12 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/23 15:09:57 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    b = new Brain();
    this->type = "Dog";
    std::cout << "Dog: constractor called\n"; 
}

Dog::~Dog()
{
    delete b;
    std::cout << "Dog: destructor called\n"; 
}

Dog::Dog(const Dog& a): b(NULL)
{
    *this = a;
    std::cout << "Dog: copy destructor called\n";
}

Dog& Dog::operator=(const Dog& a)
{
    std::cout << "a\n";
    if (this != &a)
    {
        this->type = a.type;
        delete b;
        b = new Brain();
        for (int i = 0; i < 100; i++)
            b->ideas[i] = a.b->ideas[i];
    }
    return (*this);
}

void    Dog::makeSound() const
{
    std::cout << type << " bark!!\n";
}