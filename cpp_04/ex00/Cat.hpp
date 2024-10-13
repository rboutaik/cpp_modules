/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:50:36 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/23 12:59:22 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        ~Cat();
        Cat(const Cat& a);
        Cat& operator=(const Cat&);
        
        void makeSound() const;
};