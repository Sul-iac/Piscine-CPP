/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 22:20:52 by qbarron           #+#    #+#             */
/*   Updated: 2025/04/03 15:19:56 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0) {}

// constructeur d'int
Fixed::Fixed(const int value) {
	this->value = value << this->fracBits;
}

// constructeur de float
Fixed::Fixed(const float value) {
	this->value = roundf(value * (1 << this->fracBits));
}

// constructeur de copie
Fixed::Fixed(const Fixed& other) {
	if(this != &other) {
		*this = other;
	}
}

void Fixed::setRawBit(int const raw) {
	this->value = raw;
}

int Fixed::getRawBits(void) const {
	return(this->value);
}

// surcharge d'operateur <<
std::ostream& operator<<(std::ostream& flux, Fixed const &value) {
	flux << value.toFloat();
	return(flux);
}

// surcharge d'operateur =
Fixed& Fixed::operator=(const Fixed &fixed)
{
	this->value = fixed.getRawBits();
	return *this;
}

// surcharge d'operateur >
bool operator>(const Fixed& a, const Fixed& b) {
	return(a.getRawBits() > b.getRawBits());
}

// surcharge operateur <
bool operator<(const Fixed& a, const Fixed& b) {
	return(a.getRawBits() < b.getRawBits());
}

bool operator>=(const Fixed& a, const Fixed& b) {
	return(a.getRawBits() >= b.getRawBits());
}

// surcharge d'operateur <= 
bool operator<=(const Fixed& a, const Fixed& b) {
	return(a.getRawBits() <= b.getRawBits());
}

// surcharge d'operateur ==
bool operator==(const Fixed& a, const Fixed& b) {
	return(a.getRawBits() == b.getRawBits());
}

// surcharge d'operateur !=
bool operator!=(const Fixed& a, const Fixed& b) {
	return(a.getRawBits() != b.getRawBits());
}

int Fixed::getFracBits() const {
	return(this->fracBits);
}

// surcharge d'operateur *
Fixed operator*(const Fixed& a, const Fixed& b) {
	Fixed result;

	long product = ((long)a.getRawBits()) * ((long)b.getRawBits());
	result.setRawBit((int)(product >> a.getFracBits()));
	return(result);
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	if(a < b)
		return(a);
	else
		return(b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	if(a > b)
		return(a);
	else
		return(b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)  {
	return(a < b ? a : b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)  { 
	return(a > b ? a : b);
}

// surcharge d'operateur +
Fixed operator+(const Fixed& a, const Fixed& b) {
	return Fixed(a.getRawBits() + b.getRawBits());
}

// surcharge d'operateur -
Fixed operator-(const Fixed& a, const Fixed& b) {
	return Fixed(a.getRawBits() - b.getRawBits());
}

// surcharge d'operateur /
Fixed operator/(const Fixed& a, const Fixed& b) {
	return Fixed(a.getRawBits() / b.getRawBits());
}

// surcharge d'operateur ++
Fixed& Fixed::operator++() {
	this->value++;
	return(*this);
}

// surcharge d'operateur --
Fixed& Fixed::operator--() {
	this->value--;
	return(*this);
}

// surcharge d'operateur -- (avant decrementation)
Fixed Fixed::operator--(int) {
	Fixed temp(*this);
	this->value--;
	return(temp);
}

// surcharge d'operateur ++ (avant incrementation)
Fixed Fixed::operator++(int) {
	Fixed temp(*this);
	this->value++;
	return(temp);
}

float Fixed::toFloat(void) const {
	float result = this->value / (pow(2, this->fracBits));
	return(result);
}

int Fixed::toInt(void) const {
	return(this->value / pow(2, this->fracBits));
}

Fixed::~Fixed() {}