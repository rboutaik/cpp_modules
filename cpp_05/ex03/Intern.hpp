/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:55:01 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/28 17:07:44 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>


class Intern
{

    public:
        Intern();
        Intern(const Intern& f);
        Intern& operator=(const Intern& f);
        ~Intern();

        AForm* makeForm(std::string name, std::string target);

};
