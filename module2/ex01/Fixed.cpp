/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 22:20:52 by qbarron           #+#    #+#             */
/*   Updated: 2025/04/02 10:35:53 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
}

// constructeur d'int
Fixed::Fixed(const int fixedInt) {
	std::cout << "Int constructor called" << std::endl;
}

// constructeur de float
Fixed::Fixed(const float fixedFloat) {
	std::cout << "Float constructor called" << std::endl;
}

// constructeur de copie
Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy constructor called" << std::endl;
}

// surcharge d'operateur
std::ostream& Fixed::operator<<(std::ostream& flux) { 
	std::cout << "copy assignment operator called" << std::endl;
	flux << this->fixedFloat << this->fixedInt << std::endl;
	return(flux);
}

float Fixed::toFloat(void) const {
	
}

int Fixed::toInt(void) const {
	
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}