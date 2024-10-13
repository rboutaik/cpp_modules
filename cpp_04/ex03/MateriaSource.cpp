/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 15:26:26 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/27 15:42:06 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource(): name("character"), idx(0)
{
    mat[0] = NULL;
    mat[1] = NULL;
    mat[2] = NULL;
    mat[3] = NULL;
}

MateriaSource::MateriaSource(std::string & name): name(name), idx(0)
{
    mat[0] = NULL;
    mat[1] = NULL;
    mat[2] = NULL;
    mat[3] = NULL;
}
MateriaSource& MateriaSource::operator=(const MateriaSource& m)
{
   if (this != &m)
   {
        this->name = m.name;
        for (int i = 0; i < 4; i++)
            delete mat[i];
        for (int i = 0; i < m.idx; i++)
        {
            if (m.name == "ice")
            {
                mat[i] = new Ice();
            }
            else if (m.name == "cure")
            {
                mat[i] = new Cure();
            }
        }
        this->idx = m.idx;
   }
   return (*this); 
}

MateriaSource::MateriaSource(const MateriaSource& m)
{
    *this = m;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        delete mat[i];
}


std::string const & MateriaSource::getName() const
{
    return (this->name);
}


void MateriaSource::learnMateria(AMateria* m)
{
    if (idx > 3)
    {
        std::cout << "The inventory is full\n";
        return ;
    }
        mat[idx] = m;
        idx++;
}


AMateria* MateriaSource::createMateria(std::string const & type)
{
    int i = idx - 1;

    while (i >= 0)
    {
        if (mat[i]->getType() == type)
            return (mat[i]);
        i--;
    }
    return (NULL);
}