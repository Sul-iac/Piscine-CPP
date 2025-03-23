/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 10:00:06 by qbarron           #+#    #+#             */
/*   Updated: 2025/03/23 10:55:20 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[]) {
	if(argc != 2) {
		std::cerr<<"Wrong number of arguments"<<std::endl;
		return(1);
	}
	std::string level = argv[1];
	Harl harl;
	harl.complain(level);
	return(0);
}