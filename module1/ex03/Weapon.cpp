/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:50:06 by qbarron           #+#    #+#             */
/*   Updated: 2025/03/21 22:07:48 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

Weapon::Weapon(std::string type) : _type(type) {}
Weapon::~Weapon() {}

const std::string& Weapon::getType() {
	return (this->_type);
}

void Weapon::setType(const std::string newType) {
	this->_type = newType;
}
