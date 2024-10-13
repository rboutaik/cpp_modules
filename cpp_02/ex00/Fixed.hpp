/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 05:32:35 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/13 05:41:28 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Fixed
{
    private:
        int nb;
        static const int fract = 8;
        
    public:
        Fixed();
        Fixed(Fixed &f);
        Fixed& operator=(const Fixed& f);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

