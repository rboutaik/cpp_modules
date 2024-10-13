/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:00:07 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/28 14:02:49 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"



PresidentialPardonForm::PresidentialPardonForm() : AForm("unknown", 145, 137)
{
    
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& f) : AForm(f.getName(), 145, 137)
{
    
}
PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm(target, 145, 137)
{
    
}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& f)
{
    if (this != &f)
    {
        setIsSigned(f.getIsSigned());
    }
    return (*this);
}
PresidentialPardonForm::~PresidentialPardonForm()
{
    
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
        if (executor.getGrade() > this->getGradeToExec())
        throw GradeTooLowException();
    else
    {
        if (this->getIsSigned() == 0)
            throw FormNotSignedException();
        else
        {
            std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;       
        }
    }
}