#include "book.h"

Book::Book() {
}
void Book::show_inf() {
	cout << "STT: " << STT << endl;
	cout << "Ten sach: " << name << endl;
	cout << "Tac gia: " << author << endl;
	cout << "So trang: " << so_trang << endl;
	cout << "Ngay xuat ban: " << release_date << endl;
	cout << endl;
}
Book::Book(string a, string b, string c, int d, string e) {
	STT = a;
	name = b;
	author = c;
	so_trang = d;
	release_date = e;
}
