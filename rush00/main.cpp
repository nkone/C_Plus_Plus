/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 09:56:19 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/26 14:36:36 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Game.class.hpp"
#include <random>

int main(void) {

	Game thegame;
	int key;

	// Random generator
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(0,4);
	// Usage dis(gen);
	while ((key=getch()) != 27)
		thegame.arrowKey(key);

	return (0);
}
