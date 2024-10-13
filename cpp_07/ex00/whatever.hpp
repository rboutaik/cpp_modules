/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:00:16 by rboutaik          #+#    #+#             */
/*   Updated: 2024/10/01 16:52:38 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<typename T>
void    swap(T& a, T&b)
{
    T c;

    c = a;
    a = b;
    b = c;
}


template<typename T>
T&    min(T& a, T&b)
{
    return (a < b ? a : b);
}



template<typename T>
T&    max(T& a, T&b)
{
    return (a > b ? a : b);
}
