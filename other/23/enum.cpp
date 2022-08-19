#include <iostream>

/*
	* you can initialize enum with or without a name
	* you can't have a conflict names between enums
	* you can set a type integers to enum
	* you can specify the value of enum members
	* you can have enum as namespace in a class
*/

enum NAME : char
{
	R = 6
};

enum {
	A
};

class Point
{
public:
	enum Level
	{
		L_START, L_MEDDLE, L_END
	};

	int	x;

	void print_level()
	{
		if (x < 5)
			std::cout << L_START << std::endl;
		else if (x < 10)
			std::cout << L_MEDDLE << std::endl;
		else
			std::cout << L_END << std::endl;
	}
};

int	main()
{
	int		a = A;
	NAME	b = R;
	Point	p;

	p.x = 50;
	p.print_level();
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	return (0);
}