#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x, y;
public:
	bidangDatar() {
		x = 0;
		y = 0;
	}
	virtual void input() {}
	virtual float Luas(int a) { return 0; }
	virtual float Keliling(int a) { return 0; }
	virtual void cekUkuran() { return; }
	void setX(int a) {
		this->x = a;
	}
	int getY() {
		return x;
	}
	
};
class Lingkaran :public bidangDatar {
public:

	void input() {
		cout << "Lingkaran dibuat" << endl;
		cout << "Masukan jejari" << endl;
		int r;
		cin >> r;
		setX(r);
	}
	float Luas(int r) {
		return 3.14 * r * r;
	}
	float Keliling(int r) {
		return 2 * 3.14 * r;
	}
	void cekUkuran(int r) {

		if (r >= 40) {
			cout << "Ukuran lingkaran adalah Besar";
		}
		else if (r <= 20) {
			cout << "Ukuran Lingkaran adalah sedang";
		}
		else if (r <= 10) {
			cout << "Ukuran Lingkaran adalah kecil";
		}
	}
};
class Persegipanjang :public bidangDatar {
public:

	void input(int s) {
		cout << "Persegipanjang dibuat" << endl;
		cout << "Masukan panjang" << endl;
		int s;
		cin >> s;
		setX(s);
	}
	float Luas(int s) {
		return s * s;
	}
	float Keliling(int s) {
		return 4 * s;
	}
	void cekUkuran(int s) {
		if (s >= 40) {
			cout << "Ukuran PersegiPanjang adalah Besar";
		}
		else if (s <= 20) {
			cout << "Ukuran PersegiPanjang adalah sedang";
		}
		else if (s <= 10) {
			cout << "Ukuran PersegiPanjang adalah kecil";
		}
	}
};
	int main() {
		bidangDatar* o;


		o = new Lingkaran();
		o->input();
		int r = o->getX();
		cout << "luas keliling = " << o->Luas(r) << endl;
		cout << "keliling lingkaran = " << o->Keliling(r) << endl;

		cout << endl;


		o = new Persegipanjang();
		o->input();
		int s = o->getX();
		cout << "luas bujursangkar = " << o->Luas(s) << endl;
		cout << "keliling bujursangkar= " << o->Keliling(s) << endl;

		delete o;

		return 0;
	}
