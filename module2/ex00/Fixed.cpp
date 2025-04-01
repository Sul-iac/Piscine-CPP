/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 12:09:17 by qbarron           #+#    #+#             */
/*   Updated: 2025/04/01 21:37:38 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedNbr(0) {
	std::cout << "Default constructor called" << std::endl;
}

// constructeur de recopie
Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy constructor called" << std::endl;
	fixedNbr = other.fixedNbr;
}

// surcharge d'operateur
Fixed& Fixed::operator= (const Fixed& other) {
	std::cout << "Copy assignement operator called" << std::endl;
	if(this != &other) {
		fixedNbr = other.fixedNbr;
	}
	return(*this);
}

void Fixed::setRawBit(int const raw) {
	fixedNbr = raw;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBit member function called" << std::endl;
	return(fixedNbr);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}