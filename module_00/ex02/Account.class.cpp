/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 11:28:54 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/12 15:48:20 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>
#include <iomanip>

using	std::cout;
using	std::endl;

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void)
{
	time_t		t;
	struct tm	*tm;

	t = time(0);
	tm = localtime(&t);
	cout << "[" << tm->tm_year + 1900;
	cout << std::setfill('0') << std::setw(2) << tm->tm_mon + 1;
	cout << std::setfill('0') << std::setw(2) << tm->tm_mday << "_";
	cout << std::setfill('0') << std::setw(2) << tm->tm_hour;
	cout << std::setfill('0') << std::setw(2) << tm->tm_min;
	cout << std::setfill('0') << std::setw(2) << tm->tm_sec << "] ";
	return ;
}

int		Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int		Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int		Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int		Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	cout << "accounts:" << _nbAccounts;
	cout << ";total:" << _totalAmount;
	cout << ";deposits:" << _totalNbDeposits;
	cout << ";withdrawals:" << _totalNbWithdrawals << endl;
	return ;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	cout << "index:" << _accountIndex;
	cout << ";p_amount:" << _amount;
	cout << ";deposit:" << deposit;
	cout << ";amount:" << _amount + deposit;
	cout << ";nb_deposits:" << _nbDeposits + 1 << endl;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	return ;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	cout << "index:" << _accountIndex;
	cout << ";p_amount:" << _amount;
	if (_amount >= withdrawal)
	{
		cout << ";withdrawal:" << withdrawal;
		cout << ";amount:" << _amount - withdrawal;
		cout << ";nb_withdrawals:" << _nbWithdrawals + 1 << endl;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		return (true);
	}
	else
	{
		cout << ";withdrawal:refused" << endl;
		return (false);
	}
}

int		Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	cout << "index:" << _accountIndex;
	cout << ";amount:" << _amount;
	cout << ";deposits:" << _nbDeposits;
	cout << ";withdrawals:" << _nbWithdrawals << endl;
	return ;
}

		Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	cout << "index:" << _accountIndex;
	cout << ";amount:" << _amount;
	cout << ";created" << endl;
	return ;
}
		Account::~Account(void)
{
	_displayTimestamp();
	cout << "index:" << _accountIndex;
	cout << ";amount:" << _amount;
	cout << ";closed" << endl;
	return ;
}
