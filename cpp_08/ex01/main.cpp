/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:59:35 by rboutaik          #+#    #+#             */
/*   Updated: 2024/10/02 17:28:37 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{

    

    {
        try
        {
            std::vector<int> v;
            Span sp = Span(6);

            sp.addNumber(10);

            v.push_back(1);
            v.push_back(2);
            v.push_back(3);
            v.push_back(4);
            v.push_back(5);

            sp.addRange(v);


            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;       
        }
        catch(std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }

    return 0;
}