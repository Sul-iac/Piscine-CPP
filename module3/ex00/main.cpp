/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 10:22:05 by qbarron           #+#    #+#             */
/*   Updated: 2025/04/09 16:12:49 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
	ClapTrap clapTrap1("Didier");	
	
	clapTrap1.attack("Tristan");
	clapTrap1.beRepaired(1);	
}

