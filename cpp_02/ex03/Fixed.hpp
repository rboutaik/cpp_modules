/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 05:32:35 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/15 05:44:09 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <fstream>

class Fixed
{
    private:
        int nb;
        static const int fract = 8;
        
    public:
        Fixed();
        Fixed(const int raw);
        Fixed(const float raw);
        Fixed(const Fixed &f);
        Fixed& operator=(const Fixed& f);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;

    bool operator<(const Fixed& f);
    bool operator>(const Fixed& f);
    bool operator>=(const Fixed& f);
    bool operator<=(const Fixed& f);
    bool operator==(const Fixed& f);
    bool operator!=(const Fixed& f);
    
    Fixed operator+(const Fixed& f);
    Fixed operator-(const Fixed& f);
    Fixed operator*(const Fixed& f);
    Fixed operator/(const Fixed& f);
    
    Fixed& operator++(void);
    Fixed& operator--(void);
    Fixed operator++(int);
    Fixed operator--(int);

    static Fixed& min(Fixed& f1, Fixed& f2);
    static const Fixed& min(const Fixed& f1, const Fixed& f2);
    static Fixed& max(Fixed& f1, Fixed& f2);
    static const Fixed& max(const Fixed& f1, const Fixed& f2);
    
};

std::ostream& operator<<(std::ostream& os, const Fixed &f);
