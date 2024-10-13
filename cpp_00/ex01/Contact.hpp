/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 21:19:02 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/03 09:47:50 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
class Contact {
    
    private:
        std::string First_name;
        std::string Last_name;
        std::string Nick_name;
        std::string Darkest_secret;
        std::string Phone_number;
        
    public:
        Contact();
        ~Contact();
        std::string get_first_name();
        std::string get_last_name();
        std::string get_nick_name();
        std::string get_darkest_secret();
        std::string get_phone_number();
        void        set_first_name(std::string first_name);
        void        set_last_name(std::string last_name);
        void        set_nick_name(std::string nick_name);
        void        set_darkest_secret(std::string darkest_secret);
        void        set_phone_number(std::string phone_number);
};
