#include <iostream>
#include <string>
#include <vector>
#include "Sales_data.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


/*

* class, in-class initializer, members, function members, constructor, this, initializer list
* Copy, Assignment, and Destruction
* mutable Data Members
* Delegating Constructors, explicit, Aggregate Classes, Literal Classes, constexpr Constructors

* methods are implicitly inline in the class def

*/

//! friend of a member class
class	Y
{
public:
	double	doWork(class X &x);
};

class	X
{
	int	e;
	friend	double Y::doWork(class X &x);
};

double	Y::doWork(class X &x)
{
	x.e = 20;
	return (0);
}

class	Order
{
private:
	int	x;
	int	y;
public:
	Order(): y(0), x(1) {} //-Wall show a warning of the order

};

struct	UUU
{
	string	a;
	explicit UUU(const std::string &b) : a(b) {};
};

int	main()
{
	string tmp("sdf");
	UUU r (string("asd"));


	return (0);
}
