/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 17:09:23 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/21 14:21:57 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <string.h>
#include <iostream>
#include "Contact.hpp"

void displaySearch(Contact person[8], int idx) {
	int i = 0;

	std::cout << "     Index|First Name| Last Name|  Nickname|\n";
	while (i < idx)
	{
		person[i].contactIndex(i);
		i++;
	}
	std::string strChoice;
	// Force user to select
	while (1) {
		std::cout << "Select index to display info: ";
		strChoice = "";
		getline(std::cin, strChoice);
		int choice = -1;
		if (strChoice.length() != 1 || !isdigit(strChoice[0])) {
			std::cout << "Invalid input, select 0 - " << idx - 1 << std::endl;
			choice = -1;
		} else {
			choice = stoi(strChoice);
		}
		if (choice > idx - 1 || choice < 0) {
			std::cout << "Out of bounds detected...\n";
		} else if (choice >=0 && choice <= 7) {
			person[choice].printContact();
			std::cin.clear();
			break;
		}
	}	
}

int main(void) {
	std::string		input;
	const int		limit = 8;
	int idx			= 0;
	Contact			person[limit];

	std::cout << "Phonebook program started...\n";
	std::cout << "Available commands: ADD, SEARCH, EXIT\n";
	std::cout << "Warning: every contact will be deleted after exit\n";

	while (1) {
		std::cout << "INPUT: ";
		getline(std::cin, input);
		if (input == "EXIT") {
			std::cout << "Phonebook deleted and now exit\n";
			exit(0);
		}
		else if (input == "ADD") {
			if (idx > 7) {
				std::cout << "Limit reached! Only 8 is allowed....\n";
			} else {
				person[idx].createContact();
				std::cout << "Total Contact(s): " << idx + 1 << std::endl;
				idx++;
			}
		}
		else if (input == "SEARCH") {
			if (!idx) {
				std::cout << "Empty list detected...Did you ADD any contact?\n";
			} else {
				displaySearch(person, idx);
			}
		}
	}
	return (0);
}
