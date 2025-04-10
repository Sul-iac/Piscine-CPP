/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:17:19 by qbarron           #+#    #+#             */
/*   Updated: 2025/04/10 17:46:43 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name){
	std::cout<<name<<" has been created."<<std::endl;
	_name = name;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

void ScavTrap::attack(const std::string& target) {
	if(this->energyPoints > 0) {
		std::cout<<"ScavTrap " << _name << " attacks " << target
			<< ", causing 1 points of damage" << std::endl;
	}
	else if(this->energyPoints == 0 || this->hitPoints ==  0) {
		std::cout<<"ScavTrap " << _name
			<< " doesn't have energy left. He must recover."<<std::endl;
	}
	energyPoints -= 1;
}

void ScavTrap::guardGate() { 
	std::cout<<"ScavTrap" <<_name<< " has entered guard mode." << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout<<_name<<" has been deleted." << std::endl;
}