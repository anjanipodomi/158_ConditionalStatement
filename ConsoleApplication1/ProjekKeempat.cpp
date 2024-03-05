#include <iostream>
using namespace std;

int main()
{
	int nilaimatematika, nilaifisika, nRerata;
	string status;
	cout << "Masukan Nilai Matematika : ";
	cin >> nilaimatematika;
	cout << "Masukan Nilai Fisika : ";
	cin >> nilaifisika;
	nRerata = (nilaimatematika + nilaifisika) / 2;
	if (nRerata > 60) {
		status = "Lulus";
	}
	else if (nilaimatematika > 70) {
		status = "Lulus";
	}
	else {
		status = "Tidak lulus";
	}

	cout << "Nilai MTK: " << nilaimatematika << endl;
	cout << "Nilai Fisika : " << nilaifisika << endl;
	cout << "Rata-rata nilai : " << nRerata << endl;
	cout << "Statusnya adalah " << status << endl;

	return 0;
		
}