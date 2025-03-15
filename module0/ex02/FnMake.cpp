/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FnMake.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 07:54:54 by qbarron           #+#    #+#             */
/*   Updated: 2025/03/15 14:07:21 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"


void	Account::makeDeposit( int deposit ){
	_displayTimestamp();
	std::cout<<" index:"<<_accountIndex<<";amount:"<<_amount;
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	std::cout<<";deposits:"<<deposit<<";amount:"<<_amount<<";nb_deposits:"<<_nbDeposits<<std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	_displayTimestamp();
	std::cout<<" index:"<<_accountIndex<<";p_amount:"<<_amount;
	if(withdrawal > _amount){
		std::cout<<";withdrawal:refused"<<std::endl;
		return 1;
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	std::cout<<";withdrawal:"<<withdrawal<<";amount:"<<_amount<<";nb_withdrawal:"<<_nbWithdrawals<<std::endl;
}

int		Account::checkAmount( void ) const{
	
}
