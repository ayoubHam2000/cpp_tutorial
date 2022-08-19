/*

 * volatile
 	-> will tell the compiler not to optimise code related the variable, usually when we know it can be changed from "outside", e.g. by another thread.

 * const 
	-> will tell the compiler that it is forbidden for the program to modify the variable's value.

 * const volatile 
 	-> is a very special thing you'll probably see used exactly 0 times in your life (tm). As is to be expected, it means that the program cannot modify the variable's value, but the value can be modified from the outside, thus no optimisations will be performed on the variable.

 * explicit
	-> The compiler is allowed to make one implicit conversion to resolve the parameters to a function. What this means is that the compiler can use constructors callable with a single parameter to convert from one type to another in order to get the right type for a parameter.
	-> Prefixing the explicit keyword to the constructor prevents the compiler from using that constructor for implicit conversions
	-> The reason you might want to do this is to avoid accidental construction that can hide bugs.

 * inline 
	-> When the inline function is called whole code of the inline function gets inserted or substituted at the point of inline function call. This substitution is performed by the C++ compiler at compile time. Inline function may increase efficiency if it is small.

	-> Compiler may not perform inlining in such circumstances like
		-> 1) If a function contains a loop. (for, while, do-while)
		-> 2) If a function contains static variables.
		-> 3) If a function is recursive.
		-> 4) If a function return type is other than void, and the return statement doesn’t 
		-> 5) If a function contains switch or goto statement.

!---------------------------------------------------------------------------

 * overhead
	-> In the middle, the content of your function is executed. The stuff that happens before and after is overhead. It doesn't do any useful work, it's just there because it's required to execute your function. If the overhead is too high, you're spending most of your time not doing anything useful.

 * embedded system 
 	-> An embedded system is a combination of computer hardware and software designed for a specific function.

 * const variable
	-> const int a;
 * const pointer
	-> const int * const p; or int const * const p;
	-> first const prevent changing the content of the pointer
	-> second const prevent changing the pointer value
 * const in a method
	-> getter: int getX() const {}
	-> the function getX can't change the class members value.

 * mutable
	-> it allows the variable to be change inside a method with const

 * other
	int *a, b;
	-> a is a pointer, b is an integer
	
*/