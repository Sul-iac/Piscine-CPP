/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 12:09:22 by qbarron           #+#    #+#             */
/*   Updated: 2025/04/01 21:33:41 by qbarron          ###   ########.fr       */
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
		Fixed(); // constructeur par default
		Fixed(const Fixed& other); // constructeur de copie
		Fixed& operator=(const Fixed& other); // operateur de surcharge
		~Fixed(); 
		int getRawBits(void) const;
		void setRawBit(int const raw);
};


#endif
