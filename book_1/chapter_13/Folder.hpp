#ifndef FOLDER_HPP
#define FOLDER_HPP

#include <iostream>
#include <set>

class Message;

class	Folder
{
public:
	friend class Message;
private:
	std::string	folder;
	std::set<Message*> messages;
public:
	explicit Folder(const std::string &fld = "");
	Folder(const Folder &fld);
	~Folder();

	Folder	&operator=(const Folder &fld);
	void	addMsg(Message *msg);
	void	remMsg(Message *msg);
	void	print();
};


#endif
