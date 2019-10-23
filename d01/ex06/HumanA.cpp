/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 19:08:13 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/22 19:52:07 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon){
	std::cout << "Human A created with name: " << this->_name << std::endl;
}

HumanA::~HumanA() {
	std::cout << "Human A deleted with name: " << this->_name << std::endl;
}

void HumanA::attack(void) {
	std::cout << this->_name << " attacks with " << this->_weapon.getType() << std::endl;
}
