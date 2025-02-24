/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhonebook.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 09:28:48 by qbarron           #+#    #+#             */
/*   Updated: 2025/02/24 07:29:58 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYAWESOMEPHONEBOOK_CPP
# define MYAWESOMEPHONEBOOK_CPP
# include <iostream>
# include <string>



class Contact{
	private:
		std::string firstName;
		std::string lastName;
		std::string	nickName;
		std::string phoneNumber;
		std::string darkestSecret;
	public:
		Contact() : firstName("Unknown"){};
		// les lignes ci dessous permettent de prendre
		// et d'affecter une valeur aux attributs prives dans private
		void setFirstName(const std::string &newName){
			firstName = newName;
		}
		void setLastName(const std::string &newLastName){
			lastName = newLastName;
		}
		void setNickName(const std::string &newNickname){
			nickName = newNickname;
		}
		void setPhoneNumber(const std::string &newPhoneNumber){
			phoneNumber = newPhoneNumber;
		}
		void setDarkestSecret(const std::string &newDarkestSecret){
			darkestSecret = newDarkestSecret;
		}
		// les lignes ci dessous permettent de lire 
		// les variables privees du setters au-dessus (getterst)
		std::string getFirstName() const{
			return this->firstName;
		}
		std::string getLastName() const{
			return this->lastName;
		}
		std::string getNickName() const{
			return this->nickName;
		}
		std::string getPhoneNumber() const{
			return this->phoneNumber;
		}
		std::string getDarkestSecret() const{
			return this->darkestSecret;
		}
};

class PhoneBook{
	private: 
		Contact contacts[8];
		int		nbrContact; //nbr reels de contacts
		int		oldIndex;	//ancien contact si remplacement
	public:
		void addContact();
		void searchContact() const;	
};

#endif