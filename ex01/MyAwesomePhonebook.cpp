/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhonebook.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 09:28:52 by qbarron           #+#    #+#             */
/*   Updated: 2025/02/24 09:40:38 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesomePhonebook.hpp"

int main(void){
	PhoneBook	phoneBook;
	Contact		person;
	std::string	commande; 
	
	std::string newName, newLastName, \
				newNickname, newPhoneNumber, \
				newDarkestSecret;
	while(1){
		std::getline(std::cin, commande);
		if(commande == "ADD"){
			std::cout<<"Set contact first name: ";					// set first name
			if(!std::getline(std::cin, newName)){	
				std::cerr<<"Error reading output"<<std::endl;
				return(1);
			}
			person.setFirstName(newName);
			std::cout<<"Set contact last name: ";					// set last Name
			if(!std::getline(std::cin, newLastName)){	
				std::cerr<<"Error reading output"<<std::endl;
				return(1);
			}
			person.setLastName(newLastName);
			std::cout<<"Set contact phone number: ";				// set Phone number
			if(!std::getline(std::cin, newPhoneNumber)){	
				std::cerr<<"Error reading output"<<std::endl;
				return(1);
			}
			person.setPhoneNumber(newPhoneNumber);
			std::cout<<"Set contact darkest secret 👿: ";			// set darkest secret
			if(!std::getline(std::cin, newPhoneNumber)){	
				std::cerr<<"Error reading output"<<std::endl;
				return(1);
			}
			person.setDarkestSecret(newDarkestSecret);
		}
		else if(commande == "SEARCH"){
			std::cout<<"| INDEX | ";
			std::cout<<"FIRST NAME | ";
			std::cout<<"LAST NAME | ";
			std::cout<<"NICKNAME | " << std::endl;
			std::cout<<"| "<<person.getNickName()<<std::endl;
		}
		else if(commande == "EXIT" || commande == "EXIT "){
			exit(0);
		}
		else{
			std::cout<<"Argument not recognized, please try again"<<std::endl;
		}
	}
}