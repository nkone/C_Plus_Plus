/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 21:50:35 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/25 22:39:42 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

// Default constructor
NinjaTrap::NinjaTrap() {
	std::cout << "A <NINJ4-TP> constructed. I work in the shadow realm!\n";
}

// Constructor with name
NinjaTrap::NinjaTrap(const std::string& name) {
	this->_hp				= 60U; 
	this->_maxHp			= 60U;
	this->_ep				= 120U;
	this->_maxEp			= 120U;
	this->_lvl				= 1U;
	this->_meleeDmg			= 60U;
	this->_rangedDmg		= 5U;
	this->_armorDmgReduct	= 0U;
	this->_name				= name;
	std::cout << this->_name <<
		" <NINJ4-TP> constructed. I work in the shadow realm!\n";
}

// Destructor
NinjaTrap::~NinjaTrap() {
	std::cout << this->_name << " <NINJ4-TP> destructed. I return to the shadows\n";
}

// Copy Constructor
NinjaTrap::NinjaTrap(const NinjaTrap& other) {
	*this = other;
}

// Operator assignation
NinjaTrap& NinjaTrap::operator=(const NinjaTrap& other) {
	if (this != &other) {
		this->_hp				= other._hp; 
		this->_maxHp			= other._maxHp; 
		this->_ep				= other._ep; 
		this->_maxEp			= other._maxEp; 
		this->_lvl				= other._lvl; 
		this->_meleeDmg			= other._meleeDmg; 
		this->_rangedDmg		= other._rangedDmg; 
		this->_armorDmgReduct	= other._armorDmgReduct; 
		this->_name				= other._name; 
	}
	std::cout << this->_name << " <NINJ4-TP> assignation succesful.\n";
	return *this;
}

void NinjaTrap::rangedAttack(const std::string& target) const {
	std::cout << "My shuriken will find its mark" << std::endl;
	ClapTrap::rangedAttack(target);
}

void NinjaTrap::meleeAttack(const std::string& target) const {
	std::cout << "My blade never fails me" << std::endl;
	ClapTrap::meleeAttack(target);
}

void NinjaTrap::takeDamage(unsigned int dmg) {
	ClapTrap::takeDamage(dmg);
	if (this->_hp == 0) {
		std::cout << "I'm not the only shadows. Gweh. * DEATH SOUND *.\n";
	} else {
		std::cout << "Hitting me is like boxing in the shadows.\n";
	}
}

void NinjaTrap::beRepaired(unsigned int health) {
	std::cout << "It's not like I want to get repaired or anything ";
	ClapTrap::beRepaired(health);
}

void NinjaTrap::ninjaShoebox(const ClapTrap& other) {
	std::cout << other.getName() << " scanned class <Cl4P-TP> hp: "
		<< other.getHp() << std::endl;
}
void NinjaTrap::ninjaShoebox(const ScavTrap& other) {
	std::cout << other.getName() << " scanned class <SC4V-TP> hp: " 
		<< other.getHp() << std::endl;
}
void NinjaTrap::ninjaShoebox(const FragTrap& other) {
	std::cout << other.getName() << " scanned class <FR4P-TP> hp: "
		<< other.getHp() << std::endl;
}
void NinjaTrap::ninjaShoebox(const NinjaTrap& other) {
	std::cout << other.getName() << " scanned class <NINJ4-TP> hp: "
		<< other.getHp() << std::endl;
}
