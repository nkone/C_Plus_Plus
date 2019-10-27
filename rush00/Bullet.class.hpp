#ifndef BULLET_H
#define	BULLET_H

#include "Entity.class.hpp"
#include "Game.class.hpp"
#include <curses.h>

class Bullet : public Entity {
	public:

		Bullet(void);	
		~Bullet(void);
		Bullet(const Bullet & ref);
		Bullet& operator=(const Bullet & ref);

		Bullet(int x, int y, int size);
		
		void	print(char c);
		void	print(void);
		char	getSymbol(void) const;
		void	fly(int);
		bool	isActive;
	private:
		char	_symbol;
};

#endif
