#include<iostream>
using namespace std;

int main() {
	
	int length;
	
	cout << "Masukkan input: ";
	cin >> length;
	
	string arr[length];
	
 	for (int i = 0; i < length; i++) {
 		cout << "Input data ke " << i+1 << ": ";
		cin >> arr[i];
	}
	
	cout << "Output: ";
	for (int i = 0; i < length; i++) {
		if (i > 0) {
			cout << ", ";
		}
		cout << arr[i] << "";
	}
	
	
	return 0;
}
