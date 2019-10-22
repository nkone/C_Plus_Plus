/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 19:12:23 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/22 13:34:05 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ZombieHorde.hpp"

int main(void)
{
	ZombieHorde hordeManager;
	
	srand(time(NULL));
	hordeManager.spawnHorde(10);
	return (0);
}
