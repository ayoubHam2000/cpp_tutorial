#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


/*

* Like pointers (§ 2.3.2, p. 52), iterators give us indirect access to an object. In
	-> the case of an iterator, that object is an element in a container or a character in a
	-> string. We can use an iterator to fetch an element and iterators have operations
	-> to move from one element to another. 
	As with pointers, an iterator may be valid or
	-> invalid. A valid iterator either denotes an element or denotes a position one past
	-> the last element in a container. All other iterator values are invalid.


*begin and end.The begin member returns an
	iterator that denotes the ﬁrst element (or ﬁrst character), if there is one
* The iterator returned by end is an iterator positioned “one past the end” of the
	associated container (or string).
!off-the-end iterator (the-end iterator)

* If the container is empty, begin returns the same iterator as the one returned by end.

*Standard Container Iterator Operations
	*it, it->data, ++it, --it, it == other, it != other

* Operations Supported by vector and string Iterators
	iter + n, iter - n, iter += n, iter -= n, iter - other, > < <= >=

*Because the iterator returned from end does not denote an element, it
	may not be incremented or dereferenced.

!(*it)->member()

!For now, it is important to realize that loops that use iterators should not
	add elements to the container to which the iterators refer.

difference_type

*/

/*

vector<int>::iterator it; // itcan read and write vector<int>elements
string::iterator it2; // it2can read and write characters in a string
vector<int>::const_iterator it3; // it3can read but not write elements
string::const_iterator it4; //it4can read but not write characters


* If a vector or string is const,we may useonly its const_iterator type. With a nonconst vector
	or string, wecan useeither iterator or const_iterator.
*begin and end depends on whether the object on which
	they operator is const.If the object is const,then begin and end return a
	const_iterator; if the object is not const,they return iterator:
*the new standard introduced two new functions
	named cbegin and cend:
*/


int	binarySearch(vector<int> &a, int n)
{
	auto	s = a.cbegin();
	auto	e = a.cend();
	auto	m = a.cbegin() + (e - s) / 2;

	while (s != e)
	{
		if (n == *m)
			return (1);
		if (n < *m)
			e = m;
		else
			s = m + 1;
		m = s + (e - s) / 2;
	}
	return (0);
}


int	main()
{
	string	a("yi");

	if (a.begin() != a.end())
	{
		//auto it = a.begin();
		string::iterator it = a.begin();
		*it = std::toupper(*it);
		++it;
		*it = std::toupper(*it);
	}

	cout << a << endl;

	auto it = a.cbegin();
	while (it != a.cend())
	{
		cout << *it << endl;
		it++;
	}

	const vector<int> b{1, 5, 9, 12};
	vector<int>::const_iterator const_itr = b.cbegin();
	
	vector<int> c{1, 5, 9, 12};
	cout << binarySearch(c, 1) << endl;


	return (0);
}