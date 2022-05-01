#include <iostream>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "Russian");
	int first = 10;
	int next;
	int days = 0;

	while (first < 20) {
		first = first * 1.1;
		days++;
	}
	cout << "Прошел 20 км за день спустя " << days << " дней после начала";
}