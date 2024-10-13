/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 05:32:27 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/13 05:54:44 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : nb(0)
{
    std::cout << "Default constructor called\n";
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

Fixed::Fixed(Fixed &f)
{
    std::cout << "Copy constructor called\n";
    this->nb = f.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& f)
{
    std::cout << "Copy assignment operator called\n";
    this->nb = f.getRawBits();
    return (*this);
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called\n";
    return (nb);
}
void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called\n";
    nb = raw;
}