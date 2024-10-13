/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:00:07 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/28 14:16:11 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"



ShrubberyCreationForm::ShrubberyCreationForm() : AForm("unknown", 145, 137)
{
    
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& f) : AForm(f.getName(), 145, 137)
{
    
}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm(target, 145, 137)
{
    
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& f)
{
    if (this != &f)
    {
        setIsSigned(f.getIsSigned());
    }
    return (*this);
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->getGradeToExec())
        throw GradeTooLowException();
    else
    {
        if (this->getIsSigned() == 0)
            throw FormNotSignedException();
        else
        {
            std::ofstream outfile(getName() + "_shrubbery");
    
            if (outfile.fail())
            {
                std::cout << "opening outFile Failure!!\n";
                return ;
            }

            outfile << "          &&& &&  & &&\n";
            outfile << "      && &\\/&\\|& ()|/ @, &&\n";
            outfile << "      &\\/(/&/&||/& /_/)_)&_&_&\n";
            outfile << "   &() &\\/&|()|/&\\/ '%\" & ()\n";
            outfile << "  &_\\_&&_\\ |& |&&/&__%_/_& &&\n";
            outfile << "&&   && & &| &| /& & % ()& /&&\n";
            outfile << " ()&_---()&\\&\\|&&-&&--%---()~\n";
            outfile << "     &&     \\|||\n";
            outfile << "             |||\n";
            outfile << "             |||\n";
            outfile << "             |||\n";
            outfile << "       , -=-~  .-^- _\n";
            outfile.close();
        }
    }
}