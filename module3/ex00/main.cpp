/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 10:22:05 by qbarron           #+#    #+#             */
/*   Updated: 2025/04/09 12:43:52 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
	ClapTrap clapTrap1("Didier");	
	
	// std::cout << clapTrap1 << std::endl;
	clapTrap1.attack("Tristan");
	// std::cout << clapTrap1 << std::endl;
	clapTrap1.beRepaired(1);	
	// std::cout << clapTrap1 << std::endl;
}

