#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


/*
* when we deﬁne a vector.For example, we can copy elements from another vector.
* Another way to provide element values, is that under the new standard, we can
	-> list initialize (§ 2.2.1, p. 43) a vector from a list of zero or more initial element
	-> values enclosed in curly braces
! We cannot supply a list of initializers using parentheses
! On the other hand, if we use braces and there is no way to use the initializers to
	-> list initialize the object, then those values will be used to construct the object.
* The body of a range for must not change the size of the sequence over
	-> which it is iterating.

* A vector type always includes its element type (§ 3.3, p. 97):
	vector<int>::size_type // ok
	vector::size_type // error
* push_back, empty, size
* We can compare two vectors only if we can compare the elements in those vectors.
* The process that the compiler uses to create classes or functions from templates is called in-
	-> stantiation. When we use a template, we specify what kind of class or function we
	-> want the compiler to instantiate.
*/
int	main()
{
	vector<int> a;
	vector<int> b(a);
	vector<int> c = a;
	vector<string> d = {"s1", "s2"};
	vector<string> e(10, "n"); //ten strings; each element is "n!"
	vector<int> f(10); //10 elements with default value 0; the type must have default initialize.
	vector<int>g{1, 2, 3, 4};
	vector<string>h{10, "hi"};
	vector<string>j(10, "hi");

	string buffer;
	while (cin >> buffer)
	{
		d.push_back(buffer);
	}
	for (string &item : d)
	{
		cout << item << endl;
	}

	vector<int> k {7, 2, 3};
	vector<int> l {1, 2, 3};
	cout << (k > l) << endl;

	vector<int> m = {10};

	return (0);
}