/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 21:44:07 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/28 18:08:28 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"


int main()
{
        AForm* rrf = NULL;
    {
        try
        {
            Intern someRandomIntern;
            rrf = someRandomIntern.makeForm("robotomy request", "Bender");
            Bureaucrat b("rachid", 2);
            rrf->beSigned(b);
            rrf->execute(b);
            delete rrf;
            rrf = NULL;
        }
        catch(std::exception& e)
        {
            std::cout << e.what() << '\n';
            delete rrf;
            rrf = NULL;
        }
        
    }

    std::cout << "========================\n";

    {
        try
        {
            Intern someRandomIntern;
            rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
            Bureaucrat b("rachid", 2);
                rrf->beSigned(b);
                rrf->execute(b);
            delete rrf;
            rrf = NULL;
        }
        catch(std::exception& e)
        {
            std::cout << e.what() << '\n';
            delete rrf;
            rrf = NULL;
        }
        
    }



    std::cout << "========================\n";

    {
        try
        {
            Intern someRandomIntern;
            rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
            Bureaucrat b("rachid", 2);
                rrf->beSigned(b);
                rrf->execute(b);
            delete rrf;
            rrf = NULL;
        }
        catch(std::exception& e)
        {
            std::cout << e.what() << '\n';
            delete rrf;
            rrf = NULL;
        }
        
    }

    std::cout << "========================\n";

    {
        try
        {
            Intern someRandomIntern;
            rrf = someRandomIntern.makeForm("another one", "Bender");
            Bureaucrat b("rachid", 2);
            if (rrf)
                rrf->beSigned(b);
            if (rrf)
                rrf->execute(b);
            delete rrf;
            rrf = NULL;
        }
        catch(std::exception& e)
        {
            std::cout << e.what() << '\n';
            delete rrf;
            rrf = NULL;
        }
        
    }
    
    return (0);
}