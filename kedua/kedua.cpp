#include <iostream>
using namespace std;

class BangunDatar {
	//akses modifier
private:
	float panjang, lebar;
public:
	float luas;

	void input() { //methode input persegi panjang
		cout << "Masukan Panjangnnya = ";
		cin >> panjang;
		cout << "Masukan Lebarnya = ";
		cin >> lebar;

	}

	float hitungluas() {
		return panjang * lebar;
	}
};