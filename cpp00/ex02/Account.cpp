/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 09:56:08 by ullorent          #+#    #+#             */
/*   Updated: 2022/09/20 13:05:29 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream> // --- std::cout and so on library
#include <iomanip> // --- Table setw creation library
#include <string> // --- All strings related library
#include <ctime> // --- Time struct library

// --- Constructors --- //
Account::Account (void) {
	if (!_nbAccounts)
		_nbAccounts = 0;
	_nbWithdrawals = 0;
	_nbDeposits = 0;
	_amount = 0;
	_totalAmount += _amount;
	_accountIndex = _nbAccounts;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
	_nbAccounts++;
}

Account::Account (int initial_deposit) {
	if (!_nbAccounts)
		_nbAccounts = 0;
	_nbWithdrawals = 0;
	_nbDeposits = 0;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_accountIndex = _nbAccounts;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
	_nbAccounts++;
}

// --- Static variables --- //
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

// --- Destructor --- //
Account::~Account () {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
}

// --- Data getters --- //
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

// --- Timestamp and data display --- //
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
	std::cout << "accounts:" << _nbAccounts;
	std::cout << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
	return ;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}

// --- Data creation --- //
void	Account::makeDeposit(int deposit)
{
	if (deposit)
	{
		_totalAmount += deposit;
		_totalNbDeposits++;
		_nbDeposits++;
		_displayTimestamp();
		std::cout << "index:" << _accountIndex;
		std::cout << ";p_amount:" << _amount;
		std::cout << ";deposit:" << deposit;
		_amount += deposit;
		std::cout << ";amount:" << _amount;
		std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
	}
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (_amount >= withdrawal)
	{
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		_nbWithdrawals++;
		_displayTimestamp();
		std::cout << "index:" << _accountIndex;
		std::cout << ";p_amount:" << _amount;
		std::cout << ";withdrawal:" << withdrawal;
		_amount -= withdrawal;
		std::cout << ";amount:" << _amount;
		std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (1);
	}
	else
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex;
		std::cout << ";p_amount:" << _amount;
		std::cout << ";withdrawal:refused" << std::endl;
	}
	return (0);
}

// --- Amount checker (for personal use) --- //
int		Account::checkAmount( void ) const
{
	if (this->_amount < 0)
		return (1);
	return (0);
}
