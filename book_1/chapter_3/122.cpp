#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


/*
ctrl + d
* cstring header, it's preffered to us cheader over headers.h of c
* c_str member -> return const char *

* init a vect from array vector(pointer_to_the_first, ..._the_end)
* Multidimensional Array : The nested braces are optional.

* To use a multidimensional array in a range for, the loop control vari-
able for all but the innermost array must be references. to not iterate over a pointer (we can't interate over a pointer)
*/

int	main()
{
	string a("Ayoub");
	char *str = (char *)a.c_str();
	str[0] = 'B';
	cout << a << endl;


	//init vect from array
	int	arr[] = {1, 2, 3, 4};
	vector<int> vec_arr(std::begin(arr), std::end(arr));
	for (int item : vec_arr)
	{
		cout << item << endl;
	}
	cout << "====" << endl;
	vector<int> vec_arr_2(arr, arr + 2);
	for (int item : vec_arr_2)
	{
		cout << item << endl;
	}
	cout << "====" << endl;


	int ia[3][4] = { // three elements; each element is an array of size 4
		{0, 1, 2, 3}, // initializers for the row indexed by 0
		{4, 5, 6, 7}, // initializers for the row indexed by 1
		{8, 9, 10, 11} // initializers for the row indexed by 2
	}; //The nested braces are optional.

	int ia_2[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
	int ia_3[3][4] = {{ 0 }, { 4 }, { 8 }}; // explicitly initialize only element 0 in each row

	for (int item : arr)
		cout << item << endl;
	cout << "====" << endl;

	for (auto &row : ia)
	{
		for (auto &colm : row)
		{
			cout << colm << ", ";
		}
		cout << endl;
	}
	cout << "====" << endl;

	using int_array = int[4]; //typedef int int_array[4];

	for (int_array *p = ia; p != ia + 3; p++)
	{
		for (int *i = *p; i != *p + 4; i++)
		{
			cout << *i << endl;
		}
	}


	return (0);
}