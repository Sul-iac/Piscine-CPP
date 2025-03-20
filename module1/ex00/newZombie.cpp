/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 14:21:36 by qbarron           #+#    #+#             */
/*   Updated: 2025/03/20 15:42:55 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	return new Zombie(name);
}

void Zombie::announce ( void )
{
	std::cout << name << "BraiiiiiiinnnzzzZ..." << std::endl;
}