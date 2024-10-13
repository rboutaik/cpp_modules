/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:18:30 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/30 20:40:01 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
    
}


Base * generate(void)
{
    srand(time(0));

    int r = rand() % 3;


    if (r == 0)
        return (new A());
    else if (r == 1)
        return (new B());
    else
        return (new C());
}

void identify(Base* p)
{
    std::cout << "p points to: " ;

    if (dynamic_cast<A *>(p) != NULL)
    {
        std::cout << "A\n";
        return ;
    }
    if (dynamic_cast<B *>(p) != NULL)
    {
        std::cout << "B\n";
        return ;
    }
    if (dynamic_cast<C *>(p) != NULL)
    {
        std::cout << "C\n";
        return ;
    }
}

void identify(Base& p)
{
    std::cout << "p points to: " ;

    try
    {
        A a = dynamic_cast<A &>(p);
        std::cout << "A\n";
        return ;
    }
    catch(const std::exception& e)
    {
        try
        {
            B b = dynamic_cast<B &>(p);
            std::cout << "B\n";
            return ;
        }
        catch(const std::exception& e)
        {
            std::cout << "C\n";
            return ;    
        }
        
    }
    
}