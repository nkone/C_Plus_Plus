/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 09:56:19 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/26 19:17:53 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Game.class.hpp"
#include "Bullet.class.hpp"
#include <random>
#include <unistd.h>

int main(void) {

	Game thegame;
	int key;
	Bullet bulletArray[3];
	int totalBullets = 0;
	
	//Random Generator
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(0,4); // range (0-4);
	// Usage dis(gen);

	int score = 0;
	
	while (1)
	{
		usleep(15000);
		key = getch();
		move(0,0);	
		printw("Score: %d", score++);
		refresh();
		thegame.arrowKey(key);
		if (key == 27)
			break;
		if (key == 32 && totalBullets >= 0 && totalBullets <= 3) // space, limit bullets to 3
		{
			totalBullets++;
			for (int i =0; i < 3; i++)
			{
				if(bulletArray[i].isActive == false)
				{
			//		move(bullet.getY(), bullet.getX() + 1);
			//		addch(' ');
					bulletArray[i] = Bullet(thegame._player.getX() + 1, thegame._player.getY(),0);
					bulletArray[i].isActive = true;
					break;
				}
			}
		}
		for (int i = 0; i < 3; i++)
		{
			if (bulletArray[i].isActive == true)
			{
				if (bulletArray[i].getX() < COLS - 2)
				{
					move(bulletArray[i].getY(), bulletArray[i].getX() + 1);
					addch(' '); // clear bullet trails;
					bulletArray[i].fly(COLS);	
					addch(bulletArray[i].getSymbol());
				}
				else
				{
					bulletArray[i].isActive = false;
					move(bulletArray[i].getY(), bulletArray[i].getX() + 1);
					addch(' ');
					totalBullets--;
				}
			}
		}
	}
	return (0);
}
