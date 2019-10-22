/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 18:54:55 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/21 19:22:31 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <iostream>

ZombieHorde::ZombieHorde(void) {
	std::cout << "Creating a horde\n";	
}

ZombieHorde::~ZombieHorde(void) {
	std::cout << "Destroying the horde\n";
}

void ZombieHorde::createHorde(int N) {
	int idx = 0;
	//this->_horde = new Zombie[N];
	while (idx < N) {
		this->_horde[idx] = new Zombie("Eric", "common"); 
		this->_horde[idx].announce();
		idx++;
	}
}

Zombie *ZombieHorde::getHorde(void) {
	return (this->_horde);
}
