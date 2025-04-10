/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 10:30:19 by qbarron           #+#    #+#             */
/*   Updated: 2025/04/10 17:46:27 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp" 

ClapTrap::ClapTrap() {}

ClapTrap::ClapTrap(std::string name) : _name(name), hitPoints(10),
										energyPoints(10), attackDamage(0) {
	std::cout<< name << " has sponed."<< std::endl;										
}

void ClapTrap::attack(const std::string &target) {
	if(this->energyPoints > 0) {
		std::cout<<"ClapTrap " << _name << " attacks " << target
			<< ", causing 1 points of damage too, this little bastard." << std::endl;
	}
	else if(this->energyPoints == 0 || this->hitPoints ==  0) {
		std::cout<<"ClapTrap " << _name
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
		std::cout<<_name<<" has already max health" << std::endl;
		this->energyPoints += amount;
		return;
	}
	this->hitPoints += amount;
	this->energyPoints -= 1;
	std::cout<<_name<<" has regained energy: " 
	 << amount<< " added" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << _name << " has been destroyed by its creator." << std::endl;
}