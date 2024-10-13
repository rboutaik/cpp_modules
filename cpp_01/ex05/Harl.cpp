/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 23:42:04 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/11 00:03:26 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    
}

Harl::~Harl()
{
    
}

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}
void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}
void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}
void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain( std::string level )
{
    int i;
    std::string tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void    (Harl::*funPtr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for  (i = 0; i < 4; i++)
    {
        if (tab[i] == level)
            break ;
    }
    if (i == 4)
    {
        std::cout << "Invalid One\n";
        return ;
    }
    (this->*funPtr[i])();
}