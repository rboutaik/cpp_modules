/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:00:16 by rboutaik          #+#    #+#             */
/*   Updated: 2024/10/02 10:56:53 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<typename T>
class Array
{
    private:
        T   *arr;
        unsigned int   length;
    public:
    Array(){arr = new T[0];length = 0;}
    ~Array(){delete[] arr;}
    Array& operator=(const Array& a)
    {
        if (this != &a)
        {
            delete[] arr;
            arr = new T[a.length];
            this->length = a.length;
        }
        return (*this);
    }
    Array(const Array& a) : arr(NULL){*this = a;}
    Array(unsigned int n){arr = new T[n];this->length = n;}
    T   size() const{return (this->length);}
    T&  operator[](unsigned int index)
    {
        if (index >= this->length)
            throw std::out_of_range("this index is out of range");
        return (arr[index]);
    }
    const T&  operator[](unsigned int index) const
    {
        if (index >= this->length)
            throw std::out_of_range("this index is out of range");
        return (arr[index]);
    }
};

