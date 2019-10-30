/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberryCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 22:19:10 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/29 22:48:01 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberryCreationForm.hpp"

ShrubberryCreationForm::ShrubberryCreationForm() : Form("Shrubberry Form", "", 145, 137) {}
ShrubberryCreationForm::~ShrubberryCreationForm() {}
ShrubberryCreationForm::ShrubberryCreationForm(const std::string& target) :
	Form("Shrubberry Form", target, 145, 137) {}

ShrubberryCreationForm::ShrubberryCreationForm(const ShrubberryCreationForm& other) {
	*this = other;
}

ShrubberryCreationForm& ShrubberryCreationForm::operator=(const ShrubberryCreationForm& other) {
	if (this != &other)
		*this = other;
	return *this;
}

void ShrubberryCreationForm::beExecuted() const {
	std::string target = this->getTarget();
	std::ofstream output(target + "_shrubbery");
	if (!output.good()) {
		std::cout << "Bad file path" << std::endl;
		return;
	}
	output << "       _-_         " << std::endl; 
	output << "    /~~   ~~\\     " << std::endl;
	output << " /~~         ~~\\  " << std::endl;
	output << "{               } " << std::endl;
	output << " \\  _-     -_  /  " << std::endl;
	output << "   ~  \\ //  ~    " << std::endl;
	output << "_- -   | | _- _   " << std::endl;
	output << "  _ -  | |   -_   " << std::endl;
	output << "      // \\       " << std::endl;
}
