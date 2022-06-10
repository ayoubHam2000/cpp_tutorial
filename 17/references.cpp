#include <iostream>

/*+++++++*/
// References
/*+++++++*/
/*
* An alias (an alternate name) for an object.
* References don’t need a dereferencing operator to access the value. They can be used like normal variables.
! Reference variable cannot be updated.

*/



void	add(int &a)
{
	a = a + 1;
}

int main()
{
	int	a;

	a = 6;
	add(a);
	std::cout << a << std::endl;
	return (0);
}
