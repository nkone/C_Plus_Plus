/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 17:17:35 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/21 18:18:13 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <ctime>

ZombieEvent::ZombieEvent(void) {
	return ;	
}

ZombieEvent::~ZombieEvent(void) {
	return ;
}

void ZombieEvent::setZombieType(std::string type){
	this->_type = type;
}

Zombie *ZombieEvent::newZombie(std::string name) {
	Zombie *zombie = new Zombie(name, this->_type); 
	return zombie;
}

Zombie *ZombieEvent::randomChump(void) {
	int nId;
	int tId;
	std::string names[] = {"A", "B", "C", "D", "E"};
	std::string types[] = {"tank", "hunter", "smoker", "boomer", "spitter"};
	Zombie *zombie;

	std::srand(time(nullptr));
	nId = rand() % (sizeof(names)/sizeof(names[0]));
	std::srand(time(nullptr));
	tId = rand() % (sizeof(types)/sizeof(types[0]));
	this->setZombieType(types[tId]);
	zombie = this->newZombie(names[nId]);
	zombie->announce();
	return (zombie);
}
	
