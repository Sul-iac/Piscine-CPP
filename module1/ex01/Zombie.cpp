/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 15:53:19 by qbarron           #+#    #+#             */
/*   Updated: 2025/03/20 16:34:40 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}
Zombie::~Zombie() {}

void Zombie::setNames(std::string &name) {
	_name = name;
}

void Zombie::announce(void) {
	std::cout<<_name<<" BraiiiiiiinnnzzzZ..."<<std::endl;
}
