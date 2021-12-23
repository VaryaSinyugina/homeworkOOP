// лаба1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
 
using namespace std;

int main()
{
    int x, y;
    float arf, geom;

    cout << " x = ";
    cin >> x;
    cout << " y = ";
    cin >> y;

    arf = (x + y) / 2;
    geom = sqrt(x * y);
}


