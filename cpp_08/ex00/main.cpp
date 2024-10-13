/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:59:35 by rboutaik          #+#    #+#             */
/*   Updated: 2024/10/02 16:23:44 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main()
{
    try
    {
        std::vector<int> v(5);

        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        v.push_back(4);
        v.push_back(5);

        std::vector<int>::iterator it =  easyfind(v, 5);
        std::cout << *it << std::endl;
        
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    
    return (0);
}