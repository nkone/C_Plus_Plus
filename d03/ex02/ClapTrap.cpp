/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 15:12:45 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/25 16:11:59 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Default Constructor
ClapTrap::ClapTrap() {
	std::cout << "ClapTrap constructed. Awaiting orders!\n";
}

// Constructor name
ClapTrap::ClapTrap(const std::string& name) : _name(name) {
	std::cout << name << " ClapTrap constructed. Awaiting orders!\n";
	this->_hp				= 100U; 
	this->_maxHp			= 100U;
	this->_ep				= 100U;
	this->_maxEp			= 100U;
	this->_lvl				= 1U;
	this->_meleeDmg			= 30U;
	this->_rangedDmg		= 20U;
	this->_armorDmgReduct	= 5U;
}

// Destructor
ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructed. Long live the robot king, ME!\n";
}

// Copy Constructor
ClapTrap::ClapTrap(const ClapTrap& other) {
	this->_hp				= other._hp; 
	this->_maxHp			= other._maxHp; 
	this->_ep				= other._ep; 
	this->_maxEp			= other._maxEp; 
	this->_lvl				= other._lvl; 
	this->_meleeDmg			= other._meleeDmg; 
	this->_rangedDmg		= other._rangedDmg; 
	this->_armorDmgReduct	= other._armorDmgReduct; 
	this->_name				= other._name; 
	std::cout << "Copy ClapTrap successful!\n";
}

// Overload operator
ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
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
	std::cout << this->_name << " assignment to " << other._name <<
		" successful!\n";
	return (*this);
}

void ClapTrap::rangedAttack(const std::string& target) const {
	std::cout << "<CL4P-TP> used ranged attack, dealing " << this->_rangedDmg
		<< " to " << target << std::endl;
}

void ClapTrap::meleeAttack(const std::string& target) const {
	std::cout << "<CL4P-TP> used melee attack, dealing " << this->_meleeDmg
		<< " to " << target << std::endl;
}

void ClapTrap::takeDamage(unsigned int dmg) {
	dmg = (dmg > this->_armorDmgReduct) ? dmg - this->_armorDmgReduct : 0;
	if (dmg >= this->_hp) {
		this->_hp = 0;
		std::cout << this->_name << " <CL4P-TP> takes " << dmg <<
			" points of damage. " << "Reduced by " << this->_armorDmgReduct <<
			". Remaining HP: " << this->_hp << std::endl;
		std::cout << this->_name << " <CL4P-TP> Dead\n";
	} else {
		this->_hp -= dmg;
		std::cout << this->_name << " <CL4P-TP> takes " << dmg <<
			" points of damage. " << "Reduced by " << this->_armorDmgReduct <<
			". Remaining HP: " << this->_hp << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int health) {
	this->_hp += health;
	std::cout << "Repairing " << this->_name << " <CL4P-TP> for " << health
		<< std::endl;
	if (this->_hp > this->_maxHp) {
		std::cout << "Max HP is capped at " << this->_maxHp << std::endl;
		this->_hp = this->_maxHp;
	} else {
		std::cout << "Total HP: " << this->_hp << std::endl; 
	}
}
