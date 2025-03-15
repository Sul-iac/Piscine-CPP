/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhonebook.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 09:28:52 by qbarron           #+#    #+#             */
/*   Updated: 2025/02/28 12:01:54 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesomePhonebook.hpp"

int main(void){

	PhoneBook phoneBook;
	std::string command;
	
	while(true){
		std::cout<<"\nEnter commands: ADD, SEARCH, EXIT"<<std::endl;
		std::getline(std::cin, command);
		if(command == "ADD")
			phoneBook.addContact();
		else if(command == "SEARCH")
			phoneBook.searchContact();
		else if(command == "EXIT" || command == "EXIT ")
			break;
		else
			std::cout<<"An error in the argument line occured"<<std::endl;
	}
}