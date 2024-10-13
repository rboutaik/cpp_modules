/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 11:15:12 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/28 17:35:41 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("unknown"), isSigned(0), gradeToSign(1), gradeToExec(1)
{
    
}
AForm::AForm(const AForm& f) : name(f.name), isSigned(f.isSigned) , gradeToSign(f.gradeToSign), gradeToExec(f.gradeToExec)
{
    
}
AForm::AForm(const std::string name, int gradeToSign, int gradeToExec) : name(name), isSigned(0) , gradeToSign(gradeToSign), gradeToExec(gradeToExec)
{
    if (gradeToSign < 1 || gradeToExec < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExec > 150)
        throw GradeTooLowException();
}
AForm& AForm::operator=(const AForm& f)
{
    if (this != &f)
    {
        this->isSigned = f.isSigned;
    }
    return (*this);
}
AForm::~AForm()
{
    
}

const std::string AForm::getName() const
{
    return (name);
}
int AForm::getGradeToSign() const
{
    return (gradeToSign);   
}

int AForm::getGradeToExec() const
{
    return (gradeToExec);   
}

bool AForm::getIsSigned() const
{
    return (isSigned);   
}

std::ostream& operator<<(std::ostream& os, const AForm& f)
{
    os << f.getName() << ", AForm isSigned bool : " << f.getIsSigned() << ", gradeToSign : " << f.getGradeToSign() << ", gradeToExecute : " << f.getGradeToExec();
    return (os);
}

void    AForm::beSigned(const Bureaucrat& b)
{
    if (b.getGrade() > gradeToSign)
        throw GradeTooLowException();
    isSigned = 1;
}

void    AForm::setIsSigned(bool b)
{
    isSigned = b;
}

const char* AForm::FormNotSignedException::what() const throw()
{
    return ("form not signed");
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return ("grade too low");
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return ("grade too high");
}