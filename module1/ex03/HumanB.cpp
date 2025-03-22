/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 10:05:06 by qbarron           #+#    #+#             */
/*   Updated: 2025/03/22 10:24:44 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {}

void HumanB::setWeapon(Weapon& weaponType){ 
	_weapon = &weaponType;
}

void HumanB::attack() {
	if(_weapon)
		std::cout<<_name<<" attacks with their " <<_weapon->getType() << std::endl;
	else
		std::cout<<_name<< " does not have a weapon. He wants peace."<<std::endl;
}
