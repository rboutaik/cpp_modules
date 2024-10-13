/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:00:16 by rboutaik          #+#    #+#             */
/*   Updated: 2024/10/02 10:28:18 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
template<typename T>
void    addTwo(T &a)
{
    a += 2;    
}


template<typename T, typename L, typename Func>
void    iter(T *p, L length, Func fun)
{
    for (L i = 0; i < length; i++)
    {
        fun(*(p + i));
    }
}
