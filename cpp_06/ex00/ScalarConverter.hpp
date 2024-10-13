/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:08:31 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/30 19:25:25 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <limits>
#include <iomanip>

class   ScalarConverter
{
    public:
        static void    convert(std::string s);
    private:
        ~ScalarConverter();
        ScalarConverter& operator=(ScalarConverter& s);
        ScalarConverter();
        ScalarConverter(const ScalarConverter& s);
        
};