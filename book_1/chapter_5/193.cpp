#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <exception>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


/*

* try Blocks and Exception Handling (try, throw, catch)
* try can support multiple catch, catch stack, function terminate called if no handler found, exception safety
* table of Standard exception classes defined in <stdexcept>
* headers (exception, stdexcept, new, type_info)

========= 
#include <stdexcept> runtime_error() object

==========
exception			The most general kind of problem.

runtime_error		Problem that can be detected only at run time.
range_error			Run-time error: result generated outside the range of values that are meaningful.
overflow_error		Run-time error: computation that overﬂowed.
underflow_error		Run-time error: computation that underﬂowed.

logic_error			Error in the logic of the program.
domain_error		Logic error: argument for which no result exists.
length_error		Logic error: attempt to create an object larger than the maximum size for that type.
invalid_argument	Logic error: inappropriate argument.
out_of_range		Logic error: used a value outside the valid range.


*/

int	main()
{
	//throw
	int a = 0, b = 0;
	//cin >> a >> b;
	if (a != b)
		throw std::runtime_error("a != b");
	/*
	* we throw an expression that is an object of type
		runtime_error. Throwing an exception terminates the current function and
		transfers control to a handler that will know how to handle this error
	
	*/

	while (1)
	{
		try
		{
			int	a, b, c;
			cin >> a >> b;
			if (!b)
				throw std::runtime_error("can't divide by 0");
			c = a / b;
			cout << c;
			break ;
		}catch(std::runtime_error err)
		{
			cout << err.what() << " try again" << endl;
		}
	}

	return (0);
}

