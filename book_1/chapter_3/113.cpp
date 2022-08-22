#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


/*


int (*Parray)[10] = &arr; // Parraypoints to an array often ints
int (&arrRef)[10] = arr; // arrRefrefers to an array often ints
int *(&arry)[10] = ptrs; // arry is a reference to an array of ten pointers

Unlike subscripts for vector and string, the index of the built-in sub-
script operator is not an unsigned type.

*/

int	main()
{
	/*unsigned scores[11] = {}; // 11 buckets, all value initialized to 0
	int	a[] = {1, 2, 3};

	for (int i : scores)
	{
		cout << i << endl;
	}

	int	*s = std::begin(a);
	int	*e = std::end(a) - 1;
	cout << *s << " " << *e << endl;


	int	ia[] = {5, 6, 8, 2};
	int *p = &ia[2]; // ppoints to the element indexed by 2
	int j = p[1]; // p[1]is equivalent to *(p + 1),
	// p[1]isthesameelement as ia[3]
	int k = p[-2]; // p[-2]isthesameelement as ia[0]*/

	const char ca[] = {'h', 'e', 'l', 'l'};
	const char *cp = ca;
	while (*cp) {
		cout << *cp << endl;
		++cp;
	}
	return (0);
}