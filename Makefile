FILES = \
	book_1/chapter_13/Folder.cpp \
	book_1/chapter_13/Message.cpp \
	book_1/chapter_13/FMmain.cpp

FILES2 = \
	book_1/chapter_13/496.cpp

all:
	g++ -g $(FILES) -o ./a.out -std=c++11