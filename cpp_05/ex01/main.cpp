/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 21:44:07 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/28 12:11:59 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{

    {
        try
        {
            Bureaucrat b("rachid", 10);
            Form f("form1", 11, -1);
            
            b.decrementGrade();
        }
        catch(std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }
    }

    std::cout << "===========================\n";

    {
        try
        {
            Bureaucrat b("rachid", 10);
            Form f("form1", 9, 1);

            std::cout << f << std::endl;

            f.beSigned(b);
            
        }
        catch(std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }
    }

    std::cout << "===========================\n";

        {
        try
        {
            Bureaucrat b("rachid", 10);
            Form f("form1", 11, 1);


            b.signForm(f);
            b.signForm(f);
            
        }
        catch(std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    
    return (0);
}