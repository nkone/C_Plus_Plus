/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 19:06:02 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/25 22:03:43 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "Empty body FragTrap contructed. Let's get this party started!\n";
}

FragTrap::FragTrap(const std::string& name) {
	this->_hp				= 100U; 
	this->_maxHp			= 100U;
	this->_ep				= 100U;
	this->_maxEp			= 100U;
	this->_lvl				= 1U;
	this->_meleeDmg			= 30U;
	this->_rangedDmg		= 20U;
	this->_armorDmgReduct	= 5U;
	this->_name				= name;
	std::cout << this->_name <<
		" FragTrap contructed. Let's get this party started!\n";
}

FragTrap::~FragTrap() {
	std::cout << this->_name << " FragTrap destructed. Robot down!\n";
}

FragTrap::FragTrap(const FragTrap& other) {
	this->_hp				= other._hp; 
	this->_maxHp			= other._maxHp; 
	this->_ep				= other._ep; 
	this->_maxEp			= other._maxEp; 
	this->_lvl				= other._lvl; 
	this->_meleeDmg			= other._meleeDmg; 
	this->_rangedDmg		= other._rangedDmg; 
	this->_armorDmgReduct	= other._armorDmgReduct; 
	this->_name				= other._name; 
	std::cout << "Copy constructor FragTrap completed\n";
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
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
	std::cout << "Assignation constructor to another FragTrap called\n";
	return *this;
}

void FragTrap::rangedAttack(const std::string& target) const {
	std::cout << "That looks like it hurt!" << std::endl;
	ClapTrap::rangedAttack(target);
	
}

void FragTrap::meleeAttack(const std::string& target) const {
	std::cout << "Take that!" << std::endl;
	ClapTrap::meleeAttack(target);
}

void FragTrap::takeDamage(unsigned int dmg) {
	ClapTrap::takeDamage(dmg);
	if (this->_hp == 0) {
		std::cout << "So this is the end\n";
	} else {
		std::cout << "You call this damage?!\n";
	}
}

void FragTrap::beRepaired(unsigned int health) {
	std::cout << "Ew what is this red juice? ";
	ClapTrap::beRepaired(health);
}

void FragTrap::vaulthunter_dot_exe(const std::string& target) {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(0, 4);
	
	if (this->_ep >= 25) {
		this->_ep -= 25;
		std::cout << this->_name << " activated " << gExeAttack[dis(gen)] <<
			" on " << target << ". Remaining energy: " << this->_ep << std::endl;
	} else {
		std::cout << "Oh no, somebody grab me some snickers!" << std::endl;
	}
}	
