/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:08:15 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/30 20:54:26 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


int main()
{
    Data *d;

    Data a(5);
 
    std::cout << &a << std::endl;

    d = &a;
    
    uintptr_t  p = Serializer::serialize(d);

    std::cout << &p << std::endl;

    Data *q = Serializer::deserialize(p);

    std::cout << q << std::endl;
    std::cout << q->nb << std::endl;
}