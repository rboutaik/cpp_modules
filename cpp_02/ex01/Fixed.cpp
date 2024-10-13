/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 05:32:27 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/14 23:41:31 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : nb(0)
{   
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int raw)
{
    std::cout << "Int constructor called\n";
    this->nb = raw * (1 << fract);
}

Fixed::Fixed(const float raw)
{
    std::cout << "Float constructor called\n";
    this->nb = roundf(raw * (1 << fract));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &f)
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
    return (nb);
}
void Fixed::setRawBits( int const raw )
{
    nb = raw;
}

float Fixed::toFloat( void ) const
{
    return ((float)(this->nb) / (1 << fract));
}

int Fixed::toInt( void ) const
{
    return (this->nb / (1 << fract));
}

std::ostream& operator<<(std::ostream& os, const Fixed &f)
{
    os << f.toFloat();
    return (os);
}