#include <iostream>
//Ayoub Ben hamou on 6/7/22

/*
 * Actually define symbols, the linker is not going to look outside of the scope of this translation unit for that symbol definition
 * static on global variables
 * static on functions
 * The extern keyword tells the compiler that a variable is defined in another source module
	-> The linker then finds this actual declaration and sets up the extern variable to point to the correct location.
 */

int main()
{
	return (0);
}
