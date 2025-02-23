/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 14:28:51 by qbarron           #+#    #+#             */
/*   Updated: 2025/02/23 09:19:39 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Megaphone.hpp"

int main(int argc, char** argv)
{	
	if(argc >= 1)
	{
		for(int i = 1; i < argc; i++)
		{
			for(int j = 0; argv[i][j]; j++)
			{
				char upper = std::toupper(static_cast<unsigned char>(argv[i][j]));
				std::cout << upper;
			}
		}
	}
	if(argc == 1)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISES *"<< std::endl;
	return(0);
}