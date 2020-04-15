#include <iostream>
#include "../StaticLib_Lab5/pch.h"
using namespace std;
using namespace Space;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

    int x1, y1, x2, y2, x3, y3;
    cout << "Введите координаты вершин вашего треугольника.\n";
    cout << "Вершина 1:\n";
    cout << "x1 = "; cin >> x1;
    cout << "y1 = "; cin >> y1;
    cout << "Вершина 2:\n";
    cout << "x2 = "; cin >> x2;
    cout << "y2 = "; cin >> y2;
    cout << "Вершина 3:\n";
    cout << "x3 = "; cin >> x3;
    cout << "y3 = "; cin >> y3;

    Triangle MyTriangle(x1, y1, x2, y2, x3, y3);
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "Периметр вашего треугольника = " << MyTriangle.Perimeter() << endl;
    cout << "Площадь вашего треугольника = " << MyTriangle.Area() << endl;

	system("pause");
	return 0;
}
