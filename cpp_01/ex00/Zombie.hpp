/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 04:47:32 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/11 02:07:22 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie
{
    private:
        std::string name;

    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        void    announce( void );
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );