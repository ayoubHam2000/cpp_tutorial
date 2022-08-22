#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


/*

* The Bitwise Operators
* The sizeof Operator
* Comma Operator
* Type Conversions
* The Arithmetic Conversions
* Implicit Conversions
* Explicit Conversions

======

* If the operand is signed and its value is negative, then the way that the “sign bit”
is handled in a number of the bitwise operations is machine dependent. Moreover,
doing a left shift that changes the value of the sign bit is undeﬁned.

* As usual, if an operand is a “small integer,” its value is ﬁrst promoted (§ 4.11.1,
p. 160) to a larger integral type

* The right-hand operand must not be negative and
must be a value that is strictly less than the number of bits in the result.

* The shift operators have midlevel precedence: lower than the arithmetic operators
but higher than the relational, assignment, and conditional operators.

=====

Sales_data data, *p;
sizeof(Sales_data); // size required to hold an object oftype Sales_data
sizeof data; // size ofdata’s type, i.e., sizeof(Sales_data)
sizeof p; // size ofa pointer
sizeof *p; // size ofthe type to which ppoints, i.e., sizeof(Sales_data)
sizeof data.revenue; // size ofthe type ofSales_data’s revenuemember
sizeof Sales_data::revenue; // alternative way to get the size ofrevenue

======

* The left-hand expression is evaluated and its result is discarded. The result of a
comma expression is the value of its right-hand expression.

======

* In most expressions, values of integral types smaller than int are ﬁrst pro-
moted to an appropriate larger integral type.

======
The Arithmetic Conversions

* More generally, in expressions
	that mix ﬂoating-point and integral values, the integral value is converted to an
	appropriate ﬂoating-point type.
* The integral promotions convert the small integral types to a larger integral type.
* If the operands of an operator have differing types, those operands are ordinarily
	converted to a common type  p35
	* When the signedness differs and the type of the unsigned operand is the same
	as or larger than that of the signed operand, the signed operand is converted to
	unsigned.
* The remaining case is when the signed operand has a larger type than the un-
	signed operand. In this case, the result is machine dependent. If all values in the
	unsigned type ﬁt in the larger type, then the unsigned operand is converted to the
	signed type. If the values don’t ﬁt, then the signed operand is converted to the
	unsigned type. For example, if the operands are long and unsigned int,and
	int and long have thesamesize, the long will be converted to unsigned int.
	If the long type has more bits, then the unsigned int will be converted to long.

=========
Explicit Conversions
Named Casts
	cast-name<type>(expression);

* static_cast: Any well-deﬁned type conversion, other than those involving low-level const, can be requested using a static_cast
* const_cast: A const_cast changes only a low-level (§ 2.4.3, p. 63) const in its operand:
* reinterpret_cast: A reinterpret_cast generally performs a low-level reinterpretation of the bit pattern of its operands. (like from int * to char *)
		const char *cp;
		error: static_castcan’t cast away const
		char *q = static_cast<char*>(cp);
		static_cast<string>(cp); // ok: converts string literal to string
		const_cast<string>(cp); // error: const_castonly changes constness
* Old-Style Casts
type (expr); // function-style cast notation
(type) expr;// C-language-style cast notation

* Depending on the types involved, an old-style cast has the same behavior as a
const_cast,a static_cast,or a reinterpret_cast.When we use an old-
style cast where a static_cast or a const_cast would be legal, the old-style
cast does the same conversion as the respective named cast.

*/

int	main()
{
	//,
	vector<int> ivec {1, 2, 3, 4, 5};
	auto cnt = ivec.size();
	for(vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--)
		ivec[ix] = cnt;
	for (int item : ivec)
		cout << item << endl;
	

	double d = 1.2; int a = 10; char c = 'a';
	cout << d + a * c << endl; //result is double

	const char *p = "sdsdf";
	char *q = const_cast<char *>(p);
	q[0] = 'r';
	cout << p << endl;
	int _b = int(3.14);

	return (0);
}
