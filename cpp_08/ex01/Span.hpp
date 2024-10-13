/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:00:17 by rboutaik          #+#    #+#             */
/*   Updated: 2024/10/02 17:22:06 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <algorithm>
#include <set>
#include <limits>
#include <vector>

class Span
{
    private:
        std::multiset<int> st;
        int N;
    public:
        Span(int N);
        ~Span();
        Span(const Span& s);
        Span& operator=(const Span& s);

        void    addNumber(int n);
        int    shortestSpan();
        int    longestSpan();

        void    addRange(std::vector<int> &v);
};