#include <iostream>
#include "Class.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

    int size;
    cout << "Введите размер односвязного списка: "; cin >> size;
    MyLinkedList MyList;

    cout << "Заполните список числами (добавление в начало)\n";
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
    cout << "Ваш список: [ ";
    for (Node *node = MyList.first; node != NULL; node = node->Next)
        cout << node->data << " ";
    cout << "]\n";

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "Список имеет " << MyList.CountMultipleOfThree() << " элементов кратных 3\n";

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "Удаление элементов меньших за среднее значение\n";
    int sum = 0;
    for (Node* node = MyList.first; node != NULL; node = node->Next)
        sum += node->data;
    double average = sum / size;
    cout << "Среднее значение списка = " << average << endl;
    MyList.RemoveUnderAverage(average);
    cout << "Ваш список после удаления: [ ";
    for (Node *node = MyList.first; node != nullptr; node = node->Next)
        cout << node->data << " ";
    cout << "]\n";

	system("pause");
	return 0;
}
