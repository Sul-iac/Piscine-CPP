/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 09:56:04 by qbarron           #+#    #+#             */
/*   Updated: 2025/03/22 10:11:53 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA {
	private:
		std::string _name;
		Weapon& 	_weapon;
	public:
		void attack();
		HumanA(const std::string name, Weapon& weapon);
};