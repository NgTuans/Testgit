#pragma once
#include <iostream>
#include <string>
//#include <cstring> 
#include "book.h"

using namespace std;

//#ifndef THUVIEN.H
//#define THUVIEN.H
class Thuvien {
public:
	Thuvien();
	Book list_book[100];
	int number_book = 0;
	int count = 0;
	void add_book();
	void show_list();
	void sapxep();
	void search();
	void delete_book();

};

//#endif 
