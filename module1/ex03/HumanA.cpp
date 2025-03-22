/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 09:58:17 by qbarron           #+#    #+#             */
/*   Updated: 2025/03/22 10:12:00 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string name, Weapon& weapon) : _name(name), _weapon(weapon) {}

void HumanA::attack() {
	std::cout<<_name<<" attack with their "<< _weapon.getType()<< std::endl;
}