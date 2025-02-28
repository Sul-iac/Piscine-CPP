/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhonebook.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 09:28:48 by qbarron           #+#    #+#             */
/*   Updated: 2025/02/28 10:52:08 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYAWESOMEPHONEBOOK_CPP
# define MYAWESOMEPHONEBOOK_CPP
# include <iostream>
# include <string>
#include <iomanip>


class Contact{
	private:
		std::string firstName;
		std::string lastName;
		std::string	nickName;
		std::string phoneNumber;
		std::string darkestSecret;
	public:
		Contact();
		// les lignes ci dessous permettent de prendre
		// et d'affecter une valeur aux attributs prives dans private
		void setFirstName(const std::string &newName);
		void setLastName(const std::string &newLastName);
		void setNickName(const std::string &newNickname);
		void setPhoneNumber(const std::string &newPhoneNumber);
		void setDarkestSecret(const std::string &newDarkestSecret);
		// les lignes ci dessous permettent de lire 
		// les variables privees du setters au-dessus (getterst)
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickName() const;
		std::string getPhoneNumber() const;
		std::string getDarkestSecret() const;
};

class PhoneBook{
	private: 
		Contact contacts[8];
		int		nbrContact; //nbr reels de contacts
		int		oldIndex;	//ancien contact si remplacement
		int		contactIndex;
	public:
		PhoneBook();
		void addContact();
		void searchContact() const;
		
};

#endif