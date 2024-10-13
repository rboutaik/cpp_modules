/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 21:44:07 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/28 11:12:16 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{

    {
        try
        {
            Bureaucrat b;
            
            b.decrementGrade();
        }
        catch(std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }
    }


    {
        try
        {
            Bureaucrat b("rachid", 1);
            b.decrementGrade();
            std::cout << b << std::endl;
            b.incrementGrade();
            b.incrementGrade();
            
        }
        catch(std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }
    }

        {
        try
        {
            Bureaucrat b("ahmed", 151);
            b.decrementGrade();
            std::cout << b << std::endl;
            b.incrementGrade();
            b.incrementGrade();
            
        }
        catch(std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    
    return (0);
}