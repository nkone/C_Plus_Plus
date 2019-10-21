/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 14:21:36 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/21 14:23:01 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

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
