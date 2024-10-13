/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 04:01:55 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/16 06:46:13 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap C("Rachid");

    C.attack("Ahmed");
    C.beRepaired(5);
    C.takeDamage(100);
    C.attack("Ahmed");
    C.beRepaired(1);
    

    return (0);
}