
#pragma once

#include <iostream>
#include <map>
#include <list>
#include <fstream>
#include <exception>
#include <sstream>
#include <algorithm>

class   BitcoinExchange {

    private:
        std::map<std::string, float> data;
    
    public:
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& btc);
        BitcoinExchange& operator=(const BitcoinExchange& btc);


        void    calcule(std::string input);

};