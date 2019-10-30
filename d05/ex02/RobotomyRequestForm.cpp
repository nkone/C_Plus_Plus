/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 22:49:08 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/29 22:59:11 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy Form", "", 72, 45) {}
RobotomyRequestForm::~RobotomyRequestForm() {}
RobotomyRequestForm::RobotomyRequestForm(const std::string& target) :
	Form("Robotomy Form", target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) {
	*this = other;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
	if (this != &other)
		*this = other;
	return *this;
}

void RobotomyRequestForm::beExecuted() const {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(1,2);
	
	if(dis(gen) % 2 == 0) {
		std::cout << this->getTarget() <<
			" has been robotomized successfully" << std::endl;
	} else {
		std::cout << this->getTarget() << 
			" has failed to robotomize" << std::endl;
	}
}
