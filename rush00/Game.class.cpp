#include "Game.class.hpp"

//	https://linux.die.net/man/3/mvprintw
//	int mvwprintw(WINDOW *win, int y, int x, const char *fmt, ...);

// ************************************************************************** //
//		Coplien's form
// ************************************************************************** //
Game::Game(void)
{
	initscr();
	getmaxyx(stdscr, this->_maxY, this->_maxX);
	curs_set(0);//	Disable cursors

	// Get one input at a time ( actually not sure what it does but we need it)
	raw();
	cbreak();

	noecho();// No echo for key input
	keypad(stdscr, TRUE);// Get keyboard input

	// Add string at (x, y);
	this->_player = Entity(this->_maxX / 2, this->_maxY / 2);
	mvprintw(this->_player.getY(), this->_player.getX(), "A");

	refresh();
}

Game::~Game(void)
{
	refresh();
	endwin();// Terminate and restore window settings
}

Game::Game(const Game &ref){
	*this = ref;
}

Game&	Game::operator=(Game const &rhs)//	rhs "right hand side"
{
	this->_maxX = rhs._maxX;
	this->_maxY = rhs._maxY;
	this->_player = rhs._player;
	return (*this);
}

// ************************************************************************** //
//		class methods
// ************************************************************************** //
void	Game::arrowKey(int key)
{
	clear();

	if (key == 258)
		this->_player.down(this->_maxY - 1);
	if (key == 259)
		this->_player.up(1);
	if (key == 260)
		this->_player.left(0);
	if (key == 261)
		this->_player.right(this->_maxX - 1);

	printw("Key entered: %c ( value: %d )", key, key);
	move(0, 0);
	mvprintw(this->_player.getY(), this->_player.getX(), "O");
	refresh();
}