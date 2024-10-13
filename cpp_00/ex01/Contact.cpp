/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 21:18:41 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/03 09:50:27 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    
}

Contact::~Contact()
{
    
}

std::string Contact::get_first_name()
{
    return (this->First_name);
}
std::string Contact::get_last_name()
{
    return (this->Last_name);
}
std::string Contact::get_nick_name()
{
    return (this->Nick_name);
}
std::string Contact::get_darkest_secret()
{
    return (this->Darkest_secret);
}
std::string Contact::get_phone_number()
{
    return (this->Phone_number);
}
void        Contact::set_first_name(std::string first_name)
{
    this->First_name = first_name;
}
void        Contact::set_last_name(std::string last_name)
{
    this->Last_name = last_name;
}
void        Contact::set_nick_name(std::string nick_name)
{
    this->Nick_name = nick_name;
}
void        Contact::set_darkest_secret(std::string darkest_secret)
{
    this->Darkest_secret = darkest_secret;
}
void        Contact::set_phone_number(std::string phone_number)
{
    this->Phone_number = phone_number;
}