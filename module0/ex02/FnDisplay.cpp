/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FnDisplay.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 06:34:19 by qbarron           #+#    #+#             */
/*   Updated: 2025/03/31 15:35:13 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

void	Account::displayAccountsInfos( void ){
		_displayTimestamp();
		std::cout << " accounts:" << getNbAccounts() << ";amount:" 
			<< getTotalAmount() << ";deposits:" << getNbDeposits() 
			<< ";withdrawals:" << getNbWithdrawals() << std::endl; 
}

void	Account::_displayTimestamp( void ){
	std::time_t t = std::time(NULL);
	std::tm* now = std::localtime(&t);
	std::cout << "[" << (now->tm_year + 1900)
			<< std::setw(2) << std::setfill('0') << (now->tm_mon + 1)
			<< std::setw(2) << std::setfill('0') << now->tm_mday << '_'
			<< std::setw(2) << std::setfill('0') << now->tm_hour 
			<< std::setw(2) << std::setfill('0') << now->tm_hour
			<< std::setw(2) << std::setfill('0') << now->tm_min
			<< std::setw(2) << std::setfill('0') << now->tm_sec << "]";
}

void	Account::displayStatus( void ) const{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount
			<< ";deposits:" << _nbDeposits 
			<< ";withdrawals:" << _nbWithdrawals << std::endl;
}
