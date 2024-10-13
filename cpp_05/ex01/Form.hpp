/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 11:15:23 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/28 17:39:05 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <iostream>


class Bureaucrat;
class Form
{
    private:
        const std::string name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExec;
        
    public:
        Form();
        Form(const Form& f);
        Form(const std::string name, int gradeToSign, int gradeToExec);
        Form& operator=(const Form& f);
        ~Form();

        const std::string getName() const;
        int getGradeToSign() const;
        int getGradeToExec() const;
        bool getIsSigned() const;
        void    setIsSigned(bool b);

        void    beSigned(const Bureaucrat& b);


        class   GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };

        class   GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };

};
std::ostream& operator<<(std::ostream& os, const Form& f);