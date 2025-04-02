/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 22:19:56 by qbarron           #+#    #+#             */
/*   Updated: 2025/04/02 10:21:13 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
# include <string>


class Fixed {
	private:
		int						fixedInt;
		float					fixedFloat;
		static const int		fracBits = 8;
	public:
		Fixed();
		Fixed(const int fixedInt);
		Fixed(const float fixedFloat);
		Fixed(const Fixed& other);
		std::ostream& operator<<(std::ostream& flux);
		float toFloat(void) const;
		int toInt(void) const;
		~Fixed();
};

#endif	