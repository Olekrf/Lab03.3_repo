// Lab_03_3.cpp
// < Лазарук Олег >
// Лабораторна робота № 3.3 
// розгалуження задане графіком функції
// Варіант 17
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, R, y;
    cout << "x= ";
    cin >> x;
    cout << "R= ";
    cin >> R;

    if (x <= -1 - R)
        y = 1;
    else if (x > -1 - R && x <= -1)
        y = -sqrt(R * R - pow(x + 1, 2));
    else if (x > -1 && x <= 2)
        y = -R;
    else
        y = (R * (x - 4)) / 2;

    cout << "y = " << y << endl;
    cin.get();
    return 0;
}
