/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 10:22:05 by qbarron           #+#    #+#             */
/*   Updated: 2025/04/10 20:47:03 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
	ClapTrap clapTrap1("Didier");	
	ScavTrap scavTrap("Tristan");
	FragTrap fragTrap("Roger");	
		
	scavTrap.attack("Didier");
	clapTrap1.attack("Tristan");
	fragTrap.attack("Didier");
	scavTrap.guardGate();
	clapTrap1.beRepaired(1);
	fragTrap.highFivesGuys();
	scavTrap.beRepaired(1);
}

