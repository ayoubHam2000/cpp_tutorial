#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


/*

* try Blocks and Exception Handling (try, throw, catch)



========= 
#include <stdexcept> runtime_error() object

*/

int	main()
{
	//throw
	int a, b;
	cin >> a >> b;
	if (a != b)
		throw std::runtime_error("a != b");
	/*
	* we throw an expression that is an object of type
		runtime_error. Throwing an exception terminates the current function and
		transfers control to a handler that will know how to handle this error
	
	*/


	return (0);
}

