/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 05:32:27 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/15 05:44:08 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : nb(0)
{
    
}

Fixed::Fixed(const int raw)
{
    
    this->nb = raw * (1 << fract);
}

Fixed::Fixed(const float raw)
{
    
    this->nb = roundf(raw * (1 << fract));
}

Fixed::~Fixed()
{
    
}

Fixed::Fixed(const Fixed &f)
{
    this->nb = f.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& f)
{
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

bool Fixed::operator<(const Fixed& f)
{
    if (this->toFloat() < f.toFloat())
        return (true);
    return (false);
}

bool Fixed::operator>(const Fixed& f)
{
    if (this->toFloat() > f.toFloat())
        return (true);
    return (false);
}

bool Fixed::operator>=(const Fixed& f)
{
    if (this->toFloat() >= f.toFloat())
        return (true);
    return (false);
}

bool Fixed::operator<=(const Fixed& f)
{
    if (this->toFloat() <= f.toFloat())
        return (true);
    return (false);
}

bool Fixed::operator==(const Fixed& f)
{
    if (this->toFloat() == f.toFloat())
        return (true);
    return (false);
}

bool Fixed::operator!=(const Fixed& f)
{
    if (this->toFloat() != f.toFloat())
        return (true);
    return (false);
}

Fixed Fixed::operator+(const Fixed& f)
{
    Fixed nf(this->toFloat() + f.toFloat());

    return (nf);
}

Fixed Fixed::operator-(const Fixed& f)
{
    Fixed nf(this->toFloat() - f.toFloat());
    return (nf);
}

Fixed Fixed::operator*(const Fixed& f)
{
    Fixed nf(this->toFloat() * f.toFloat());
    return (nf);
}

Fixed Fixed::operator/(const Fixed& f)
{
    Fixed nf(this->toFloat() / f.toFloat());
    return (nf);
}

Fixed& Fixed::operator++(void)
{
    this->nb++;
    return (*this);
}
Fixed& Fixed::operator--(void)
{
    this->nb--;
    return (*this);
}
Fixed Fixed::operator++(int)
{
    Fixed f;
    f.setRawBits(this->nb);
    this->nb++;
    return (f);
}
Fixed Fixed::operator--(int)
{
    Fixed f;
    f.setRawBits(this->nb);
    this->nb--;
    return (f);
}

Fixed& Fixed::min(Fixed& f1, Fixed& f2)
{
    if (f1.getRawBits() >= f2.getRawBits())
        return (f2);
    else
        return (f1);
}
const Fixed& Fixed::min(const Fixed& f1, const Fixed& f2)
{
    if (f1.getRawBits() >= f2.getRawBits())
        return (f2);
    else
        return (f1);
}
Fixed& Fixed::max(Fixed& f1, Fixed& f2)
{
    if (f1.getRawBits() >= f2.getRawBits())
        return (f1);
    else
        return (f2);
}
const Fixed& Fixed::max(const Fixed& f1, const Fixed& f2)
{
    if (f1.getRawBits() >= f2.getRawBits())
        return (f1);
    else
        return (f2);
}