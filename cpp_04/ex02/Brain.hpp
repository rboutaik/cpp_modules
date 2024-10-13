/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:18:17 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/23 14:20:32 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
    public:
        std::string ideas[100];

        
        Brain();
        Brain(const Brain& b);
        Brain& operator=(const Brain& b);
        ~Brain();
};

