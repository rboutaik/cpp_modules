/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 11:15:12 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/28 17:39:40 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("unknown"), isSigned(0), gradeToSign(1), gradeToExec(1)
{
    
}
Form::Form(const Form& f) : name(f.name), isSigned(f.isSigned) , gradeToSign(f.gradeToSign), gradeToExec(f.gradeToExec)
{
    
}
Form::Form(const std::string name, int gradeToSign, int gradeToExec) : name(name), isSigned(0) , gradeToSign(gradeToSign), gradeToExec(gradeToExec)
{
    if (gradeToSign < 1 || gradeToExec < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExec > 150)
        throw GradeTooLowException();
}
Form& Form::operator=(const Form& f)
{
    if (this != &f)
    {
        this->isSigned = f.isSigned;
    }
    return (*this);
}
Form::~Form()
{
    
}

const std::string Form::getName() const
{
    return (name);
}
int Form::getGradeToSign() const
{
    return (gradeToSign);   
}

int Form::getGradeToExec() const
{
    return (gradeToExec);   
}

bool Form::getIsSigned() const
{
    return (isSigned);   
}

std::ostream& operator<<(std::ostream& os, const Form& f)
{
    os << f.getName() << ", Form isSigned bool : " << f.getIsSigned() << ", gradeToSign : " << f.getGradeToSign() << ", gradeToExecute : " << f.getGradeToExec();
    return (os);
}

void    Form::beSigned(const Bureaucrat& b)
{
    if (b.getGrade() > gradeToSign)
        throw GradeTooLowException();
    isSigned = 1;
}

void    Form::setIsSigned(bool b)
{
    isSigned = b;
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("grade too low");
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("grade too high");
}