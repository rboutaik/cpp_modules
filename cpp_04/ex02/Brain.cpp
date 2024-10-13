/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:18:07 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/23 14:44:36 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain: constructor called\n";
}

Brain::Brain(const Brain& b)
{
    *this = b;
    std::cout << "Brain: copy constructor called\n";
}

Brain& Brain::operator=(const Brain& b)
{
    if (this != &b)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = b.ideas[i];
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain: destructor called\n";
}
