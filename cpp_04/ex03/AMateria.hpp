/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 10:43:52 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/27 16:02:01 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class ICharacter;
class AMateria
{
    protected:
        const std::string type;
        int avail;

    public:
        AMateria();
        AMateria(const AMateria& m);
        AMateria(std::string const & type);
        AMateria& operator=(const AMateria& m);
        virtual ~AMateria();
        
        int getAvail() const;
        void    setAvail(int av);

        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};