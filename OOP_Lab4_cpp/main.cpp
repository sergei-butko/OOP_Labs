#include <iostream>
#include <string>
#include "../StaticLib_Lab4/pch.h"
using namespace std;
using namespace Space;

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    string str;
    cout << "������� ������ ��������: ";
    getline(cin, str);

    MyClass S1;
    MyClass S2(str);
    MyClass S3(S2);

    S2 = S2 - '#';
    cout << "��������� ��������� ������� '#' � ��'���� S2: " << S2.str << endl;

    S1 = S2 + S3;
    cout << "��������� �������� S2 � S3, ���������� � S1: " << S1.str << endl;

	system("pause");
	return 0;
}