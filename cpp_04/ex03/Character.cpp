/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:41:42 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/27 15:57:17 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

Character::Character(): name("character"), idx(0)
{
    mat[0] = NULL;
    mat[1] = NULL;
    mat[2] = NULL;
    mat[3] = NULL;
}
Character::Character(const std::string & name): name(name), idx(0)
{
    mat[0] = NULL;
    mat[1] = NULL;
    mat[2] = NULL;
    mat[3] = NULL;
}
Character& Character::operator=(const Character& m)
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

Character::Character(const Character& m)
{
    *this = m;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        delete mat[i];
}

std::string const & Character::getName() const
{
    return (this->name);
}
void Character::equip(AMateria* m)
{
    if (idx > 3)
    {
        std::cout << "The inventory is full\n";
        return ;
    }
    if (m->getType() == "ice")
    {
        mat[idx] = new Ice();
        idx++;
    }
    else if (m->getType() == "cure")
    {
        mat[idx] = new Cure();
        idx++;
    }
}
void Character::unequip(int idx)
{
    if (idx < 0 || idx >= this->idx)
    {
        std::cout << "Unexist equipment\n";
        return ;
    }

    mat[idx]->setAvail(0);
    
}
void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= this->idx)
    {
        std::cout << "Unexist equipment\n";
        return ;
    }

    if (mat[idx]->getAvail() == 0)
    {
        std::cout << "unavailable equipement\n";
        return ;
    }

    mat[idx]->use(target);
}