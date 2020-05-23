#include <iostream>
#include "Class.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

    int size;
    cout << "������� ������ ������������ ������: "; cin >> size;
    MyLinkedList MyList;

    cout << "��������� ������ ������� (���������� � ������)\n";
    int i = 0;
    while (i < size)
    {
        short input;
        cin >> input;
        if (input >= -32768 && input <= 32767)
        {
            MyList.AddFirst(input);
            i++;
        }
        else
            continue;
    }

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "��� ������: [ ";
    for (Node *node = MyList.first; node != NULL; node = node->Next)
        cout << node->data << " ";
    cout << "]\n";

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "������ ����� " << MyList.CountMultipleOfThree() << " ��������� ������� 3\n";

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "�������� ��������� ������� �� ������� ��������\n";
    int sum = 0;
    for (Node* node = MyList.first; node != NULL; node = node->Next)
        sum += node->data;
    double average = sum / size;
    cout << "������� �������� ������ = " << average << endl;
    MyList.RemoveUnderAverage(average);
    cout << "��� ������ ����� ��������: [ ";
    for (Node *node = MyList.first; node != nullptr; node = node->Next)
        cout << node->data << " ";
    cout << "]\n";

	system("pause");
	return 0;
}
