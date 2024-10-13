/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:59:56 by rboutaik          #+#    #+#             */
/*   Updated: 2024/10/01 16:54:52 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>



int main( void ) {
    
    int arr[5] = {1,2,3,4,5};

    iter(arr, 5, addTwo<int>);

    for (int i = 0; i < 5; i++)
        std::cout << arr[i] << std::endl;

    return 0;
}
