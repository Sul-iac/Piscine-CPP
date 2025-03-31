/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 10:59:54 by qbarron           #+#    #+#             */
/*   Updated: 2025/03/31 15:34:23 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout<< " index:"<< _accountIndex<<";amount:"<<_amount<<";created"<<std::endl;
}

Account::~Account() {
	_displayTimestamp();
	std::cout<< " index:"<< _accountIndex<<";amount:"<<_amount<<";closed"<<std::endl;
	_nbAccounts--;
	_totalAmount -= _amount;
}