/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:00:15 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/28 14:02:37 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <iostream>


class PresidentialPardonForm : public AForm
{
          
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm& f);
        PresidentialPardonForm(const std::string target);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& f);
        ~PresidentialPardonForm();


        void    execute(Bureaucrat const & executor) const;
};