/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 16:55:29 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/21 18:35:47 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {
	std::cout << "Spawning " << this->_name << " type: " << this->_type << std::endl;
};

Zombie::~Zombie(void) {
	std::cout << "Removing zombie: " << this->_name << " type: " << this->_type << std::endl;
}

void Zombie::announce(void) {
	std::cout << "<" << this->_name << " (" << this->_type << ")> Brainsssssssssss...\n";
}
