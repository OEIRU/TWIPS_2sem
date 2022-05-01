#include <iostream>
#include <locale.h>
using namespace std;

float a[10]{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, n, s, d, q, i; // введите мне массив
int ar_temp = 1, ar_max, geo_temp = 1, geo_max;
int temp_d;
float temp_q;

int main(){
    setlocale(LC_CTYPE, "Russian");
    n = 10; //внедрить n.size()
    d = a[1] - a[0];
    q = a[1] / a[0];
    if (q == 0) {cout << "Стоп система, стоп заводы, подсудимый и конвойный."; return 1;}
    for (int i = 0; i < n; i++)
    {
        if (d == (a[i + 1] - a[i]))
        {
            ++ar_temp;
            if (ar_temp > ar_max)
                ar_max = ar_temp;
        }
        else
        {
            ar_temp = 2;
            d = a[i + 1] - a[i];
        }
        if (q == (a[i + 1] / a[i]))
        {
            geo_temp++;
            if (geo_temp > geo_max)
                geo_max = geo_temp;
            else
            {
                geo_temp = 0;
                q = a[i + 1] / a[i];
            }
        }
    }
    if (ar_max >= geo_max)
        cout << ar_max << " - арифметическая прогрессия" << endl;
    else if (ar_max <= geo_max) 
        cout << geo_max << " - Геометрическая прогрессия" << endl;
    else
    cout << ar_max << " - одинаковое количество членов арифметической и/или геометрической прогрессии";
}

/*
Тест 1
a[10]{2, 4, 8, 16, 32, 64, 14, 16, 18, 20}
6 - Геометрическая прогрессия
Тест 2
a[10]{2, 4, 6, 8, 10, 64, 14, 16, 18, 20}
5 - арифметическая прогрессия
Тест 3
a[10]{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
10 - арифметическая прогрессия
*/