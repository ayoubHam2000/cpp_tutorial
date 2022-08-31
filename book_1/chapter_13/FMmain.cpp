#include "Folder.hpp"
#include "Message.hpp"
#include <vector>

int	main()
{
	Folder	f1("folder1");
	Folder	f2("folder2");
	Folder	f3("folder3");
	Folder	f4("folder4");
	Message	m1("message1");
	Message	m2("message2");
	Message	m3("message2");
	Message	m4("message4");


	m1.save(&f1);
	m2.save(&f1);

	std::vector<Message> vect = {Message("Hi")}; //copy constructor
	

	m1.print();
	f1.print();

	return (0);
}
