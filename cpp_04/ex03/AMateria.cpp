/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 10:43:24 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/27 16:07:26 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(): type("Unknown"), avail(1)
{
    
}
AMateria::AMateria(std::string const & type): type(type), avail(1)
{
    
}
AMateria& AMateria::operator=(const AMateria& m)
{
   if (this != &m)
   {
        // this->type = m.type;
        this->avail = m.avail;
   }
   return (*this); 
}

AMateria::AMateria(const AMateria& m)
{
    *this = m;
}

AMateria::~AMateria()
{
    
}
// 
std::string const & AMateria::getType() const
{
    return (type);
}

int AMateria::getAvail() const
{
    return avail;
}
void    AMateria::setAvail(int av)
{
    this->avail = av;   
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}