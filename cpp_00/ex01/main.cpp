/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 21:27:25 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/08 02:04:49 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int is_spaces(std::string s)
{
    int i = 0;
    
    while (s[i])
    {
        if (s[i] < 32 || s[i] > 126)
            return (1);
        i++;
    }
    i = 0;
    while (s[i])
    {
        if (s[i] != ' ')
            return (0);
        i++;
    }
    return (1);
}

int is_digits(std::string s)
{
    int i = 0;

    while (s[i])
    {
        if (s[i] < '0' || s[i] > '9')
            return (0);
        i++;
    }
    return (1);
}

void    _add(PhoneBook *p)
{
    std::string f_name;
    std::string l_name;
    std::string n_name;
    std::string d_secret;
    std::string ph_nbr;
    

        /*  first name  */
    while (f_name.empty() || is_spaces(f_name))
    {
        std::cout << "First Name: ";
        getline(std::cin, f_name);
        if (std::cin.eof())
            return ;
    }
        /*  last name  */
    while (l_name.empty() || is_spaces(l_name))
    {
        std::cout << "last Name: ";
        getline(std::cin, l_name);
        if (std::cin.eof())
            return ;
    }
        /*  nick name  */
    while (n_name.empty() || is_spaces(n_name))
    {
        std::cout << "nick Name: ";
        getline(std::cin, n_name);
        if (std::cin.eof())
            return ;
    }
        /*  darkest secret  */
    while (d_secret.empty() || is_spaces(d_secret))
    {
        std::cout << "darkest secret: ";
        getline(std::cin, d_secret);
        if (std::cin.eof())
            return ;
    }
        /*  phone number  */
    while (ph_nbr.empty() || is_spaces(ph_nbr) || !is_digits(ph_nbr))
    {
        std::cout << "phone number: ";
        getline(std::cin, ph_nbr);
        if (std::cin.eof())
            return ;
    }

    p->ADD(f_name, l_name, n_name, d_secret, ph_nbr);
}

int s_to_int(std::string s)
{
    int nbr = 10;
    
    if (s[0])
        nbr = s[0] - '0';
    if (s[1])
        nbr += s[1] - '0';
    return (nbr);
}

void    _search(PhoneBook *p)
{
    std::string idx;

    p->LIST();
    std::cout << "Enter The Index: ";
    getline(std::cin, idx);
    if (std::cin.eof())
        return ;
    if (idx.empty() || !is_digits(idx) || s_to_int(idx) >= p->get_size())
    {
        std::cout << "invalid index" << std::endl;
        return ;
    }
    p->SEARCH(s_to_int(idx));
}

int main()
{
    PhoneBook p;
    std::string cmd;
    
    while (1)
    {
        std::cout << "Enter The Command: ";
        getline(std::cin, cmd);
        if (std::cin.eof())
            break ;
        if (cmd == "ADD")
            _add(&p);
        else if (cmd == "SEARCH")
            _search(&p);
        else if (cmd == "EXIT")
            break ;
        if (std::cin.eof())
            break ; 
    }
    return (0);
}