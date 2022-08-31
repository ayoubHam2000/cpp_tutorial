#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>

using namespace std;


/*

* iostream, fstream, sstream

iostream	istream, wistream reads from a stream
			ostream, wostream writes to a stream
			iostream, wiostream reads and writes a stream

fstream		ifstream, wifstream reads from a ﬁle
			ofstream, wofstream writes to a ﬁle
			fstream, wfstream reads and writes a ﬁle

sstream		istringstream, wistringstream reads from a string
			ostringstream, wostringstream writes to a string
			stringstream, wstringstream reads and writes a string

The types ifstream and istringstream inherit from istream.

Once an error has occurred, subsequent IO operations on that stream will fail.
We can read from or write to a stream only when it is in a non-error state. Because
a streammight be in an error state, code ordinarily should check whether a stream
is okay before attempting to use it

check the type of the error 
cin.eof()
cin.fail()
cin.bad()
cin.good()
cin.clear()
cin.setstate()
cin.rdstate()

cin.clear(cin.rdstate() & ~cin.failbit & ~cin.badbit);

============

fstream fstrm;
fstream fstrm(s);
fstream fstrm(s, mode);
fstrm.open(s)
fstrm.open(s, mode)
fstrm.close()
fstrm.is_open()


file mode: in, out, app, ate, trunc, binary

===============
sstream.str()
sstream.str(string)


*/

int	main()
{
	std::stringstream	a("p");
	string	r;

	a << "oooo";
	a << "0.24";
	a >> r;
	cout << a.str() << endl;
	cout << r << endl;

	return (0);

}
