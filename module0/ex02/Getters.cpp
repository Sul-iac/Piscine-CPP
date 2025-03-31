/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Getters.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 06:27:03 by qbarron           #+#    #+#             */
/*   Updated: 2025/03/31 15:23:38 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int		Account::getNbAccounts( void ){
	return (_nbAccounts);
}

int		Account::getTotalAmount( void ){
	return (_totalAmount);
}

int		Account::getNbDeposits( void ){
	return (_totalNbDeposits);
}

int		Account::getNbWithdrawals( void ){
	return (_totalNbWithdrawals);
}


