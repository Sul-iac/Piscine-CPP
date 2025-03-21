/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:52:16 by qbarron           #+#    #+#             */
/*   Updated: 2025/03/21 21:42:51 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMAN_HPP

# include "HumanB.hpp"
# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanA {
	private:
		std::string _name;
		Weapon&		_weapon;
		public: 
		HumanA(const std::string &name, Weapon &weapon);
		void		attack();
};


#endif