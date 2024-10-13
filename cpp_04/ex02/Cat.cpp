/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:50:38 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/23 14:50:07 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    b = new Brain();
    this->type = "Cat";
    std::cout << "Cat: constractor called\n"; 
}

Cat::~Cat()
{
    delete b;
    std::cout << "Cat: destructor called\n"; 
}

Cat::Cat(const Cat& a): b(NULL)
{
    *this = a;
    std::cout << "Cat: copy destructor called\n"; 
}

Cat& Cat::operator=(const Cat& a)
{
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

void    Cat::makeSound() const
{
    std::cout << type << " moa moa!!\n";
}