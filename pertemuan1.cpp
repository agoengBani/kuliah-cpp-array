#include <iostream>
using namespace std;

int main() {
	int input;
	
	cout << "masukkan input anda: ";
	cin>>input;
	
	if (input == 0) {
		cout << "Perempuan";
	} else if (input == 1) {
		cout << "Laki-laki";
	} else {
		cout << "Tidak berjenis";
	}
	
	return 0;
}












#include <iostream>
using namespace std;

int main() {
	int hargaBarang, qtyBarang, total;
	
	cout << "Harga barang satuan = ";
	cin >> hargaBarang;
	cout << "Quantity barang = ";
	cin >> qtyBarang;
	
	total = hargaBarang * qtyBarang;
	cout << "Total Belanja = " << total;
	
	return 0;
}










#include <iostream>
using namespace std;

int main() {
	char nama[30], goldar[2];
	
	cout << "Masukkan nama Anda: ";
	cin.getline(nama, 30);
	cout << "Masukkan golongan darah Anda: ";
	cin >> goldar;
	
	cout << "\nNama " << nama << ", Golongan darah Anda adalah " << goldar;
}

















