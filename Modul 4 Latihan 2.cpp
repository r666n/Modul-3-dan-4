#include <iostream>
using namespace std;

int main() {
	char karakter;

	cout << "Menentukan Karakter Vokal/Konsonan" << endl;

	cout << "\nMasukkan karakter : ";
	cin >> karakter;

	if (karakter == 'a' || karakter == 'i' || karakter == 'u' || karakter == 'e' || karakter == 'o') {
		cout << "Karakter tersebut adalah karakter vokal";
	} else {
		cout << "Karakter tersebut adalah karakter konsonan";
	}
	return 0;
}