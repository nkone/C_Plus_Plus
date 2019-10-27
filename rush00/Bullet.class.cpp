#include "Bullet.class.hpp"

// ************************************************************************** //
//		Coplien's form
// ************************************************************************** //
Bullet::Bullet(void)
{
	this->_x = 0;
	this->_y = 0;
	this->_size = 0;
	this->_symbol = '*';
	this->isActive = false;
}
Bullet::Bullet(int x, int y, int size)
{
	this->_x = x;
	this->_y = y;
	this->_size = size;
	this->_symbol = '*';
	this->isActive = false;
}

Bullet::Bullet(const Bullet &ref)	{ *this = ref; }

Bullet&	Bullet::operator=(Bullet const &rhs)//	rhs "right hand side"
{
	this->_x = rhs._x;
	this->_y = rhs._y;
	this->_size = rhs._size;
	this->_symbol = '*';
	return (*this);
}

Bullet::~Bullet(void){ }

// ************************************************************************** //
//		on screen
// ************************************************************************** //

void	Bullet::print(char c)
{
	for (int i = 0; i < this->_size; ++i)
	{
		for (int j = 0; j < this->_size; ++j)
			mvprintw(this->_y + i, this->_x + j, (char[2]){c, '\0'});
	}
}
void	Bullet::print(void)	{ this->print('>'); }
void	Bullet::fly(int max)
{
	if (this->_x < max - this->_size)
		this->_x += 1;
}

// ************************************************************************** //
//		getters
// ************************************************************************** //
char	Bullet::getSymbol(void) const {return (this->_symbol);}
