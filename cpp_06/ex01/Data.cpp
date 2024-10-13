/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:08:25 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/30 20:00:50 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::~Data()
{

}

Data& Data::operator=(const Data& s)
{
    if (this != &s)
        this->nb = s.nb;
    return (*this);
}

Data::Data() : nb(0)
{

}
Data::Data(int nb) : nb(nb)
{

}

Data::Data(const Data& s)
{
    *this = s;
}