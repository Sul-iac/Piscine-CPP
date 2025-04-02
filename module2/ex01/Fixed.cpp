/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 22:20:52 by qbarron           #+#    #+#             */
/*   Updated: 2025/04/02 17:15:34 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
}

// constructeur d'int
Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	this->value = value * pow(2, this->fracBits);
	toInt();
}

// constructeur de float
Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(value * pow(2, this->fracBits));
	toFloat();
}

// constructeur de copie
Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy constructor called" << std::endl;
	if(this != &other) {
		value = other.value;
	}
}

void Fixed::setRawBit(int const raw){
	this->value = raw;
}

int Fixed::getRawBits(void) const {
	std::cout<<"getRawBits member function called" << std::endl;
	return(value);
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout<<"Copy assignement operator called" << std::endl;
	if(this != &other) {
		this->value = other.getRawBits();
	}
	return(*this);
}

// surcharge d'operateur
std::ostream& operator<<(std::ostream& flux, Fixed const &value) {
	flux << value.toFloat();
	return(flux);
}

float Fixed::toFloat(void) const {
	float result = this->value / pow(2, fracBits);
	return(result);
}

int Fixed::toInt(void) const {
	return(this->value / pow(2, this->fracBits));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}