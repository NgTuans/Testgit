#pragma once
#include <iostream>
#include <string>

using namespace std;

//#ifndef BOOK.H
//#define BOOK.H
class Book {
public:
	Book();
	string STT;
	string name;
	string author;
	int so_trang;
	string release_date;
	void show_inf();
	Book(string, string, string, int, string);
};
//# endif
