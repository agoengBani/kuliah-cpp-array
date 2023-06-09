#include<iostream>
using namespace std;

int main() {
	cout << "MENU" << endl;
	cout << "1. input data mhs" << endl;
	cout << "2. edit data mhs" << endl;
	cout << "3. hapus data mhs" << endl;
	cout << "4. tampilkan data mhs" << endl;
	
	int menu, i, tampil, input;
	
	
	cout << "Pilih menu: ";
	cin >> menu;
	
	if (menu == 1) {
		cout << "Masukkan panjang input: ";
		cin >> input;
		
		string arr[input];
		
	 	for (i = 0; i < input; i++) {
	 		cout << "Input data ke " << i+1 << ": ";
			cin >> arr[i];
		}	
	}
	
	cout << "Pilih menu: ";
	cin >> menu;
	
	if (menu == 2) {
		cout << "Pilih indeks yang akan diubah: ";
		cin >> i;
		
		i = i-1;
		
//		string arr[input];
		string arr[i];
		
		cout << "Edit data: ";
		cin >> arr[i];
	}
	
	cout << "Pilih menu: ";
	cin >> menu;
	
	if (menu == 3) {
		int del;
		cout << "Pilih indeks data yang akan dihapus = ";
		cin >> del;
		
		string arr[i];
		for (i = del-1; i < input-1; i++ ) {
			arr[i] = arr[i+1];
		}
	}
	
	cout << "Pilih menu: ";
	cin >> menu;
	
	string arr[i];
	if (menu == 4) {
		cout << "Output: ";
		for (i = 0; i < input-1; i++) {
			if (i > 0) {
				cout << ", ";
			}
			cout << arr[i] << "";
		}
		cout << endl;
	}
	
	return 0;
}
