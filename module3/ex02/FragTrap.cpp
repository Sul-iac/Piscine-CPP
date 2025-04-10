/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 20:30:16 by qbarron           #+#    #+#             */
/*   Updated: 2025/04/10 20:48:45 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) {
	std::cout << "Fragtrap" << _name << " has also been created !" << std::endl;
	_name = name;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}
 
void FragTrap::attack(const std::string& target) {
	if(this->energyPoints > 0) {
		std::cout<<"FragTrap " << _name << " attacks " << target
			<< ", but FragTrap doesn't like violence." << std::endl;
	}
	else if(this->energyPoints == 0 || this->hitPoints ==  0) {
		std::cout<<"ScavTrap " << _name
			<< " doesn't have energy left. He must recover."<<std::endl;
	}
	energyPoints -= 1;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap: Hey guys, high five ? Guys ? High five ? Guys ?" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout<< "Because no one high fived " << _name << "he sadly killed himself. Adios, FragTrap... " << std::endl;
}