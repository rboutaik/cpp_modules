/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:44:20 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/23 12:59:29 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        ~Dog();
        Dog(const Dog& a);
        Dog& operator=(const Dog&);
        
        void makeSound() const;
};