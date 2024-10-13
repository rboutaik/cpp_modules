/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:50:38 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/23 13:04:55 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat: constractor called\n"; 
}

Cat::~Cat()
{
    std::cout << "Cat: destructor called\n"; 
}

Cat::Cat(const Cat& a)
{
    this->type = a.type;
    std::cout << "Cat: copy destructor called\n"; 
}

Cat& Cat::operator=(const Cat& a)
{
    if (this != &a)
    {
        this->type = a.type;
    }
    return (*this);
}

void    Cat::makeSound() const
{
    std::cout << type << " moa moa!!\n";
}