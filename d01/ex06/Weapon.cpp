/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 16:42:20 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/22 16:49:09 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#include <iostream>

Weapon::Weapon() {
	std::cout << "Weapon created\n";
}

Weapon::~Weapon() {
	std::cout << "Weapon deleted\n";
}

const std::string& Weapon::getType(void) const {
	return this->_type;
}

void Weapon::setType(std::string type) : _type(type) {
}
