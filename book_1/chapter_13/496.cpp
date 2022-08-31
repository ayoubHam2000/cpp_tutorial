#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
* copy
constructor, copy-assignment operator, move constructor, move-assignment op-
erator,and destructor. 
The copy and move constructors deﬁne what happens
when an object is initialized from another object of the same type. The copy- and
move-assignment operators deﬁne what happens when we assign an object of a
class type to another object of that same class type. The destructor deﬁnes what
happens when an object of the type ceases to exist. Collectively, we’ll refer to these
operations as copy control.



*/

class	test
{
public:
	test()
	{
		cout << "construct test" << endl;
	}
	test(const test &obj)
	{
		cout << "copy" << endl;
		*this = obj;
	}
	test &operator=(const test &)
	{
		cout << "assign" << endl;
		return (*this);
	}
	~test()
	{
		cout << "destructor" << endl;
	}

};

int	main()
{
	int f();
	vector<int> vi(100);
	int&& r1 = f();
	int& r2 = vi[0];
	int& r3 = r1;
	int&& r4 = vi[0] * f();

	const int &p = r4;
	const int &&r = 8;
	

	return (0);
}