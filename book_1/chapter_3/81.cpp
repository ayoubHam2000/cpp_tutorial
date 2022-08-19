#include <iostream>
#include <string>


using std::cout;
using std::cin;
using std::endl;
using std::string;

/*
>>
* .The string input operator reads and discards any leading whitespace (e.g., spaces, newlines, tabs).
	-> It then reads characters until the next whitespace character is encountered. '  	hello world' => 'hello'
* >> return >> (istream)
* << return << (ostream)
* getline return (istream)
! string.size() return string::size_type (unsigned)

* isalnum(c) true if c is a letter or a digit.
* isalpha(c) true if c is a letter.
* iscntrl(c) true if c is a control character.
* isdigit(c) true if c is a digit.
* isgraph(c) true if c is notaspace butisprintable.
* islower(c) true if c is a lowercase letter.
* isprint(c) true if c is a printable character (i.e., a space or a character that has a visible representation).
* ispunct(c) true if c is a punctuation character (i.e., a character that is not a control character, a digit, a letter, or a printable whitespace).
* isspace(c) true if c is whitespace (i.e., a space, tab, vertical tab, return, newline, or formfeed).
* isupper(c) true if c is an uppercase letter.
* isxdigit(c) true if c is a hexadecimal digit.
* tolower(c) If c is an uppercase letter, returns its lowercase equivalent; otherwise returns c unchanged.
* toupper(c) If c is a lowercase letter, returns its uppercase equivalent; otherwise returns c unchanged.

*/
int	main()
{
	string a("Hi");
	string b = "copy initialization";
	string d (10, 'c'); //direct initialization;
	cout << a << d << endl;
	/*cin >> a >> b; //input at once 'a t'
	cout << a << b << endl; //result a=a and b=t
	std::getline(cin, a);
	std::getline(cin, a);
	cout << a << endl;*/
	
	a = string("hi");
	b = string("hit");
	if (a < b)
		cout << a << " < " << b << endl;
	else
		cout << a << " > " << b << endl;
	
	b = string("hi!!");
	for (auto item : b) //range for
	{
		if (std::ispunct(item))
		{
			cout << "'" << item << endl;
		}
	}
	for (auto &item : b)
	{
		item = std::toupper(item);
	}
	cout << b << endl;

	for (decltype(b.size()) index = 0; index != b.size(); ++index)
	{
		b[index] = std::tolower(b[index]);
	}
	cout << b << endl;

	return (0);
}