/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 09:36:27 by qbarron           #+#    #+#             */
/*   Updated: 2025/02/24 09:39:24 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesomePhonebook.hpp"

// les lignes ci dessous permettent de prendre
// et d'affecter une valeur aux attributs prives dans private
void Contact::setFirstName(const std::string &newName){
	firstName = newName;
}
void Contact::setLastName(const std::string &newLastName){
	lastName = newLastName;
}
void Contact::setNickName(const std::string &newNickname){
	nickName = newNickname;
}
void Contact::setPhoneNumber(const std::string &newPhoneNumber){
	phoneNumber = newPhoneNumber;
}
void Contact::setDarkestSecret(const std::string &newDarkestSecret){
	darkestSecret = newDarkestSecret;
}
// les lignes ci dessous permettent de lire 
// les variables privees du setters au-dessus (getterst)
std::string Contact::getFirstName() const{
	return this->firstName;
}
std::string Contact::getLastName() const{
	return this->lastName;
}
std::string Contact::getNickName() const{
	return this->nickName;
}
std::string Contact::getPhoneNumber() const{
	return this->phoneNumber;
}
std::string Contact::getDarkestSecret() const{
	return this->darkestSecret;
}