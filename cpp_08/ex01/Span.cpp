/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:37:17 by rboutaik          #+#    #+#             */
/*   Updated: 2024/10/02 17:27:14 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(int N)
{
    if (N <= 0)
        throw std::out_of_range("Invalid container size");

    this->N = N;
}

Span::~Span()
{
    
}

Span::Span(const Span& s)
{
    *this = s;
}

Span& Span::operator=(const Span& s)
{
    if (this != &s)
    {
        this->N = s.N;
        std::multiset<int>::iterator it;
        this->st.clear();
        for (it = s.st.begin(); it != s.st.end(); it++)
        {
            this->st.insert(*it);
        }
    }
    return (*this);
}


void    Span::addNumber(int n)
{
    if ((int)st.size() >= N)
        throw std::out_of_range("Container is full");
    st.insert(n);
}

int    Span::shortestSpan()
{
    if (st.size() < 2)
        throw std::length_error("No enough elements");
    std::multiset<int>::iterator it = st.begin();
    it++;
    std::multiset<int>::iterator it2 = st.begin();
    int minspan = INT_MAX;
    for (; it != st.end(); it++)
    {
        if (*it - *it2 < minspan)
            minspan = *it - *it2;
        it2++;
    }
    return (minspan);
}

int    Span::longestSpan()
{
    if (st.size() < 2)
        throw std::length_error("No enough elements");
    return (*st.rbegin() - *st.begin());
}



void    Span::addRange(std::vector<int> &v)
{
    if (st.size() + v.size() > (size_t)N)
        throw std::out_of_range("Container is full");

    st.insert(v.begin(), v.end());
}