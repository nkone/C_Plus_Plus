/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 22:00:59 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/22 22:31:41 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>

int main(int argc, char *argv[]) {
	// Checks number of inputs
	if (argc != 4) {
		std::cout << "Usage: ./replace [filename] [search] [replace]\n";
		return (1);
	}
	
	std::string		fileName = argv[1];
	std::string		search = argv[2];
	std::string		replace = argv[3];
	
	std::ifstream	inputFile(fileName);
	std::ofstream	outputFile(fileName + ".replace");

	// Check all inputs for valid
	if (!inputFile.good() || !outputFile.good()) {
		std::cout << "Bad file!\n"; return (1);
	}
	if (search.empty()) {
		std::cout << "Search string is empty!\n"; return (1);
	}
	if (replace.empty()) { 
		std::cout << "Replace string is empty!\n"; return (1);
	}
	
	size_t pos;
	std::string buff;
	while (std::getline (inputFile, buff)) {
		for(pos = buff.find(search); pos != std::string::npos; pos = buff.find(search, pos))
			buff.replace(pos, search.length(), replace);
		outputFile << buff << std::endl;
	}

	
	return (0);
}
