/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 00:03:15 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/15 01:33:12 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
    
}
Point::Point(const float x, const float y) : x(x), y(y)
{
    
}
Point::Point(const Point& p) : x(p.getX()), y(p.getY())
{
    
}
Point::~Point()
{
    
}
Point& Point::operator=(const Point &p)
{
   (Fixed) this->x = p.getX();
    (Fixed) this->y = p.getY();
    return (*this);
}

Fixed   Point::getX() const
{
    return (x);
}

Fixed   Point::getY() const
{
    return (y);
}

