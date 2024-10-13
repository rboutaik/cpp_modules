/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 05:01:02 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/11 02:09:49 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 10;

    Zombie*  z;
    z = zombieHorde(N, "anas");
    for (int i = 0; i < N; i++)
    {
        z[i].announce();
    }
    delete [] z;
    return (0);
}