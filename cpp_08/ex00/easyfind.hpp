/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:00:17 by rboutaik          #+#    #+#             */
/*   Updated: 2024/10/02 16:19:03 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <algorithm>

template<typename T>
typename T::iterator    easyfind(T& arr, int n)
{
    
    typename T::iterator it = std::find(arr.begin(), arr.end(), n);
    if (it == arr.end())
        throw std::invalid_argument("Integer not found");
    return (it);
}