/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:52:16 by qbarron           #+#    #+#             */
/*   Updated: 2025/03/21 22:23:36 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA {
	private:
		std::string _name;
		Weapon&		_weapon;
	public: 
		HumanA(std::string name, Weapon &weapon);
		void		attack();
};


