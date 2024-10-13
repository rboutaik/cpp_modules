/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 15:42:52 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/27 16:18:17 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

void    f()
{
    system("leaks ex03");
}

int main()
{
    atexit(f);

    {
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        ICharacter* me = new Character("me");
        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        ICharacter* bob = new Character("bob");
        me->use(0, *bob);
        me->use(1, *bob);
        
        
        delete bob;
        delete me;
        delete src;
    }


    {
        AMateria *i = new Ice();
        AMateria *c = new Cure();

        AMateria *clone = i->clone();

        ICharacter* car = new Character("rachid");


        car->equip(i);
        car->equip(c);

        car->unequip(1);

        car->use(0, *car);
        delete i;
        delete c;
        delete clone;
        delete car;
    }
    
    return 0;
}