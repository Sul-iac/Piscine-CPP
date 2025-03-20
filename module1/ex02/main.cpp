/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 16:42:32 by qbarron           #+#    #+#             */
/*   Updated: 2025/03/20 16:59:20 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
	std::string nameVar = "HI THIS IS BRAIN";
	std::string* stringPtr = &nameVar;
	std::string& stringRef = nameVar;
	
	std::cout<<&nameVar<<std::endl;
	std::cout<<stringPtr<<std::endl;
	std::cout<<&stringRef<<std::endl;
	
	std::cout<<nameVar<<std::endl;
	std::cout<<*stringPtr<<std::endl;
	std::cout<<stringRef<<std::endl;

	return(0);
}