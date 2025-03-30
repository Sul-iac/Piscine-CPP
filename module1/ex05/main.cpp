/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 10:00:06 by qbarron           #+#    #+#             */
/*   Updated: 2025/03/30 14:15:10 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[]) {
	if(argc != 2) {
		std::cerr << "Error in args" <<std::endl;
		return(0);
	}
	Harl harl;
	harl.complain(argv[1]);
}