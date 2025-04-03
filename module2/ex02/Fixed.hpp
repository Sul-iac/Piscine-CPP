/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 22:19:56 by qbarron           #+#    #+#             */
/*   Updated: 2025/04/03 15:28:59 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
# include <string>


class Fixed {
	private:
		int						value;
		static const int		fracBits = 8;
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed& other);
		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits(void) const;
		int	getFracBits() const;
		void setRawBit(int const raw);
		~Fixed();
			
		Fixed& operator++();
		Fixed& operator--();
		Fixed operator++(int);
		Fixed operator--(int);
		Fixed& operator=(const Fixed &fixed);

		static const Fixed& min(const Fixed& a, const Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);
		static Fixed& min(Fixed& a, Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
};
	
Fixed operator*(const Fixed& a, const Fixed& b);
Fixed operator+(const Fixed& a, const Fixed& b);
Fixed operator-(const Fixed& a, const Fixed& b);
Fixed operator/(const Fixed& a, const Fixed& b);

bool operator>(const Fixed& a, const Fixed& b);
bool operator<(const Fixed& a, const Fixed& b);
bool operator<=(const Fixed& a, const Fixed& b);
bool operator>=(const Fixed& a, const Fixed& b);


std::ostream& operator<<(std::ostream& flux, Fixed const &value);
	
#endif	