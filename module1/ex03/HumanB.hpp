/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 10:03:04 by qbarron           #+#    #+#             */
/*   Updated: 2025/03/22 10:08:49 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB {
	private:
		std::string _name;
		Weapon*		_weapon;
	public:
		HumanB(std::string name);
		void	setWeapon(Weapon& weaponType);
		void	attack();
};