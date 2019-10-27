#ifndef ENTITY_H
# define ENTITY_H

# include <curses.h>

class Entity {

public:

	Entity(void);
	~Entity(void);
	Entity(const Entity &ref);
	Entity& operator=(Entity const &rhs);

	Entity(int x, int y, int size);

	bool	left(int min);
	bool	right(int max);
	bool	up(int min);
	bool	down(int max);

	int	getX(void);
	int	getY(void);
	int	getSize(void);

	void	print(char c);
	void	print(void);

protected:
	int	_x;
	int	_y;
	int	_size;

	bool	increment(int *ptr, int max);
	bool	decrement(int *ptr, int min);

};

#endif
