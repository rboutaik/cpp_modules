/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 21:14:09 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/03 10:52:51 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Contact.hpp"

class PhoneBook {
    private:
        Contact arr[8];
        int     size;
        int     index;
    public:
        PhoneBook();
        ~PhoneBook();
        void    ADD(std::string f_name, std::string l_name, std::string n_name, std::string d_secret, std::string ph_nbr);
        void    SEARCH(int id);
        int     get_size();
        void    LIST();
};
