/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 15:26:36 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/27 15:35:28 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        std::string name;
        AMateria* mat[4];
        int idx;
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& m);
        MateriaSource(std::string& type);
        std::string const & getName() const;
        MateriaSource& operator=(const MateriaSource& m);
        ~MateriaSource();

        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};