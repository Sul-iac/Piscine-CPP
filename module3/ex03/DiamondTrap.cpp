/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 20:51:13 by qbarron           #+#    #+#             */
/*   Updated: 2025/04/10 22:37:23 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_calp_name"), 
												ScavTrap(name), FragTrap(name), _name(name) {
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
	std::cout<<_name << " EVOLVED !!! " << std::endl;
}

void DiamondTrap::whoAmI() {
	std::cout << "My name is " << _name << std::endl;
	std::cout << "and my other name is " << _name << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "And this is how " << _name << " AKA " << ClapTrap::_name << " has perished." << std::endl;
}