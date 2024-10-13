/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 10:54:36 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/27 11:31:39 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{

    public:
        Ice();
        Ice(const Ice& m);
        Ice(std::string const & type);
        Ice& operator=(const Ice& m);
        ~Ice();
        Ice* clone() const;
        void use(ICharacter& target);
};

