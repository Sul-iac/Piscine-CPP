/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 10:49:23 by qbarron           #+#    #+#             */
/*   Updated: 2025/03/22 23:56:42 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

int main() {
	std::ifstream	ifs("test");
	std::ofstream	ofs("test.replace");
	std::string		fileContent;
	
	while(getline(ifs, fileContent)) {
		ofs<<fileContent;
	}
	ifs.close();
	ofs.close();
}