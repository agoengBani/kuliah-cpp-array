#include<iostream>
using namespace std;

int main() {
	cout << "MENU" << endl;
	cout << "1. input data mhs" << endl;
	cout << "2. edit data mhs" << endl;
	cout << "3. hapus data mhs" << endl;
	cout << "4. tampilkan data mhs" << endl;
	
	int menu, i, tampil;
	char input[50];
	
	cout << "Pilih menu: ";
	cin >> menu;
	
	if (menu == 1) {
		cout << "Input data mahasiswa: ";
		cin >> input;
		// back to menu
		cout << "Pilih menu: ";
		cin >> menu;
		if (menu == 2) {
			cout << "\nEdit data mahasiswa \n";
			cout << "Pilih indeks data yang ingin di ubah: ";
			cin >> i;
			cin >> input;
			// back to menu
			cout << "Pilih menu: ";
			cin >> menu;
			if (menu == 3) {
				cout << "Hapus data mahasiswa";
				cout << "Pilih indeks data yang ingin dihapus";
				cin >> i;
				// back to menu
				cout << "Pilih menu: ";
				cin >> menu;
				if (menu == 4) {
					cout << "Tampilkan data mahasiswa";
					cin >> tampil;
					// back to menu
					cout << "Pilih menu: ";
					cin >> menu;
				}
			}
		}
	} else {
		cout << "Menu tidak ada";
	}
	
	
	
	
	
	return 0;
}
