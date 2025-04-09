/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 10:30:19 by qbarron           #+#    #+#             */
/*   Updated: 2025/04/09 12:43:32 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp" 

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10),
										energyPoints(10), attackDamage(0) {
	std::cout<< name << " has sponed."<< std::endl;										
}

// std::ostream& operator<<(std::ostream& flux, ClapTrap const& value) {
// 	flux << value.getHitPoints() << "\n"
// 		 << value.getEnergyPoints() << "\n"
// 		 << value.getAttackDamage() << "\n"
// 		 << value.getName() << std::endl;
// 	return(flux);
// }

// int ClapTrap::getHitPoints() const {
// 	return(hitPoints);
// }

// int ClapTrap::getEnergyPoints() const {
// 	return(energyPoints);
// }

// int ClapTrap::getAttackDamage() const {
// 	return(attackDamage);
// }

// std::string ClapTrap::getName() const {
// 	return(name);
// }

void ClapTrap::attack(const std::string &target) {
	if(this->energyPoints > 0) {
		std::cout<<"ClapTrap " << name << " attacks " << target
			<< ", causing 1 points of damage" << std::endl;
	}
	else if(this->energyPoints == 0 || this->hitPoints ==  0) {
		std::cout<<"ClapTrap " << name
			<< " doesn't have energy left. He must recover."<<std::endl;
	}
	energyPoints -= 1;
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->attackDamage += amount;
	this->hitPoints -= 1;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if(this->hitPoints >= 10) {
		std::cout<<name<<" has already max health" << std::endl;
		this->energyPoints += amount;
		return;
	}
	this->hitPoints += amount;
	this->energyPoints -= 1;
	std::cout<<name<<" has been regained energy: " 
	 << amount<< " added" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << name << " has been destroyed by its creator." << std::endl;
}