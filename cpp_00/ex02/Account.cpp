/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 23:08:47 by rboutaik          #+#    #+#             */
/*   Updated: 2024/09/08 01:52:14 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( void )
{
    this->_amount = 0;
    _accountIndex = Account::_nbAccounts;
    Account::_nbAccounts++;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}
Account::Account( int initial_deposit )
{
    this->_amount = initial_deposit;
    Account::_totalAmount += initial_deposit;
    _accountIndex = Account::_nbAccounts;
	_accountIndex = Account::_nbAccounts;
    Account::_nbAccounts++;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
    
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << initial_deposit << ";";
    std::cout << "created\n";
}
Account::~Account( void )
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "closed\n";
}

int	Account::getNbAccounts( void )
{
    return (Account::_nbAccounts);
}
int	Account::getTotalAmount( void )
{
    return (Account::_totalAmount);
}
int	Account::getNbDeposits( void )
{
    return (Account::_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
    return (Account::_totalNbWithdrawals);
}
void	Account::displayAccountsInfos( void )
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts << ";";
    std::cout << "total:" << Account::_totalAmount << ";";
    std::cout << "deposits:" << Account::_totalNbDeposits << ";";
    std::cout << "withdrawals:" << Account::_totalNbWithdrawals;
    std::cout << "\n";
}

void	Account::makeDeposit( int deposit )
{
    
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    std::cout << "deposits:" << deposit << ";";
    std::cout << "amount:" << this->_amount + deposit << ";";
    std::cout << "nb_deposits:" << this->_nbDeposits  + 1;
    std::cout << "\n";

    this->_amount += deposit;
    this->_nbDeposits++;
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits++;
}
bool	Account::makeWithdrawal( int withdrawal )
{
    
    if (this->_amount >= withdrawal)
    {
        Account::_displayTimestamp();
        std::cout << "index:" << this->_accountIndex << ";";
        std::cout << "p_amount:" << this->_amount << ";";
        std::cout << "withdrawal:" << withdrawal << ";";
        std::cout << "amount:" << this->_amount - withdrawal << ";";
        std::cout << "nb_withdrawals:" << this->_nbWithdrawals  + 1;
        std::cout << "\n";
        this->_amount -= withdrawal;
        Account::_totalAmount -= withdrawal;
        Account::_totalNbWithdrawals++;
        this->_nbWithdrawals++;
        return (true);
    }
        Account::_displayTimestamp();
        std::cout << "index:" << this->_accountIndex << ";";
        std::cout << "p_amount:" << this->_amount << ";";
        std::cout << "withdrawal:refused";
        std::cout << "\n";
    return (false);
}
int		Account::checkAmount( void ) const
{
    return (this->_amount);
}
void	Account::displayStatus( void ) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << "\n";
}

void Account::_displayTimestamp()
{
    char time_buff[20];
    std::time_t curr_time = std::time(NULL);
    std::strftime(time_buff, 20, "[%Y%m%d_%H%M%S] ", std::localtime(&curr_time));
    std::cout << time_buff;
}

