#include<iostream>
using namespace std;

int main() {
	// CRUD
	
	// Create
	int length, i;
	
	cout << "Masukkan input: ";
	cin >> length;
	
	string arr[length];
	
 	for (i = 0; i < length; i++) {
 		cout << "Input data ke " << i+1 << ": ";
		cin >> arr[i];
	}
	
	
	// Read
	cout << "Output: ";
	for (i = 0; i < length; i++) {
		if (i > 0) {
			cout << ", ";
		}
		cout << arr[i] << "";
	}
	cout << endl << endl;
	
	
	// Update
	cout << "Pilih indeks data yang akan diubah = ";
	cin >> i;
	
	i = i-1;
	
	cout << "Ubah data: ";
	cin >> arr[i];
	
	cout << "Output: ";
	for (i = 0; i < length; i++) {
		if (i > 0) {
			cout << ", ";
		}
		cout << arr[i] << "";
	}
	cout << endl << endl;
	
	
	// Delete
	int del;
	cout << "Pilih indeks data yang akan dihapus = ";
	cin >> del;
	
	for (i = del-1; i < length-1; i++) {
		arr[i] = arr[i+1];
	}
	
	cout << "Output: ";
	for (i = 0; i < length-1; i++) {
		if (i > 0) {
			cout << ", ";
		}
		cout << arr[i] << "";
	}
	cout << endl;
	
	
	
	return 0;
}
