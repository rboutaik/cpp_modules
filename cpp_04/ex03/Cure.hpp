/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 11:03:00 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/27 11:31:52 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{

    public:
        Cure();
        Cure(const Cure& m);
        Cure(std::string const & type);
        Cure& operator=(const Cure& m);
        ~Cure();
        Cure* clone() const;
        void use(ICharacter& target);
};