/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 15:50:44 by qbarron           #+#    #+#             */
/*   Updated: 2025/03/20 15:51:02 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	Zombie* z1 = newZombie("Zombie mafia boss lvl 10000: ");
	z1->announce();
	delete z1;

	randomChump("Zombie mod lvl 5: ");
}