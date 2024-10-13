/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:44:20 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/23 15:28:14 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
    private:
        Brain* b;
    public:
        Dog();
        ~Dog();
        Dog(const Dog& a);
        Dog& operator=(const Dog& a);
        
        void makeSound() const;
};