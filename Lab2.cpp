#include <iostream>
#include <locale.h>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "Russian");
	int i = 0;
	int n = 10;
	double b[10]{ 2, 4, 8, 16, 32, 64, 14, 16, 18, 20 };
	int max_d = 1, max_q = 1;
	int d = b[1] - b[0];
	double q = b[1] / b[0];
	int count_d = 1, count_q = 1;

	while (i < n)
	{
		i++;
		if ((b[i] - b[i - 1]) == d) {
			count_d++;
			if (count_d > max_d)
				max_d = count_d;
		}
		else
			count_d = 0;

		if ((b[i] / b[i - 1]) == q) {
			count_q++;
			if (count_q > max_q)
				max_q = count_q;
		}
		else
			count_q = 0;
	}
	if (max_q > max_d) { cout << "Геометрическая последовательность: " << max_q << endl; }
	else if (max_d > max_q) { cout << "Алгебраическая последовательность: " << max_d << endl; }
	else { cout << "Алг. и геом. последовательности одной длины: " << max_q << endl; }
}