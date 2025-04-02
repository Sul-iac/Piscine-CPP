/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 22:19:56 by qbarron           #+#    #+#             */
/*   Updated: 2025/04/02 17:13:49 by qbarron          ###   ########.fr       */
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
		Fixed& operator=(const Fixed& other);
		int toInt(void) const;
		int getRawBits(void) const;
		void setRawBit(int const raw);
		~Fixed();
};

std::ostream& operator<<(std::ostream& flux, Fixed const &value);
	
#endif	