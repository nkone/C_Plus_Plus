/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 16:55:29 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/21 21:21:20 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {
	std::cout << "Spawning " << this->_name << " type: " << this->_type << std::endl;
	this->_name = name;
	this->_type = type;
}

Zombie::Zombie(void) {
	std::cout << "Spawned a zombie...\n";
}

Zombie::~Zombie(void) {
	std::cout << "Removing zombie: " << this->_name << " type: " << this->_type << std::endl;
}

void Zombie::announce(void) {
	std::cout << "<" << this->_name << " (" << this->_type << ")> Brainsssssssssss...\n";
}

void Zombie::setName(std::string name) {
	std::cout << "Setting zombie name to " << name << std::endl;
	this->_name = name;
}

void Zombie::setType(std::string type) {
	std::cout << "Setting zombie type to " << type << std::endl;
	this->_type = type;
}
