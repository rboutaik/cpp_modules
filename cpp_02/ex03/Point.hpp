/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 00:03:18 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/15 01:23:28 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Fixed.hpp"

class   Point
{
    private:
        Fixed const x;
        Fixed const y;
    
    public:
        Point();
        Point(const float x, const float y);
        Point(const Point& p);
        ~Point();
        Point& operator=(Point const &p);
        Fixed   getX(void) const;
        Fixed   getY(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);