#include <iostream>
#include <locale.h>
using namespace std;

float a[10]{ 2, 4, 7, 14, 28, 56, 14, 16, 18, 20 }, n, s, d, q, i; // введите мне массив
int ar_temp = 1, ar_max, geo_temp = 1, geo_max;
int temp_d;
float temp_q;
int checkman() {
    cout << "d = " << d << endl;
    cout << "q = " << q << endl;
    cout << "i = " << i << endl;

    cout << "ar_temp = " << ar_temp << endl;
    cout << "ar_max = " << ar_max << endl;
    cout << "geo_temp = " << geo_temp << endl;
    cout << "geo_max = " << geo_max << endl;


    return 0;
}

int main() {
    setlocale(LC_CTYPE, "Russian");
    cout << "1 метка" << endl;
    checkman();
    n = 10; //внедрить n.size()
    cout << "2 метка" << endl;
    checkman();
    d = a[1] - a[0];
    cout << "3 метка" << endl;
    checkman();
    q = a[1] / a[0]; // НА НУЛЬ ДЕЛИТЬ НЕЛЬЗЯ!!!!
    cout << "4 метка" << endl;
    checkman();
    for (int i = 0; i < n; i++) {
        cout << "5 метка" << endl;
        checkman();
        // в арифм прогрессии минимум 3 члена
        if (d == (a[i + 1] - a[i])) {
            cout << "6 метка" << endl;
            checkman();
            ++ar_temp;
            cout << "6.5 метка" << endl;
            checkman();
            if (ar_temp > ar_max) {
                ar_max = ar_temp;
                cout << "7 метка" << endl;
                checkman();
            }
        }
        else {
            ar_temp = 2;
            cout << "8 метка" << endl;
            checkman();
            d = a[i + 1] - a[i];
            cout << "9 метка" << endl;
            checkman();
        } // он же из циклов не выходит, пока не пройдет n раз
        // в геом прогрессии минимум 3 члена
        if (q == (a[i + 1] / a[i])) {
            cout << "10 метка" << endl;
            checkman();
            geo_temp++;
            cout << "11 метка" << endl;
            checkman();
            if (geo_temp > geo_max) {
                cout << "12 метка" << endl;
                checkman();
                geo_max = geo_temp;
                cout << "13 метка" << endl;
                checkman();
            }
            else {
                geo_temp = 0;
                cout << "14 метка" << endl;
                checkman();
                q = a[i + 1] / a[i];
                cout << "15 метка" << endl;
                checkman();
            }
        }
    }
    if (ar_max <= geo_max) {
        cout << "16 метка" << endl;
        checkman();
        cout << ar_max << " - арифметическая прогрессия" << endl;
        cout << "17 метка" << endl;
        checkman();
    }
    else {
        cout << geo_max << " - Геометрическая прогрессия" << endl; cout << "18 метка" << endl;
        checkman();
    }
}
