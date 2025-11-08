#include <iostream>
using namespace std;

float pi = 3.14;
int t = 0;
int r = 0;
float hasil1 = 0;
int pilih;
char ulang;
int alas = 0;
int tinggi = 0;
int a,b,c = 0;
int lebar = 0;
int panjang = 0;
void menu () {
	cout << "Selamat datang di menu arvin" << endl;
	cout << "Volume tabung" << endl;
	cout << "Volume kerucut" << endl;
	cout << "Volume dan luas segitiga" << endl;
	cout << "Volume dan luas persegi panjang" << endl;
}
void pilihan () {
do {
		cout << "pilih pin ";
		cin >> pilih;
		switch (pilih) {
				case 1:
				cout << "Masukan nilai r: ";
				cin >> r;
				cout << "Masukan nilai t: ";
				cin >> t;
				hasil1 = pi * r * r * t;
				cout << hasil1;
				break;
				case 2:
				cout << "Masukan nilai r: ";
				cin >> r;
				cout << "Masukan nilai t: ";
				cin >> t;
				hasil1 = 1.0/3.0 * pi * r * r * t;
				cout << hasil1;
				break;
				case 3:
				cout << "masukan alas dan tinggi" << endl;
				cout << "Masukan alas: ";
				cin >> alas;
				cout << "Masukan : ";
				cin >> tinggi;
				cout << "masukan sisi A " << endl;
				cin >> a;
				cout << "masukan sisi B " << endl;
				cin >> b;
				cout << "masukan sisi C " << endl;
				cin >> c;
				cout << "keliling segitiga " << a + b + c << endl;
				cout << "Luas segitiga " << 0.5 * (alas * tinggi);
				break;
				case 4:
                cout << "Masukkan panjang: ";
                cin >> panjang;
                cout << "Masukkan lebar: ";
                cin >> lebar;
                cout << "Luas Persegi Panjang = " << (panjang * lebar) << endl;
                cout << "Keliling Persegi Panjang = " << (2 * (panjang + lebar)) << endl;
                break;
				
}
	cout << endl;
	cout << "ulang: ";
	cin >> ulang;
}	while (ulang != 'n');		
}
int main() {
	menu();
	pilihan();
	return 0;
}
