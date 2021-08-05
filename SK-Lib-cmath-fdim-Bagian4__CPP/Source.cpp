#include <iostream>
#include <cmath>
#include <conio.h>

/*
    Source by Programiz
    Modified For Learn by RK
    I.D.E : VS2019
*/

using namespace std;

int main() {
    double x = 22.31, y = 13.17, hasil;
    hasil = fdim(x, y);
    cout << "fdim(x, y) = " << hasil << endl;

    long double xLD = -22.31, hasilLD;
    y = 13.14;
    hasilLD = fdim(xLD, y);
    cout << "fdim(xLD, y) = " << hasilLD << endl;

    _getch();
    return 0;
}