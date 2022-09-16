/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 09:56:08 by ullorent          #+#    #+#             */
/*   Updated: 2022/09/16 14:02:15 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>

Account::Account (int initial_deposit) {
	_nbWithdrawals = 0;
	_nbDeposits = 0;
	_amount = 0;
	_accountIndex = 0;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::~Account () {}

//Data getters
int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}
int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}
int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

//Timestamp and data display
void	Account::_displayTimestamp( void )
{
	struct	tm		*tm_strct;
	std::time_t		time;
	
	time = std::time(nullptr);
	tm_strct = std::localtime(&time);
	std::cout << "[";
	std::cout << tm_strct->tm_year + 1900;
	std::cout << std::setw(2) <<std::setfill('0') << tm_strct->tm_mon + 1;
	std::cout << std::setw(2) <<std::setfill('0') << tm_strct->tm_mday;
	std::cout << "_";
	std::cout << std::setw(2) <<std::setfill('0') << tm_strct->tm_hour;
	std::cout << std::setw(2) <<std::setfill('0') << tm_strct->tm_min;
	std::cout << std::setw(2) <<std::setfill('0') << tm_strct->tm_sec;
	std::cout << "] ";
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals;
	std::cout << std::endl;
	return ;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created";
	std::cout << std::endl;
	//std::cout << "It works (displayStatus)" << std::endl;
}

//Data creation
void	Account::makeDeposit(int deposit)
{
	//std::cout << "It works (makeDeposit)" << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_nbWithdrawals++;
	//std::cout << "It works (makeWithdrawal)" << std::endl;
	return (0);
}

int		Account::checkAmount( void ) const
{
	//std::cout << "It works (checkAmount)" << std::endl;
	return (1);
}

