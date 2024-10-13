/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 06:36:03 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/11 02:01:54 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void    main_program(char *av[])
{
    std::string line;
    std::string content;
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::string file = av[1];
    std::ifstream infile(file);
    if (infile.fail())
    {
        std::cout << "opening inFile Failure!!\n";
        return ;
    }
    std::ofstream outfile(file + ".replace");
    
    if (outfile.fail())
    {
        std::cout << "opening outFile Failure!!\n";
        return ;
    }
    
    while (std::getline(infile, line))
    {
        content += line;
        if (!infile.eof())
            content += '\n';
    }
    
    size_t idx = content.find(s1);
    while (idx != std::string::npos && !s1.empty())
    {
        content.erase(idx, s1.size());
        content.insert(idx, s2);
        idx = content.find(s1, idx + s2.size());
    }
    outfile << content;
}

int main(int ac, char *av[])
{
    if (ac != 4)
    {
        std::cout << "Invalid Number Of Arguments\n";
        return (0);
    }
    main_program(av);
    return (0);
}