/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 05:01:02 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/11 02:06:35 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie* z2;

    z2 = newZombie("rachid");
    z2->announce();
    randomChump("brahim");
    delete z2;
    return (0);
}