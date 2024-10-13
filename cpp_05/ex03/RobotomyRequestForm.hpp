/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:00:15 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/28 14:02:41 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <iostream>


class RobotomyRequestForm : public AForm
{
          
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm& f);
        RobotomyRequestForm(const std::string target);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& f);
        ~RobotomyRequestForm();


        void    execute(Bureaucrat const & executor) const;
};