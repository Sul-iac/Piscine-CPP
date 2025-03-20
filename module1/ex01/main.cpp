/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 14:21:20 by qbarron           #+#    #+#             */
/*   Updated: 2025/03/20 16:29:37 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	int N = 5;
	Zombie* horde = zombieHorde(N, "Les mechants zombies: ");
	if(horde == NULL)
		return(1);
	for(int i = 0; i < N; i++) {
		horde[i].announce();
	}
	delete[] horde;
	return(0);
}