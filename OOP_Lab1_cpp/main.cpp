#include <iostream>
#include "solution_header.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "������� ��� �����:\n";
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;

	cout << "\n��������� �������� " << a << " � " << b << " = " << dodav(a, b) << "\n\n";

	bool flag = sravnen(a, b);
	if (flag == 1) {
		cout << a << " ������ " << b << endl;
	}
	else {
		cout << a << " �� ������ " << b << endl;
	}

	cout << endl;
	system("pause");
	return 0;
}