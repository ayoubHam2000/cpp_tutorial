#ifndef MESSAGE_HPP
#define MESSAGE_HPP

#include <iostream>
#include <set>

class Folder;

class	Message
{
public:
	friend class Folder;
private:
	std::string	message;
	std::set<Folder*> folders;
public:
	Message(const Message &msg);
	Message(Message &&msg);
	explicit Message(const std::string &msg = "");
	~Message();

	Message	&operator=(const Message &msg);
	Message	&operator=(Message &&msg);
	void	save(Folder *folder);
	void	remove(Folder *folder);
	void	save(Message &lhs, Message &rhs);
	void	print();
private:
	void	moveFolders(Message *);
};


#endif
