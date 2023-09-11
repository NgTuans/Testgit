#include "thuvien.h"
#include <iostream>


int main() {
	Thuvien library = Thuvien();
	while (true) {

		cout << "-------------MENU-------------\n";
		cout << "1. Them sach.\n";
		cout << "2. Tim sach.\n";
		cout << "3. Xoa sach.\n";
		cout << "4. Hien thi danh sach.\n";
		cout << "5. Sap xep.\n";
		cout << "0. Thoat.\n";
		cout << "------------------------------\n";
		int option;
		cout << "Nhap tuy chon: ";
		cin >> option;
		if (option == 0) {
			break;
		}
		switch (option) {
		case 1:
			library.add_book();
			break;
		case 2:
			library.search();
			break;
		case 3:
			library.delete_book();
			break;
		case 4:
			library.show_list();
			break;
		case 5:
			library.sapxep();
			break;
		default:	break;
		}

	}
	return 0;
}
