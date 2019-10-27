/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 09:56:19 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/26 23:34:28 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Game.class.hpp"
#include "Bullet.class.hpp"
#include <random>
#include <unistd.h>

void printMoon(void)
{
	attron(COLOR_PAIR(1));
	mvprintw(1, COLS / 1.3 , "         ___---___          ");
	mvprintw(2, COLS / 1.3 , "      .--         --.       ");
	mvprintw(3, COLS / 1.3 , "    ./   ()      .-. \\.    ");
	mvprintw(4, COLS / 1.3 , "   /   o    .   (   )  \\   ");
	mvprintw(5, COLS / 1.3 , "  / .            '-'    \\  "); 
	mvprintw(6, COLS / 1.3 , " |                       |  ");
	mvprintw(7, COLS / 1.3 , " |    o           ()     |  ");
	mvprintw(8, COLS / 1.3 , " |       .--.          O |  "); 
	mvprintw(9, COLS / 1.3 , "  | .   |    |          |   ");
	mvprintw(10, COLS / 1.3 , "   \\    `.__.'   o  .  /  ");
	mvprintw(11, COLS / 1.3 , "    \\                 /   ");
	mvprintw(12, COLS / 1.3 , "     `\\  o    ()     /'   ");
	mvprintw(13, COLS / 1.3 , "       `--___   ___--'    ");
	mvprintw(14, COLS / 1.3 , "             ---           ");
	attroff(COLOR_PAIR(1));
}
void printStaticScenery(void)
{
	printMoon();
}
int main(void) {

	Game thegame;
	int key;
	Bullet bulletArray[3];
	int totalBullets = 0;
	
	//Random Generator
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(20, LINES); // distribution range;
	std::uniform_int_distribution<int> miniDis(1,4);
	// Usage dis(gen);

	int score = 0;
	
	while (1)
	{
		refresh();
		usleep(15000);
		key = getch();
		move(0,0);	
		printw("Score: %d", score++);
		printStaticScenery();
		thegame.arrowKey(key);
		if (key == 27)
			break;
		if (key == 32 && totalBullets >= 0 && totalBullets <= 3) // space, limit bullets to 3
		{
			totalBullets++;
			for (int i =0; i < 3; i++) // Check which bullets is on
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
		for (int i = 0; i < 3; i++) // moving the bullets
		{
			if (bulletArray[i].isActive == true)
			{
				if (bulletArray[i].getX() < COLS - 2)
				{
					move(bulletArray[i].getY(), bulletArray[i].getX() + 1);
					addch(' '); // clear bullet trails;
					bulletArray[i].fly(COLS, 0);	
					attron(COLOR_PAIR(2));
					addch(bulletArray[i].getSymbol());
					attroff(COLOR_PAIR(2));
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
