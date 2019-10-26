#include "Entity.class.hpp"

// ************************************************************************** //
//		Coplien's form
// ************************************************************************** //
Entity::Entity(void):
	_x(0), _y(0){ }

Entity::Entity(int x, int y):
	_x(x), _y(y){ }

Entity::Entity(const Entity &ref){ *this = ref; }

Entity&	Entity::operator=(Entity const &rhs)//	rhs "right hand side"
{
	this->_x = rhs._x;
	this->_y = rhs._y;
	return (*this);
}

Entity::~Entity(void){ }

// ************************************************************************** //
//		incrementers
// ************************************************************************** //
bool	Entity::left(int min)
{
	if (this->_x > min)
	{
		this->_x -= 1;
		return (true);
	}
	return (false);
}

bool	Entity::up(int min)
{
	if (this->_y > min)
	{
		this->_y -= 1;
		return (true);
	}
	return (false);
}

bool	Entity::right(int max)
{
	if (this->_x < max)
	{
		this->_x += 1;
		return (true);
	}
	return (false);
}

bool	Entity::down(int max)
{
	if (this->_y < max)
	{
		this->_y += 1;
		return (true);
	}
	return (false);
}

// ************************************************************************** //
//		getters
// ************************************************************************** //
int	Entity::getX(void){ return (this->_x); }
int	Entity::getY(void){ return (this->_y); }