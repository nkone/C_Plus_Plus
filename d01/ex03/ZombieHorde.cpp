/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 18:54:55 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/22 13:33:53 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <iostream>
#include <ctime>
#include <stdio.h>
#include <random>

ZombieHorde::ZombieHorde(void) {
	std::cout << "Creating a horde\n";	
}

ZombieHorde::~ZombieHorde(void) {
	std::cout << "Destroying the horde\n";
	delete [] this->_horde;
}

void ZombieHorde::spawnHorde(int N) {
	int idx = 0;
	this->_horde = new Zombie[N]();
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(0, 100);
	while (idx < N) {
		this->_horde[idx].setName(randomName(dis(gen)));
		this->_horde[idx].setType("common");
		this->_horde[idx].announce();
		idx++;
	}
}

Zombie *ZombieHorde::getHorde(void) {
	return (this->_horde);
}

std::string ZombieHorde::randomName(int idx) {
	std::string names[] = {"A", "B", "C", "D", "E"};
	idx = idx % (sizeof(names) / sizeof(names[0]));
	return names[idx];

}
