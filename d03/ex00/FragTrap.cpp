/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 19:06:02 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/24 20:43:34 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	this->_hp				= 100U; 
	this->_maxHp			= 100U;
	this->_ep				= 100U;
	this->_maxEp			= 100U;
	this->_lvl				= 1U;
	this->_name				= "";
	this->_meleeDmg			= 30U;
	this->_rangedDmg		= 20U;
	this->_armorDmgReduct	= 5U;
	std::cout << "FR4P-TP contructed. Let's get this party started!\n";
}

FragTrap::FragTrap(const std::string& name) : _name(name) {
	this->_hp				= 100U; 
	this->_maxHp			= 100U;
	this->_ep				= 100U;
	this->_maxEp			= 100U;
	this->_lvl				= 1U;
	this->_meleeDmg			= 30U;
	this->_rangedDmg		= 20U;
	this->_armorDmgReduct	= 5U;
	std::cout << this->_name <<
		" FR4P-TP contructed. Let's get this party started!\n";
}

FragTrap::~FragTrap() {
	std::cout << this->_name << " FR4P-TP destructed. Robot down!\n";
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
	std::cout << "Copy constructor FR4P-TP completed\n";
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
	std::cout << "Assignation constructor to another FR4P-TP called\n";
	return *this;
}

void FragTrap::rangedAttack(const std::string& target) const {
	std::cout << "FR4P-TP " << this->_name << " attacks " << target <<
		" at range, causing " << this->_rangedDmg << " points of damage!\n"; 
	std::cout << "That looks like it hurts!" << std::endl;
}

void FragTrap::meleeAttack(const std::string& target) const {
	std::cout << "Take that!" << std::endl;
	std::cout << "FR4P-TP " << this->_name << " attacks " << target <<
		" at range, causing " << this->_meleeDmg << " points of damage!\n"; 
}

void FragTrap::takeDamage(unsigned int dmg) {
	dmg = (dmg > this->_armorDmgReduct) ? dmg - this->_armorDmgReduct : 0;
	std::cout << this->_armorDmgReduct << " damage deflected. ";
	if (dmg >= this->_hp) {
		std::cout << "I'm too pretty to die!\n";
		this->_hp = 0;
	} else {
		this->_hp -= dmg;
		std::cout << this->_name << " takes " << dmg <<
			" points of damage. Remaining HP: " << this->_hp << std::endl;
		std::cout << "My robotic flesh! AAHH!" << std::endl;
	}
}

void FragTrap::beRepaired(unsigned int health) {
	std::cout << "Repairing " << health << " health points. ";
	this->_hp += health;
	if (this->_hp > this->_maxHp) {
		std::cout << "Max HP is capped at " << this->_maxHp << std::endl;
		this->_hp = this->_maxHp;
	} else {
		std::cout << "Total HP: " << this->_hp << std::endl; 
	}
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
