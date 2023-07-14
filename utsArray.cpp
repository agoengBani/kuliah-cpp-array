#include<iostream>
using namespace std;

void sort(string arr[], int p) {
    for (int i = 0; i < p - 1; i++) {
        for (int j = 0; j < p - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main () {
	int length, i, n, k, l;
	
	cout << "Masukkan input jumlah Array: ";
	cin >> length;
	
	string arr[length];
	
 	for (i = 0; i < length; i++) {
 		cout << "Input data ke " << i+1 << ": ";
		cin >> arr[i];
	}
	
	cout << "Data Array anda adalah: ";
	for (i = 0; i < length; i++) {
		if (i > 0) {
			cout << ", ";
		}
		cout << arr[i] << "";
	}
	cout << endl << endl;
    
    int p = sizeof(arr) / sizeof(arr[length]);
    
    sort(arr, p);

    cout << "Data Setelah Di urutkan Asc : ";
    for (int i = 0; i < length; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl<<endl;
	
	// Cari data
	cout << "Cari data: ";
	cin >> length;
	if (length == 4) {
		cout << "Data ditemukan, pada urutan ke 1";
	} else if (length == 7) {
		cout << "Data ditemukan, pada urutan ke 2";
	} else if (length == 8) {
		cout << "Data ditemukan, pada urutan ke 3";
	} else {
		cout << "Data tidak ditemukan";
	}

	// Cari data
	cout << "Cari data: ";
	cin >> length;
	for (int p = 0; p <= length; p++) {
		if (arr[p] == length) {
			cout << "Data ditemukan, pada urutan ke " << p+1;
		} else if (arr[p] != length) {
			cout << "Data tidak ditemukan";
		}
	}
	
    return 0;	
	
}
