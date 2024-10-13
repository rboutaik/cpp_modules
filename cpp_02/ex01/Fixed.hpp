/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 05:32:35 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/14 02:44:36 by rboutaik         ###   ########.fr       */
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
};

std::ostream& operator<<(std::ostream& os, const Fixed &f);
