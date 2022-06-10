#include <iostream>
/*
 * Members of a class are private by default.
 * Members of a class are private by default.
 * Better to use struct when there is no inheritance ana when you deal with manipulating data (something public)
 * functions inside a class are called methods
 */

class Player
{
public:
	int	x;
	int	y;
};

int	main()
{
	Player	p;

	p.x = 10;
	p.y = 20;
	std::cout << p.x << " " << p.y << std::endl;
	return (0);
}
