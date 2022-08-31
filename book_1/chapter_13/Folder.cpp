#include "Folder.hpp"
#include "Message.hpp"

Folder::Folder(const std::string &fld): folder(fld) {}

Folder::Folder(const Folder &fld): folder(fld.folder), messages(fld.messages)
{
	for (Message *item : fld.messages)
		item->save(this);
}

Folder::~Folder()
{
	for (Message *item : messages)
		item->remove(this);
}

Folder	&Folder::operator=(const Folder &fld)
{
	if (this != &fld)
	{
		this->folder = fld.folder;
		for (Message *item : messages)
			item->remove(this);
		this->messages = fld.messages;
		for (Message *item : messages)
			item->save(this);
	}
	return (*this);
}

void	Folder::addMsg(Message *msg)
{
	messages.insert(msg);
}

void	Folder::remMsg(Message *msg)
{
	messages.erase(msg);
}

void	Folder::print()
{
	std::cout << "Folder: " << folder << std::endl;
	for (Message *item : messages)
		std::cout << "\t\t--> " << item->message << std::endl;
}
