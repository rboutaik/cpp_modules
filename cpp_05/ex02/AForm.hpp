/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 11:15:23 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/28 17:37:18 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <iostream>


class Bureaucrat;
class AForm
{
    private:
        const std::string name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExec;
        
    public:
        AForm();
        AForm(const AForm& f);
        AForm(const std::string name, int gradeToSign, int gradeToExec);
        AForm& operator=(const AForm& f);
        virtual ~AForm();

        const std::string getName() const;
        int getGradeToSign() const;
        int getGradeToExec() const;
        bool getIsSigned() const;
        void    setIsSigned(bool b);

        void    beSigned(const Bureaucrat& b);

        virtual void    execute(Bureaucrat const & executor) const = 0;

        class   GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };

        class   GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };

        class   FormNotSignedException : public std::exception {
            public:
                virtual const char* what() const throw();
        };

};
std::ostream& operator<<(std::ostream& os, const AForm& f);