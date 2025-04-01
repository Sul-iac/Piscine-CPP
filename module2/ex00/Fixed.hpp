/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 12:09:22 by qbarron           #+#    #+#             */
/*   Updated: 2025/04/01 13:45:40 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>


class Fixed {
	private:
		int fixedNbr;
		static const int bitsNbr = 8; // nbr de bits pour la partie fractionnee
	public:
		Fixed(int fixedNbr);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();
		int getRawBit(void) const;
		void setRawBit(int const raw);
};


#endif
