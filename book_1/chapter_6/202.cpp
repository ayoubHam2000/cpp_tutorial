#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


/*

* function, Local Objects - Automatic Objects
* Function declarations
* Argument Passing (Passing Arguments by Value, Passing Arguments by Reference, Pointer Parameters)
* Passing a Multidimensional Array
* main: Handling Command-Line Options
* Functions with Varying Parameters (initializer_list, ellipsis(varargs), variadic template)
* return function
* Reference Returns Are Lvalues
* Return a vector
* Returning a Pointer to an Array
* Recursion
* Trailing Return Type auto function(parms) -> type

* Overloaded Functions
* function-related features (inline, default arguments, constexpr)
* assert, NDEBUG
* __func__ , __FILE__, __LINE__, __TIME__, __DATE__
* Function Matching (resolution, candidate functions, viable functions)
* function pointer

*/

//multi args with the same type
void	func(int a, std::initializer_list<string> strs)
{
	for (auto item : strs)
	{
		cout << item << endl;
	}
	cout << a << endl;
}

std::vector<int> multiReturn()
{
	return {1, 2, 3};
}

//Using a Trailing Return Type
auto	test1(int a) -> int
{
	return (10 * a);
}

string	test2()
{
	return {"Hi!"};
}

void	over_f1(int a, int b = 5, int r);
void	over_f1(double a, double b, double r);

int	main()
{
	func(4, {string("a"), string("b"), "c"});
	cout << __func__ << endl;

	//over_f1(1, 1, 0.3);
	return (0);
}

