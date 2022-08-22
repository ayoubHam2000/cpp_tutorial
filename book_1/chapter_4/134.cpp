#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


/*

* An expression is composed of one or more operands and yields a result when
it is evaluated.
* Lvalues and Rvalues
* Precedence and Associativity
* compound expression
* Order of Evaluation,
* Arithmetic Operators
* Assignment Operators
* Compound Assignment Operators
* Increment and Decrement Operators
* The Member Access Operators
* The Conditional Operator (?:)



* Lvalues and rvalues also differ when used with decltype (§ 2.5.3, p. 70).
	When we apply decltype to an expression (other than a variable), the result is
	a reference type if the expression yields an lvalue. As an example, assume p is an
	int*. Because dereference yields an lvalue, decltype(*p) is int&. On the other
	hand, because the address-of operator yields an rvalue, decltype(&p) is int**,
	that is, a pointer to a pointer to type int.

* For operators that do not specify evaluation order, it is an error for an expres-
sion to refer to and change thesameobject. Expressions that do so haveundeﬁned
behavior (§ 2.1.2, p. 36). As a simple example, the << operator makes no guar-
antees about when or how its operands are evaluated. As a result, the following
output expression is undeﬁned:

* The unary arithmetic operators have higher precedence
	than the multiplication and division operators, which in turn have higher prece-
	dence than the binary addition and subtraction operators.

* modulus: it has the same sign as m.

* Assignment Is Right Associative And Assignment Has Low Precedence

* Increment and Decrement Operators : These operators require lvalue operands. The preﬁx operators return the object
itself as an lvalue. The postﬁx operators return a copy of the object’s original value
as an rvalue.

* USE POSTFIX OPERATORS ONLY WHEN NECESSARY
* For ints and pointers, the compiler can optimize away this extra work. For more
	complicated iterator types, this extra work potentially might be more costly. By ha-
	bitually using the preﬁx versions, we do not have to worry about whether the perfor-
	mance differencematters. Moreover—andperhaps more importantly—we can express
	the intent of our programs more directly.

* *beg = toupper(*beg++); // error: this assignment is undeﬁned

The Member Access Operators (., ->)
* dereference has a lower precedence than dot

152

cout << ((grade < 60) ? "fail" : "pass"); // prints passor fail
cout << (grade < 60) ? "fail" : "pass"; // prints 1or 0!
cout << grade < 60 ? "fail" : "pass"; // error: compares coutto 60

*/

int	main()
{
	int	i = 10;
	// cout << i << " " << ++i << endl; // undeﬁned (not specify evaluation order)
	bool b = true;
	int	a = -b;
	cout << a << endl;

	// The left-hand operand of an assignment operator must be a modiﬁable lvalue. For
	// example, given
	int k= 0;// initializations, not assignment
	int	r1, r2, r3;
	r1 = r2 = r3 = 5;
	cout << r1 << " " << r2 << " " << r1 << endl;

	return (0);
}