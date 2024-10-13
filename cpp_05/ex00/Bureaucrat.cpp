/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 21:44:41 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/28 17:40:06 by rboutaik         ###   ########.fr       */
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


const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("grade too low");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("grade too high");
}