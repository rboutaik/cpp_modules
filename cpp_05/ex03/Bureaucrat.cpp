/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 21:44:41 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/28 17:36:35 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("unknown"), grade(150)
{
    
}
Bureaucrat::Bureaucrat(const Bureaucrat& b)
{
    *this = b;
}
Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    this->grade = grade;
    
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& b)
{
    if (this != &b)
    {
        this->grade = b.grade;
    }
    return (*this);
}
Bureaucrat::~Bureaucrat()
{
    
}

const std::string Bureaucrat::getName() const
{
    return (name);
}
int Bureaucrat::getGrade() const
{
    return (grade);   
}

void    Bureaucrat::incrementGrade()
{
    if (grade - 1 < 1)
        throw GradeTooHighException();
    grade--;
}
void    Bureaucrat::decrementGrade()
{
    if (grade + 1 > 150)
        throw GradeTooLowException();
    grade--;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
    os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
    return (os);
}

void    Bureaucrat::signForm(AForm &f)
{
    if (grade <= f.getGradeToSign())
    {
        if (f.getIsSigned() == 0)
        {
            std::cout << name << " signed " << f.getName() << std::endl;
            f.setIsSigned(1);
        }
        else
            std::cout << name << " couldn\'t sign " << f.getName() << " because its already signed" << std::endl;
    }
    else
    {
        std::cout << name << " couldn\'t sign " << f.getName() << " because its grade is too low" << std::endl;
    }
}


void    Bureaucrat::executeForm(AForm const & form)
{
    form.execute(*this);
    if (this->getGrade() > form.getGradeToExec() || form.getIsSigned() == 0)
        std::cout << this->name << " failed to execute " << form.getName() << std::endl;
    else
        std::cout << this->name << " executed " << form.getName() << std::endl;
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("grade too low");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("grade too high");
}