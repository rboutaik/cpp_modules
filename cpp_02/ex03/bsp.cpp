/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 00:03:39 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/15 01:43:07 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

float   ftAbs(float x)
{
    if (x < 0)
        x = -x;
    return (x);
}

float area(float x1, float y1, float x2, float y2, float x3, float y3)
{
    return ftAbs((x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)) / 2.0);
}


float   pointArea(Point const a, Point const b, Point const c)
{
    return (area(a.getX().toFloat(), a.getY().toFloat(), b.getX().toFloat(), b.getY().toFloat(), c.getX().toFloat(), c.getY().toFloat()));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float abc = pointArea(a, b, c);
    float pbc = pointArea(point, b, c);
    float apc = pointArea(a, point, c);
    float abp = pointArea(a, b, point);

    if (abc == (pbc + apc + abp) && pbc && apc && abp)
        return (true);
    return (false);
}