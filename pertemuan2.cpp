#include<iostream>
#include<conio.h>
using namespace std;

int main() {
	
	// membuat array
	string drinks[] = {"Soda", "Susu", "Kopi", "Jus", "Miras"};

	// menampilkan isi array (vertikal)
	cout << "'Menampilkan seluruh isi array (vertikal)' \n";
	for (int i = 0; i < 5; i++) {
		cout << drinks[i] << endl;
	}
	cout << "\n";
	
	// menampilkan isi array (horizontal)
	cout << "'Menampilkan seluruh isi array (horizontal)' \n";
	for (int i = 0; i < 5; i++) {
		if(i > 0) {
			cout << ",";
		}
		cout << drinks[i];
	}
	
	cout << "\n\n";
	
	// mengubah data array/
	cout << "'Mengubah isi array' \n";
	drinks[2] = "Teh";
	for (int i = 0; i < 5; i++) {
		cout << drinks[i] << " ";
	}
	
	cout << "\n\n";
	
	// menghapus data array
	cout << "'Menghapus data array menggunakan cin' \n";
	int del2;
	cout << "Pilih indeks data yang ingin dihapus: ";
	cin >> del2;
	for (int i = del2-1; i < 5-1; i++) {
		drinks[i] = drinks[i+1];
	}
	for (int i = 0; i < 4; i++) {
		cout  << drinks[i] << " ";
	}
	
	cout << "\n\n";
	
	// menyisipkan data array
	cout << "'Menyisipkan data array'";
	int location, i, length;
	char insert[10];
	
	length = sizeof(drinks) / sizeof(*drinks) - 1;
	
	cout << "\nSisipkan data yang akan dimasukkan: \n";
	cin >> insert;
	
	cout << "\nPilih lokasi untuk meletakkan data: \n";
	cin >> location;
	
	for (i = length-1; i >= location; i--) {
		drinks[i+1] = drinks[i];
	}
	
	drinks[location] = insert;
	
	cout << "\nHasil: \n";
	
	for (i = 0; i < length+1; i++) {
		cout << drinks[i] << " ";
	}
	
	
	
	
	getch();
	return 0;
}
