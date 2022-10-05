// Lab_02.cpp
// Лазар Владислав
// Лабораторна робота №2.
// Лінійні програми.
// Варіант 11

#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);

    double a;
    double z1;
    double z2;

    cout << "a="; cin >> a;

    z1 = (1 - 2 * sin(a) * sin(a)) / (1 + sin(2 * a));
    z2 = (1 - tan(a)) / (1 + tan(a));

    cout << "z1=" << z1 << endl;
    cout << "z2=" << z2 << endl;

    if (fabs(z1 - z2) < 0.0000001)
    {
        cout << "Вирази рівні" << endl;
    }
    else
    {
        cout << "Вирази нерівні" << endl;
    }

    return 0;
}