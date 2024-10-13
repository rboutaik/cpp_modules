/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 10:54:28 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/27 16:04:52 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
    
}
Ice::Ice(std::string const & type): AMateria(type)
{
    
}
Ice& Ice::operator=(const Ice& m)
{
   if (this != &m)
   {
        // this->type = m.type;
   }
   return (*this); 
}

Ice::Ice(const Ice& m)
{
    *this = m;
}

Ice::~Ice()
{
    
}

Ice* Ice::clone() const
{
    return (new Ice());
}
void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
