#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double alas, tinggi, sisi_miring;

	cout << "Menghitung Panjang Sisi Miring Segitiga Siku-Siku" << endl;

	cout << "Masukkan alas segitiga siku-siku : ";
	cin >> alas;

	cout << "Masukkan tinggi segitiga siku-siku : ";
	cin >> tinggi;

	sisi_miring = sqrt((alas * alas) + (tinggi * tinggi));

	cout << "Sisi miring segitiga siku-siku : " << sisi_miring << endl;
	return 0;
}