/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:00:07 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/28 14:02:54 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"



RobotomyRequestForm::RobotomyRequestForm() : AForm("unknown", 72, 45)
{
    
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& f) : AForm(f.getName(), 72, 45)
{
    
}
RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm(target, 72, 45)
{
    
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& f)
{
    if (this != &f)
    {
        setIsSigned(f.getIsSigned());
    }
    return (*this);
}
RobotomyRequestForm::~RobotomyRequestForm()
{
    
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->getGradeToExec())
        throw GradeTooLowException();
    else
    {
        if (this->getIsSigned() == 0)
            throw FormNotSignedException();
        else
        {
            std::cout << "Making Drilling noises" << std::endl;

            srand(time(0)); 
            if (rand() % 2)
                std::cout << this->getName() << " has been robotomized successfully." << std::endl;
            else
                std::cout << this->getName() << " robotomy failed." << std::endl;
                
        }
    }
}