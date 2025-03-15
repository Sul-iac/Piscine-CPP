/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 09:43:06 by qbarron           #+#    #+#             */
/*   Updated: 2025/02/28 12:01:40 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesomePhonebook.hpp"

PhoneBook::PhoneBook()
	: nbrContact(0), oldIndex(0){}

void PhoneBook::addContact(){
	PhoneBook	phoneBook;
	Contact		newContact;

	std::string	commande; 
	
	std::string newName, newLastName, \
				newNickname, newPhoneNumber, \
				newDarkestSecret;
		std::cout<<"Set contact first name: ";					// set first name
		if(!std::getline(std::cin, newName)){	
			std::cerr<<"Error reading output"<<std::endl;
			return ;
		}
		newContact.setFirstName(newName);
		
		std::cout<<"Set contact last name: ";					// set last Name
		if(!std::getline(std::cin, newLastName)){	
			std::cerr<<"Error reading output"<<std::endl;
			return;
		}
		newContact.setLastName(newLastName);
		
		std::cout<<"Set contact nickname: ";						// set nickname
		if(!std::getline(std::cin, newNickname)){	
			std::cerr<<"Error reading output"<<std::endl;
			return;
		}
		newContact.setPhoneNumber(newNickname);
		
		std::cout<<"Set contact phone number: ";				// set Phone number
		if(!std::getline(std::cin, newPhoneNumber)){	
			std::cerr<<"Error reading output"<<std::endl;
			return;
		}
		newContact.setNickName(newNickname);
		
		std::cout<<"Set contact darkest secret 👿: ";			// set darkest secret
		if(!std::getline(std::cin, newDarkestSecret)){	
			std::cerr<<"Error reading output"<<std::endl;
			return;
		}
		newContact.setDarkestSecret(newDarkestSecret);
		if(this->nbrContact < 8){
			this->contacts[nbrContact] = newContact;
			this->nbrContact++;
		}
		else if(this->nbrContact == 8){
			this->contacts[oldIndex] = newContact;
			this->oldIndex = (this->oldIndex + 1) % 8;
		}
		this->contactIndex += 1;
		std::cout<<"\nOne more friend in your list yay !\n"<<std::endl;
}

std::string truncated(std::string str, size_t width, bool point=true)
{
	if(str.length() > width){
		if(point){
			str.resize(width - 1);
			return(str + ".");
		}
		else{
			str.resize(width);
			return(str);
		}
	}
	return(str);
}

void PhoneBook::searchContact() const{
	const int width = 10;
	if(this->nbrContact == 0)
		std::cout<<"\nYou have no friend. Get some looser."<<std::endl;
	if(this->nbrContact == 1)
		std::cout<<"\nO M G. You got a friend ! Get some more !"<<std::endl;
	std::cout<<"_____________________________________________"<<std::endl;
	std::cout<<"|"
			<< std::setw(width) << std::right << "INDEX" << "|"
			<< std::setw(width) << std::right << "FIRST NAME" << "|"
			<< std::setw(width) << std::right << " LAST NAME " << "|"
			<< std::setw(width) << std::right << " NICKNAME " << "|" << std::endl;
	std::cout<<"|____________________________________________|"<<std::endl;
	for(int i = 0; (i < nbrContact) && (i <= 8); i++){
		std::cout<<"|"
		<< std::setw(width) << i + 1 << "|"
		<< std::setw(width) << std::right << truncated(contacts[i].getFirstName(), width, true) << "|"
		<< std::setw(width) << std::right << truncated(contacts[i].getLastName(), width, true)  << "|"
		<< std::setw(width) << std::right << truncated(contacts[i].getNickName(), width, true) << "|" << std::endl;

	}
}