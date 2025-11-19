#include <iostream>
using namespace std;

int main() {
	double nilai;
	string k1, k2;

	k1 = "Naik Kelas";
	k2 = "Tinggal Kelas";

	cout << "__--==Program Menentukan Nilai Ujian==--__\n";
	cout << "Masukkan Nilai : ";
	cin >> nilai;

	cout << "Hasil : " << endl;
	cout << "Nilai      : " << nilai << endl;

	if (nilai > 76) {
		cout << "Nilai mutu : A\n" << "Keterangan : " << k1 << endl;
	}
	else if (nilai > 70 && nilai <= 76) {
		cout << "Nilai mutu : B\n" << "Keterangan : " << k1 << endl;
	}
	else if (nilai > 65 && nilai <= 70) {
		cout << "Nilai mutu : C\n" << "Keterangan : " << k1 << endl;
	}
	else if (nilai > 50 && nilai <= 65) {
		cout << "Nilai mutu : D\n" << "Keterangan : " << k2 << endl;
	}
	else if (nilai < 50) {
		cout << "Nilai mutu : E\n" << "Keterangan : " << k2 << endl;
	}
	return 0;
}