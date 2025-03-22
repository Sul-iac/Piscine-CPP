/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 22:29:07 by qbarron           #+#    #+#             */
/*   Updated: 2025/03/22 09:52:01 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon { 
	private:
		std::string _type;
	public:
		Weapon(std::string type);
		const	std::string& getType();
		void	setType(std::string newType);
		~Weapon();
};

# endif