#ifndef GAME_H
# define GAME_H

# include <curses.h>
# include "Entity.class.hpp"

class Game {

public:

	Game(void);
	~Game(void);
	Game(const Game &ref);
	Game& operator=(Game const &rhs);

	void	arrowKey(int key);

	Entity	_player;
private:
	int		_maxX;
	int		_maxY;
};

#endif
