/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:00:15 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/28 14:02:44 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <iostream>
#include <fstream>


class ShrubberyCreationForm : public AForm
{
          
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm& f);
        ShrubberyCreationForm(const std::string target);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& f);
        ~ShrubberyCreationForm();


        void    execute(Bureaucrat const & executor) const;
};