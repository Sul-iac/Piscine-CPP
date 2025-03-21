/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:54:36 by qbarron           #+#    #+#             */
/*   Updated: 2025/03/21 22:17:43 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : name(name), _weapon(NULL) {}
HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
}

void HumanB::attack() {
	if(_weapon)
		std::cout<<name<<" attack with their "<<_weapon->getType()<<std::endl;
	else
		std::cout<<name<<" has no weapon... Such a looser"<< std::endl;
}