/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 21:00:48 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/24 21:05:03 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	this->_hp				= 100U; 
	this->_maxHp			= 100U;
	this->_ep				= 50U;
	this->_maxEp			= 50U;
	this->_lvl				= 1U;
	this->_name				= "";
	this->_meleeDmg			= 20U;
	this->_rangedDmg		= 15U;
	this->_armorDmgReduct	= 3U;
	std::cout << "ScavTrap contructed. Let's get this party started!\n";
}

ScavTrap::ScavTrap(const std::string& name) : _name(name) {
	this->_hp				= 100U; 
	this->_maxHp			= 100U;
	this->_ep				= 50U;
	this->_maxEp			= 50U;
	this->_lvl				= 1U;
	this->_meleeDmg			= 20U;
	this->_rangedDmg		= 15U;
	this->_armorDmgReduct	= 3U;
	std::cout << this->_name <<
		" ScavTrap contructed. Let's get this party started!\n";
}

ScavTrap::~ScavTrap() {
	std::cout << this->_name << " ScavTrap destructed. Robot down!\n";
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
	std::cout << "ScavTrap " << this->_name << " attacks " << target <<
		" at range, causing " << this->_rangedDmg << " points of damage!\n"; 
	std::cout << "Greeeeeenadeeee!" << std::endl;
}

void ScavTrap::meleeAttack(const std::string& target) const {
	std::cout << "Bonk! Bonk!" << std::endl;
	std::cout << "ScavTrap " << this->_name << " attacks " << target <<
		" at range, causing " << this->_meleeDmg << " points of damage!\n"; 
}

void ScavTrap::takeDamage(unsigned int dmg) {
	dmg = (dmg > this->_armorDmgReduct) ? dmg - this->_armorDmgReduct : 0;
	std::cout << this->_armorDmgReduct << " damage deflected. ";
	if (dmg >= this->_hp) {
		std::cout << "So this is what you called dealth!\n";
		this->_hp = 0;
	} else {
		this->_hp -= dmg;
		std::cout << this->_name << " takes " << dmg <<
			" points of damage. Remaining HP: " << this->_hp << std::endl;
		std::cout << "My robotic flesh! AAHH!" << std::endl;
	}
}

void ScavTrap::beRepaired(unsigned int health) {
	std::cout << "Repairing " << health << " health points. ";
	this->_hp += health;
	if (this->_hp > this->_maxHp) {
		std::cout << "Max HP is capped at " << this->_maxHp << std::endl;
		this->_hp = this->_maxHp;
	} else {
		std::cout << "Total HP: " << this->_hp << std::endl; 
	}
}

