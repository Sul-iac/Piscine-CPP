/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 14:21:20 by qbarron           #+#    #+#             */
/*   Updated: 2025/03/20 15:44:49 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(const std::string &name) : name(name) {}
Zombie::~Zombie() {}

int main() {
	Zombie* z1 = newZombie("Zombie mafia boss lvl 10000: ");
	z1->announce();
	delete z1;

	randomChump("Zombie mod lvl 5: ");
}