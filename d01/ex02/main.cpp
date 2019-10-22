/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 17:31:21 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/21 18:30:44 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void) {
	Zombie *zombie;
	Zombie stackZombie = Zombie("Eric", "noob");
	stackZombie.announce();
	ZombieEvent zombieManager;

	zombie = zombieManager.randomChump();
	delete zombie;
	stackZombie = Zombie("Jo", "pro");
	zombieManager.setZombieType("boomer"); 
	zombie = zombieManager.newZombie("Eric");
	delete zombie;
	zombie = zombieManager.newZombie("Eric");
	delete zombie;
	zombie = zombieManager.newZombie("Eric");
	delete zombie;
	zombie = zombieManager.newZombie("Eric");
	delete zombie;
	stackZombie = Zombie("Eric", "smoker");
	zombieManager.setZombieType("smoker"); 
	zombie = zombieManager.newZombie("Jo");
	delete zombie;
	zombie = zombieManager.randomChump();
	delete zombie;
	return (0);
}
