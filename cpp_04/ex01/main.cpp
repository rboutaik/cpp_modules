/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:52:21 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/30 12:46:11 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
    Animal* j = new Dog();
    Animal* i = new Dog();

    delete j;
    delete i;


    std::cout << "=====================\n";

    Animal *arr[10];

    for (int i = 0; i < 10; i++)
    {
        if (i % 2)
            arr[i] = new Dog();
        else
            arr[i] = new Cat();
    }

    
    for (int i = 0; i < 10; i++)
    {
        delete arr[i];
    }
    
    return 0;
}