/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 21:44:07 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/28 14:20:48 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    
    {
        try
        {
            Bureaucrat b("baron", 2);

            RobotomyRequestForm r("rachid");

            r.beSigned(b);
                        
            r.execute(b);
        }
        catch(std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }
    }

    std::cout << "========================\n";

    {
        try
        {
            Bureaucrat b("baron", 2);

            PresidentialPardonForm P("rachid");

            b.signForm(P);
                    
            
            b.executeForm(P);
        }
        catch(std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }
    }

    std::cout << "========================\n";

    {
        try
        {
            Bureaucrat b("baron", 2);

            ShrubberyCreationForm S("rachid");

            b.signForm(S);
                    
            
            b.executeForm(S);
        }
        catch(std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    
    return (0);
}