#include <iostream>
#include <locale.h>
using namespace std;

int P[3] = { 0, 0, 0 };

int t1() {
	if (P[0] > 0) {
		P[2] += 1;
		return 1;
	}
	return 0;
}

int t2() {
	if (P[0] > 0 && P[2] > 0) {
		P[0] -= 1;
		P[1] += 1;
		return 1;
	}
	return 0;
}

int t3() {
	if (P[1] > 0 && P[2] > 0) {
		P[2] -= 1;
		return 1;
	}
	return 0;
}

int t4() {
	if (P[1] > 0) {
		P[1] -= 1;
		P[0] += 1;
		return 1;
	}
	return 0;
}

void main() {
	setlocale(LC_CTYPE, "Russian");
	char c; int d, f = 0;
	cout << "Введите маркировку: ";
	cin >> P[0] >> P[1] >> P[2];
	cout << "Допустимые переходы:";
	if (P[0] > 0) { cout << " t1"; f = 1; }
	if (P[0] > 0 && P[2] > 0) { cout << " t2"; f = 1; }
	if (P[1] > 0 && P[2] > 0) { cout << " t3"; f = 1; }
	if (P[1] > 0) { cout << " t4"; f = 1; }
	while (f == 1) {
		cout << "\n Введите переход: ";
		cin >> c >> d;
		switch (d) {
		case 1: {if (t1()) f = 0; else cout << "Impossible."; break; }
		case 2: {if (t2()) f = 0; else cout << "Impossible."; break; }
		case 3: {if (t3()) f = 0; else cout << "Impossible."; break; }
		case 4: {if (t4()) f = 0; else cout << "Impossible."; break; }
		}
	}
	cout << "\n Новая маркировка: " << P[0] << ',' << P[1] << ',' << P[2];
}
