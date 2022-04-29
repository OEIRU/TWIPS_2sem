// Зощита-2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float b, a, i=0, n, j, max;
	cout << "Введите число и его степень" << endl;
	cin >> a;
	b = a;
	max = b;
	cin >> n;
	if (n != 0)
	{
		while (i < abs(n) - 1)
		{
			if (b < (b * a))
			{
				max = b*a;
			}
			b = b * a;
			i++;
		}
	}
	else
	{
		b = 1;
		max = 1;
	}
		cout << "Итог: " << b << "; Максимум: " << max;
}
