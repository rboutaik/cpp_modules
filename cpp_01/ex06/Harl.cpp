/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 23:42:04 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/11 00:19:37 by rboutaik         ###   ########.fr       */
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
    std::cout << "[ DEBUG ]\n";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!\n\n";
}
void Harl::info( void )
{
    std::cout << "[ INFO ]\n";
    std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n\n";
}
void Harl::warning( void )
{
    std::cout << "[ WARNING ]\n";
    std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n\n";
}
void Harl::error( void )
{
    std::cout << "[ ERROR ]\n";
    std::cout << "This is unacceptable! I want to speak to the manager now.\n\n";
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
    
    switch(i)
    {
        case 0 :
            (this->*funPtr[0])();
            (this->*funPtr[1])();
            (this->*funPtr[2])();
            (this->*funPtr[3])();
            break ;
        case 1 :
            (this->*funPtr[1])();
            (this->*funPtr[2])();
            (this->*funPtr[3])();
            break ;
        case 2 :
            (this->*funPtr[2])();
            (this->*funPtr[3])();
            break ;
        case 3 :
            (this->*funPtr[3])();
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]\n";
            break;
            
    }
}