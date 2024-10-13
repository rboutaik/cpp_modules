/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 05:32:16 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/15 05:44:19 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

int main( void ) {
    
    Point p1(-4,-4);
    Point p2(-4, -4);
    Point p3(-4, 4);
    Point p4(4, 0);
    
    std::cout << bsp(p2, p3, p4, p1) << std::endl;
    
    return 0;
}