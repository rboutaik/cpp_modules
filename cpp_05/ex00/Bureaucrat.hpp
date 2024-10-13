/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 21:44:32 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/28 17:39:55 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
        
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat& b);
        Bureaucrat(const std::string name, int grade);
        Bureaucrat& operator=(const Bureaucrat& b);
        ~Bureaucrat();

        const std::string getName() const;
        int getGrade() const;

        void    incrementGrade();
        void    decrementGrade();

        
        class   GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };

        class   GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

