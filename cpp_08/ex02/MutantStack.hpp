/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:00:17 by rboutaik          #+#    #+#             */
/*   Updated: 2024/10/02 18:45:33 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

template<typename T>
class MutantStack :public std::stack<T>
{
    private:
        std::vector<T> v;
    public:
        ~MutantStack(){};
        MutantStack() : std::stack<T>() {}
        MutantStack(const MutantStack& s) : std::stack<T>(s), v(s.v) {}
        MutantStack& operator=(const MutantStack& s)
        {
            if (this != &s)
            {
                std::stack<T>::operator=(s);
                v = s.v;
            }
            return (*this);
        };

        typedef typename std::vector<T>::iterator iterator;
        void    push(T n)
        {
            v.push_back(n);
            std::stack<T>::push(n);
        };
        T&    top()
        {
            if (v.empty())
                throw std::out_of_range("MutantStack is empty");
            return (v.back());
        };
        void    pop()
        {
            if (v.empty())
                throw std::out_of_range("MutantStack is empty");
            v.pop_back();
            std::stack<T>::pop();
        }
        size_t  size(){return (v.size());};
        bool    empty(){return (v.empty());};
        iterator begin(){return (v.begin());};
        iterator end(){return (v.end());};

};