/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 09:51:17 by qbarron           #+#    #+#             */
/*   Updated: 2025/03/22 10:25:51 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {}
Weapon::~Weapon() {}

const std::string& Weapon::getType() {
	return(_type);
}

void Weapon::setType(std::string newType) {
	_type = newType;
}