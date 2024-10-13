/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:08:08 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/23 13:15:51 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "WrongCat: constractor called\n"; 
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat: destructor called\n"; 
}

WrongCat::WrongCat(const WrongCat& a)
{
    this->type = a.type;
    std::cout << "WrongCat: copy destructor called\n"; 
}

WrongCat& WrongCat::operator=(const WrongCat& a)
{
    if (this != &a)
    {
        this->type = a.type;
    }
    return (*this);
}

void    WrongCat::makeSound() const
{
    std::cout << type << " Wrong moaing!!\n";
}