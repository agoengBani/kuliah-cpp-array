#include<iostream>
using namespace std;

int main() {
	int a;
	
	cout << "Masukkan input: ";
	cin >> a;
	
	string arr[a];
	
 	for (int i = 0; i < a; i++) {
 		cout << "Input data ke " << i+1 << ": ";
		cin >> arr[i];
	}
	
	cout << "Output: ";
	for (int i = 0; i < a; i++) {
		if (i > 0) {
			cout << ", ";
		}
		cout << arr[i] << "";
	}
	
	
	return 0;
}
