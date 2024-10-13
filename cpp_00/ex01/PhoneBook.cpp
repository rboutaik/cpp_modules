/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 21:14:05 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/03 11:05:41 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook(): size(0), index(0)
{
    
}

PhoneBook::~PhoneBook()
{
    
}

int PhoneBook::get_size()
{
    return (this->size);
}

void    PhoneBook::ADD(std::string f_name, std::string l_name, std::string n_name, std::string d_secret, std::string ph_nbr)
{
    arr[index].set_first_name(f_name);
    arr[index].set_last_name(l_name);
    arr[index].set_nick_name(n_name);
    arr[index].set_darkest_secret(d_secret);
    arr[index].set_phone_number(ph_nbr);
    index++;
    if (size < 8)
        size++;
    if (index == 8)
        index = 0;
}

void    PhoneBook::SEARCH(int id)
{
    std::cout << "First Name: " << arr[id].get_first_name() << std::endl;
    std::cout << "Last Name: " << arr[id].get_last_name() << std::endl;
    std::cout << "Nick Name: " << arr[id].get_nick_name() << std::endl;
    std::cout << "Darkest Secret: " << arr[id].get_darkest_secret() << std::endl;
    std::cout << "Phone Number: " << arr[id].get_phone_number() << std::endl;
}

std::string custom_output(std::string s)
{
    std::string new_s;

    new_s = s;
    if (s.size() > 10)
    {
        new_s = s.substr(0, 9);
        new_s += '.';
    }
    return (new_s);
}

void    PhoneBook::LIST()
{
    int id = 0;
    while (id < this->size)
    {
        std::cout << "|";
        std::cout << std::setw(10) << id;
        std::cout << "|";
        std::cout << std::setw(10) << custom_output(arr[id].get_first_name());
        std::cout << "|";
        std::cout << std::setw(10) << custom_output(arr[id].get_last_name());
        std::cout << "|";
        std::cout << std::setw(10) << custom_output(arr[id].get_nick_name());
        std::cout << "|";
        std::cout << std::endl;
        id++;
    }
}