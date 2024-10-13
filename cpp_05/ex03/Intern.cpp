/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:55:11 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/28 18:05:52 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    
}

Intern::Intern(const Intern& f)
{
    (void)f;
}

Intern& Intern::operator=(const Intern& f)
{
    (void)f;
    return (*this);
}

Intern::~Intern()
{
    
}

AForm* createShrubberyCreationForm(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

AForm* createRobotomyRequestForm(std::string target)
{
    return (new RobotomyRequestForm(target));
}

AForm* createPresidentialPardonForm(std::string target)
{
    return (new PresidentialPardonForm(target));
}

AForm* Intern::makeForm(std::string name, std::string target)
{
    AForm* f = NULL;
    std::string tab[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    AForm* (*func[])(std::string) = { createShrubberyCreationForm, createRobotomyRequestForm, createPresidentialPardonForm };

    int i;
    
    for (i = 0; i < 3; i++)
    {
        if (tab[i] == name)
            break ;
    }
    if (i == 3)
    {
        std::cout << "Invalid form\n";
        return (NULL);
    }

    std::cout << "Intern creates " << name << std::endl;
    
    f = func[i](target);
        
    return (f);
}