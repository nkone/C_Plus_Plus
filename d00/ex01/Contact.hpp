/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 17:29:21 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/21 14:16:27 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contact {
	private:
		std::string		firstName;
		std::string		lastName;
		std::string		nickName;
		std::string		login;
		std::string 	postalAddress;	
		std::string		emailAddress;
		std::string		phoneNumber;
		std::string		birthdayDate;
		std::string		favMeal;
		std::string		underwearColor;
		std::string 	secret;
	public:
		void createContact(void);
		void printContact(void);
		void contactIndex(int idx);
};

#endif
