/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 17:09:23 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/21 14:00:10 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <string.h>
#include <iostream>
#include "contact.hpp"


void Contact::createContact(void) {

	std::cout << "First name: ";			std::getline(std::cin, firstName);
	std::cout << "Last name: ";				std::getline(std::cin, lastName);
	std::cout << "Nickname: ";				std::getline(std::cin, nickName);
	std::cout << "Login: ";					std::getline(std::cin, login);
	std::cout << "Postal address: ";		std::getline(std::cin, postalAddress);
	std::cout << "Email: ";					std::getline(std::cin, emailAddress);
	std::cout << "Phone: ";					std::getline(std::cin, phoneNumber);
	std::cout << "Birthday (mm/dd/yyyy): ";	std::getline(std::cin, birthdayDate);
	std::cout << "Favorite meal: "; 		std::getline(std::cin, favMeal);
	std::cout << "Underwear color: "; 		std::getline(std::cin, underwearColor);
	std::cout << "Darkest secret: "; 		std::getline(std::cin, secret);
}

void Contact::printContact(void) {
	std::cout << "First name: " << 			this->firstName << std::endl;
	std::cout << "Last name: " << 			this->lastName << std::endl;
	std::cout << "Nickname: " << 			this->nickName << std::endl;
	std::cout << "Login: " <<				this->login << std::endl;
	std::cout << "Postal address: " << 		this->postalAddress << std::endl;
	std::cout << "Email: " << 				this->emailAddress << std::endl;
	std::cout << "Phone: " << 				this->phoneNumber << std::endl;
	std::cout << "Birthday: " << 			this->birthdayDate << std::endl;
	std::cout << "Favorite meal: " <<		this->favMeal << std::endl;
	std::cout << "Underwear color: " <<		this->underwearColor << std::endl;
	std::cout << "Darkest secret: " <<		this->secret << std::endl;
}

std::string		limitString(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(10);
		str[9] = '.';
	}
	return (str);
}

void Contact::contactIndex(int idx) {
	std::cout << std::setw(10) << idx << "|";
	std::cout << std::setw(10) << limitString(firstName) << "|";
	std::cout << std::setw(10) << limitString(lastName) << "|";
	std::cout << std::setw(10) << limitString(nickName) << "|\n";
}

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
