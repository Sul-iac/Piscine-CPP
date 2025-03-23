/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarron <qbarron@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 10:49:23 by qbarron           #+#    #+#             */
/*   Updated: 2025/03/23 09:51:30 by qbarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>
#include <fstream>

int main(int argc, char *argv[]) {

	if(argc != 4){
		std::cerr<<"Wrong number of arguments"<<std::endl;
		return(1);
	}
	std::string		fileContent;
	std::string		file = argv[1];
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];

	if(s1.empty()){
		std::cerr<<"S1 shall not be empty"<<std::endl;
		return(1);
	}
	
	std::string fileName = file + ".replace";
	std::ifstream ifs(file.c_str());
	if(!ifs) {
		std::cerr<<"Error opening the file"<<std::endl;
		return(1);
	}
	
	std::ofstream ofs(fileName.c_str());
	if(!ofs) {
		std::cerr<<"Error while opening file"<<std::endl;
		return(1);
	}
	while(std::getline(ifs, fileContent)) {
		size_t pos = 0;
		while((pos = fileContent.find(s1, pos)) != std::string::npos) {
			fileContent.erase(pos, s1.length());
			fileContent.insert(pos, s2);
			pos += s2.length();
		}
		ofs<<fileContent<<std::endl;
	}
	ifs.close();
	ofs.close();
	return(0);
}
