/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 10:22:05 by qbarron           #+#    #+#             */
/*   Updated: 2025/04/10 20:21:15 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	ClapTrap clapTrap1("Didier");	
	ScavTrap scavTrap("Tristan");

	scavTrap.attack("Didier");
	clapTrap1.attack("Tristan");
	scavTrap.guardGate();
	clapTrap1.beRepaired(1);
	scavTrap.beRepaired(1);

}

