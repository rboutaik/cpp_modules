/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:42:37 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/27 15:57:06 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"
#include <iostream>

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria* mat[4];
        int idx;
    public:
        Character();
        Character(const Character& m);
        Character(const std::string& type);
        Character& operator=(const Character& m);
        ~Character();
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

