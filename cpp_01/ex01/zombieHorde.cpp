/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 05:22:27 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/11 02:09:23 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* z;

    if (N <= 0)
        return (NULL);
    z = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        z[i].setName(name);
    }
    return (z);
}