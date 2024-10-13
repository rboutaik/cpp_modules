/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:31:32 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/23 15:27:32 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class AAnimal
{
    protected:
        std::string type;

    public:
        AAnimal();
        virtual ~AAnimal();
        AAnimal(const AAnimal& a);
        AAnimal& operator=(const AAnimal&);
        
        std::string getType() const;

        virtual void makeSound() const = 0;
};

