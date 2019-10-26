/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 21:00:48 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/25 21:39:29 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "Empty body ScavTrap contructed. Let's get this party started!\n";
}

ScavTrap::ScavTrap(const std::string& name) {
	this->_hp				= 100U;
	this->_maxHp			= 100U;
	this->_ep				= 50U;
	this->_maxEp			= 50U;
	this->_lvl				= 1U;
	this->_meleeDmg			= 20U;
	this->_rangedDmg		= 15U;
	this->_armorDmgReduct	= 3U;
	this->_name				= name;
	std::cout << this->_name <<
		" ScavTrap contructed. Recompiling my combat code!\n";
}

ScavTrap::~ScavTrap() {
	std::cout << this->_name << 
		" ScavTrap destructed. Good thing I don't have a soul!\n";
}

ScavTrap::ScavTrap(const ScavTrap& other) {
	this->_hp				= other._hp; 
	this->_maxHp			= other._maxHp; 
	this->_ep				= other._ep; 
	this->_maxEp			= other._maxEp; 
	this->_lvl				= other._lvl; 
	this->_meleeDmg			= other._meleeDmg; 
	this->_rangedDmg		= other._rangedDmg; 
	this->_armorDmgReduct	= other._armorDmgReduct; 
	this->_name				= other._name; 
	std::cout << "Copy constructor ScavTrap completed\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
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
	std::cout << "Assignation constructor to another ScavTrap called\n";
	return *this;
}

void ScavTrap::rangedAttack(const std::string& target) const {
	std::cout << "Greeeeeenadeeee!" << std::endl;
	ClapTrap::rangedAttack(target);
}

void ScavTrap::meleeAttack(const std::string& target) const {
	std::cout << "Bonk! Bonk!" << std::endl;
	ClapTrap::meleeAttack(target);
}

void ScavTrap::takeDamage(unsigned int dmg) {
	ClapTrap::takeDamage(dmg);
	if (this->_hp == 0) {
		std::cout << "It's ok to die since I have no soul.\n";
	} else {
		std::cout << "Tis but a scratch.\n";
	}
}

void ScavTrap::beRepaired(unsigned int health) {
	std::cout << "Oh look. Sweet life juice! ";
	ClapTrap::beRepaired(health);
}

void ScavTrap::challengeNewComer(const std::string& target) const {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(0,4);
	
	std::cout << this->_name << " challenges " << target << " to " <<
		gChallengeBox[dis(gen)] << std::endl;
}
