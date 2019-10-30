/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 23:16:47 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/29 23:29:04 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {};
Intern::~Intern() {};
Intern::Intern(const Intern& other) {
	*this = other;
}

Intern& Intern::operator=(const Intern&) {
	return (*this);
}

Form* Intern::makeForm(const std::string& name, const std::string& target) {
	Form *newForm;
	
	newForm = nullptr;
	if (name == "shrubberry")
		newForm = new ShrubberryCreationForm(target);
	else if (name == "robotomy")
		newForm = new RobotomyRequestForm(target);
	else if (name == "pardon")
		newForm = new PresidentialPardonForm(target);
	else
		std::cout << "Error name of intern does not recognize form" << std::endl;
	
	return newForm;
}
