#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


/*

* Statement (null, single, block)
* Conditional Statements: if, switch
* Iterative Statements (while, do while, for, range For)
* Jump Statements (break, continue, return, goto)

=======
	; null statement

* A compound statement, usually referred to as a block, is a (possibly empty) se-
quence of statements and declarations surrounded by a pair of curly braces. A
block is a scope

* Programmers sometimes get into trouble when they write code that contains
	more if than else branches.
	This problem, usually referred to as a dangling else
	In C++ the ambiguity is resolved by
	specifying that each else is matched with the closest preceding unmatched if.

! WRONG: execution does NOT match indentation; the elsegoes with the inner if
if (grade % 10 >= 3)
	if (grade % 10 > 7)
	lettergrade += ’+’; // grades ending in 8or 9get a +
else
	lettergrade += ’-’; // grades ending in 3, 4, 5, 6,or 7get a minus!
? We can make the else part of the outer if by enclosing the inner if in a block

=======
switch
 *That expression (expression after switch) may be an initialized variable declaration 
 	The expression is converted to integral type.
* begins with the
	ﬁrst statement following that label. Execution continues normally from that state-
	ment through the end of the switch or until a break statement.
* case label. case labels must be integral constant expressions
* It is an error for any two case labels to have the same value.
switch (ch)
{
	any occurrence ofa, e, i, o,or uincrements vowelCnt
	case ’a’:
	case ’e’:
	case ’i’:
	case ’o’:
	case ’u’:
	++vowelCnt;
	break;

	.. alternative legal syntax
	.. case ’a’: case ’e’: case ’i’: case ’o’: case ’u’:
}
switch(ch) {
case 3.14: // error: noninteger as case label
case ival: // error: nonconstant as case label

* A label may not stand alone; it must precede a statement or another case label.
If a switch ends with a default case that has no work to do, then the default
label must be followed by a null statement or an empty block.
* The answer is that it is illegal to jump from a place where a variable with an
initializer is out of scope to a place where that variable is in scope (182)
If we need to deﬁne and initialize a variable for a particular case,we can do
so by deﬁning the variable inside a block

===============
Iterative Statements (while, do while, for, range For)
* In a range for,the valueof end() is cached. If we add elements
to (or remove them from) the sequence, the value of end might be invalidated


===============
Jump Statements (break, continue, return, goto)

* continue : In a traditional for loop, execution continues at the expression inside the
for header

* A goto statement provides an unconditional jump from the goto to a another
statement in the same function. 
sytx: 
	goto: label;
	indentifier: (can be with same name of a variable)
* a goto cannot transfer control from a point where
an initialized variable is out of scope to a point where that variable is in scope
* Jumping back
to a point before a variable is deﬁned destroys the variable and constructs it again

*/

int	main()
{
	int	a = 5;
	switch (a)
	{
		case '5':
		default:{}
	}

	int i = 5;

	incI:
	i++;
	if (i < 42)
		goto incI;
	cout << i << endl;
	return (0);
}

