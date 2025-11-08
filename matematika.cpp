#include <iostream>
#include <cmath> 
using namespace std;

int main() {
	string nama;
	int umur;
	string member;
	int saldo;
	int cash;
	int opsi;
	int barang1, barang2, barang3, barang4, totalbarang;
	char opsi1;
	
	cout << "Masukan nama : ";
	cin >> nama;
	cout << "Masukan umur : ";
	cin >> umur;
	cout << "Masukan member : ";
	cin >> member;
	cout << "Masukan saldo : ";
	cin >> saldo;
	cout << "Masukan cash : ";
	cin >> cash;
	
	do {
		cout << "Sikat Gigi dengan Harga 10000" << endl;
		cout << "Pasta Gigi dengan Harga 12000" << endl;
		cout << "Sabun Mandi dengan Harga 20000" << endl;
		cout << "Shampoo Motor dengan Harga 25000" << endl;
		cout << "Menu Cek uang (1)" << endl;
		cout << "Beli barang (2)" << endl;
		cout << "Menu keluar (3)" << endl;
		cin >> opsi;
		
		switch (opsi) {
			case 1:
				cout << "Jumlah saldo anda " << saldo << endl;
				cout << "Jumlah cash anda " << cash << endl;
				break;
				
			case 2:
				cout << "Mau beli apa cuks" << endl;
				cout << "Sikat Gigi dengan Harga 10000 (mau beli berapa) ";
				cin >> barang1;
				cout << "Pasta Gigi dengan Harga 12000 (mau beli berapa) ";
				cin >> barang2;
				cout << "Sabun Mandi dengan Harga 20000 (mau beli berapa) ";
				cin >> barang3;
				cout << "Shampoo Motor dengan Harga 25000 (mau beli berapa) ";
				cin >> barang4;
				
				barang1 = barang1 * 10000;
				barang2 = barang2 * 12000;
				barang3 = barang3 * 20000;
				barang4 = barang4 * 25000;
				totalbarang = barang1 + barang2 + barang3 + barang4;
				cout << "Total harga adalah " << totalbarang << endl;
				
				// diskon member
				if (member == "immortal") {
					cout << "Karena member kamu " << member << " harga diskon 15%" << endl;
					cout << "Sebelum diskon " << totalbarang << endl;
					totalbarang = totalbarang * 0.85;
					cout << "Setelah diskon " << totalbarang << endl;
				}
				else if (member == "glory") {
					cout << "Karena member kamu " << member << " harga diskon 10%" << endl;
					cout << "Sebelum diskon " << totalbarang << endl;
					totalbarang = totalbarang * 0.90;
					cout << "Setelah diskon " << totalbarang << endl;
				}
				else if (member == "honor") {
					cout << "Karena member kamu " << member << " harga diskon 5%" << endl;
					cout << "Sebelum diskon " << totalbarang << endl;
					totalbarang = totalbarang * 0.95;
					cout << "Setelah diskon " << totalbarang << endl;
				}

	
				totalbarang = totalbarang - saldo;

				if (totalbarang <= 0) {
					saldo = saldo + totalbarang; 
					cout << "Terima kasih sudah belanja!" << endl;
					cout << "Sisa saldo anda: " << saldo << endl;
				}
				else {
					saldo = 0; 
					totalbarang = totalbarang - cash;

					if (totalbarang <= 0) {
						cout << "Terima kasih sudah belanja!" << endl;
						cout << "Sisa saldo anda: 0" << endl;
						cash = cash + totalbarang; 
						cout << "Sisa cash anda: " << cash << endl;
					}
					else {
						cout << "Duit kurang cuks anjay!" << endl;
					}
				}
				break;
				
			case 3:
				return 0;
		}
		
		cout << endl;
		cout << "Balik ke menu? (y/n) = ";
		cin >> opsi1;
		
	} while (opsi1 != 'n');		
}
