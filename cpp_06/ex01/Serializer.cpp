/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:08:25 by rboutaik          #+#    #+#             */
/*   Updated: 2024/10/01 10:07:34 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::~Serializer()
{

}

Serializer& Serializer::operator=(const Serializer& s)
{
    (void)s;
    return (*this);
}

Serializer::Serializer()
{

}

Serializer::Serializer(const Serializer& s)
{
    (void)s;
}


uintptr_t Serializer::serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}
Data* Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}