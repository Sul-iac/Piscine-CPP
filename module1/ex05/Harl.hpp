/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 10:00:26 by qbarron           #+#    #+#             */
/*   Updated: 2025/03/23 11:14:51 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl {
	private: 
		void debug();
		void infos();
		void warning();
		void error();
	public:
		void complain(std::string level);
		Harl();
		~Harl();
};


#endif