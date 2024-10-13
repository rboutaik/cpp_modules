/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 11:02:53 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/27 16:09:36 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
    
}
Cure::Cure(std::string const & type): AMateria(type)
{
    
}
Cure& Cure::operator=(const Cure& m)
{
   if (this != &m)
   {
        // this->type = m.type;
   }
   return (*this); 
}

Cure::Cure(const Cure& m)
{
    *this = m;
}

Cure::~Cure()
{
    
}

Cure* Cure::clone() const
{
    return (new Cure());
}
void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "\'s wounds *" << std::endl;
}