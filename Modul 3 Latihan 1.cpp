#include <iostream>
using namespace std;

int main() {
	double harga, diskon, jumlah_diskon, harga_setelah_diskon;

	cout << "Masukkan harga : ";
	cin >> harga;

	cout << "Masukkan diskon : ";
	cin >> diskon;

	jumlah_diskon = harga * (diskon / 100);
	harga_setelah_diskon = harga - jumlah_diskon;

	cout << "Jumlah diskon : " << jumlah_diskon << endl;
	cout << "Harga setelah diskon : " << harga_setelah_diskon << endl;
	return 0;
}