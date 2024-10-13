/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 05:37:34 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/10 05:43:22 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string name = "HI THIS IS BRAIN";
    std::string*    stringPTR = &name;
    std::string&    stringREF = name;
    
    std::cout << "name address " << &name << std::endl;
    std::cout << "stringPTR address " << stringPTR << std::endl;
    std::cout << "stringREF address " << &stringREF << std::endl;

    std::cout << "=========================================" << std::endl;
    
    std::cout << "name value " << name << std::endl;
    std::cout << "stringPTR value " << *stringPTR << std::endl;
    std::cout << "stringREF value " << stringREF << std::endl;
    
    return (0); 
}