#include <iostream>
#include "solution_header.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "Введите два числа:\n";
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;

	cout << "\nПобитовое сложение " << a << " и " << b << " = " << dodav(a, b) << "\n\n";

	bool flag = sravnen(a, b);
	if (flag == 1) {
		cout << a << " меньше " << b << endl;
	}
	else {
		cout << a << " не меньше " << b << endl;
	}

	cout << endl;
	system("pause");
	return 0;
}