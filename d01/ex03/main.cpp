/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 19:12:23 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/21 19:12:26 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <iostream>
#include "Zombie.hpp"

int main(void)
{
	ZombieHorde hordeManager;
	
	hordeManager.spawnHorde(5);
	return (0);
}
