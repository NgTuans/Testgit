#include "thuvien.h"

Thuvien::Thuvien() {
}

void Thuvien::add_book() {
	string name_book, name_author, release_date;
	int so_trang = 0;
	count++;
	string stt = "TV00" + to_string(count);
	if (number_book > 9) {
		stt = "TV0" + to_string(count);
	}
	if (number_book >= 100) {
		cout << "Can not add more book! ";
		return;
	}

	cout << "Ten sach: " << endl;
	getline(cin >> ws, name_book);
	cout << "Author: " << endl;
	getline(cin >> ws, name_author);
	cout << "So trang sach: " << endl;
	cin >> so_trang;
	cout << "Ngay xuat ban: " << endl;
	getline(cin >> ws, release_date);
	cout << endl;

	Book book = Book(stt, name_book, name_author, so_trang, release_date);
	list_book[number_book] = book;
	number_book++;
}

void Thuvien::show_list() {
	if (number_book == 0) {
		cout << "Empty!";
	}
	else {
		for (int i = 0; i < number_book; i++) {
			list_book[i].show_inf();
		}
	}
}

void Thuvien::search() {
	int option;
	string a;
	string b;
	string c;
	cout << "1. Tim sach theo ten. \n";
	cout << "2. Tim sach theo stt. \n";
	cout << "3. Tim sach theo ten tac gia. \n";
	cin >> option;
	switch (option) {
	case 1:
		cout << "nhap ten sach: \n";
		getline(cin >> ws, a);
		for (int i = 0; i < number_book; i++) {
			if (a == list_book[i].name) {
				list_book[i].show_inf();
			}
		}
		break;
	case 2:
		cout << "nhap stt: \n";
		cin >> b;
		for (int i = 0; i < number_book; i++) {
			if (b == list_book[i].STT) {
				list_book[i].show_inf();
			}
		}
		break;
	case 3:
		cout << "nhap ten tac gia: \n";
		getline(cin >> ws, c);
		for (int i = 0; i < number_book; i++) {
			if (c == list_book[i].author) {
				list_book[i].show_inf();
			}
		}
		break;
	default:
		break;
	}
}

void Thuvien::delete_book() {
	int del;
	cout << "nhap ID muon xoa: \n";
	cin >> del;
	if (del >= number_book) {
		return;
	}
	for (int i = del-1; i < number_book - 1; i++) {
		list_book[i] = list_book[i + 1];
	}
	cout << "da xoa.\n";
	number_book -= 1;
}

void swap(string& a, string& b) {
	string c = a;
	a = b;
	b = c;
}

void Thuvien::sapxep() {
	cout << "1. Sap xep sach theo ten tu A-Z.\n";
	cout << "2. Sap xep sach theo ngay xuat ban.\n";
	int option;
	cout << "Nhap lua chon: \t";
	cin >> option;
	switch (option) {
	case 1:
		for (int i = 0; i < number_book - 1; i++) {
			for (int j = i + 1; j < number_book; j++) {
				if (list_book[i].name.compare(list_book[j].name) > 0) {
					swap(list_book[i], list_book[j]);
				}
			}
		}	cout << "Da sap xep. \n";
		break;

	case 2:
		for (int i = 0; i < number_book - 1; i++) {
			for (int j = i + 1; j < number_book; j++) {
				if (list_book[i].release_date > list_book[j].release_date) {
					swap(list_book[i], list_book[j]);
				}
			}
		}
		cout << "Da sap xep. \n";
		break;
	default:
		break;
	}
}


