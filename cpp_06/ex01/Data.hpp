/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:08:31 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/30 20:00:54 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class   Data
{
    public:
        int nb;
        ~Data();
        Data& operator=(const Data& s);
        Data();
        Data(const Data& s);
        Data(int nb);
        
    
};