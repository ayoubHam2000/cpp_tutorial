#include "Message.hpp"
#include "Folder.hpp"

Message::Message(const std::string &msg): message(msg)
{
	std::cout << "C " << msg << std::endl;
}

Message::Message(const Message &msg): message(msg.message), folders(msg.folders)
{
	std::cout << "Copy Con" << std::endl;
	for (Folder *item : folders)
	{
		item->addMsg(this);
	}
}

Message::Message(Message &&msg) :
message(std::move(msg.message)),
folders(std::move(msg.folders))
{
	std::cout << "Move Con" << std::endl;
	moveFolders(&msg);
}

Message::~Message()
{
	for (Folder *item : folders)
	{
		item->remMsg(this);
	}
}

Message	&Message::operator=(const Message &msg)
{
	std::cout << "Copy" << std::endl;
	if (this != &msg)
	{
		for (Folder *item : folders)
			item->remMsg(this);
		for (Folder *item : msg.folders)
			item->addMsg(this);
		message = msg.message;
		folders = msg.folders;
	}
	return (*this);
}

Message	&Message::operator=(Message &&msg)
{
	std::cout << "Move" << std::endl;
	if (this != &msg)
	{
		for (Folder *item : folders)
			item->remMsg(this);
		message = std::move(msg.message);
		folders = std::move(msg.folders);
		moveFolders(&msg);
	}
	return (*this);
}

//!================================

void	Message::save(Folder *folder)
{
	folders.insert(folder);
	folder->addMsg(this);
}

void	Message::remove(Folder *folder)
{
	if (folders.find(folder) != folders.end())
	{
		folders.erase(folder);
		folder->remMsg(this);
	}
}

void	Message::save(Message &lhs, Message &rhs)
{
	using std::swap;

	for (Folder *item : lhs.folders)
		item->remMsg(&lhs);
	for (Folder *item : rhs.folders)
		item->remMsg(&rhs);
	swap(lhs.folders, rhs.folders);
	swap(lhs.message, rhs.message);
	for (Folder *item : lhs.folders)
		item->addMsg(&lhs);
	for (Folder *item : rhs.folders)
		item->addMsg(&rhs);
}

void	Message::print()
{
	std::cout << "Message: " << message << std::endl;
	for (Folder *item : folders)
		std::cout << "\t\t--> " << item->folder << std::endl;
}

void	Message::moveFolders(Message *m)
{
	for (Folder *item : m->folders)
	{
		item->remMsg(m);
		item->addMsg(this);
	}
	m->folders.clear();
}
