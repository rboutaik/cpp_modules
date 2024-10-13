/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:59:56 by rboutaik          #+#    #+#             */
/*   Updated: 2024/10/02 10:56:39 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


int main( void ) {
    
    try
    {
        const Array<int> A(5);

        for (int i = 0; i < A.size(); i++)
            A[i] = 1000 + i;

        for (int i = 0; i < A.size(); i++)
            std::cout << A[i] << std::endl;
        A[-1] = 33;
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}

