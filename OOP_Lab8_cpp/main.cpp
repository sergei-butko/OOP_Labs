#include <iostream>
#include <string>
using namespace std;

int FindElement(string str, char ch) {
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ch)
			return i;
		else
			continue;
	}
	return -1;
}

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	string Line;
	cout << "Введите строку: ";
	getline(cin, Line);

	char ch1;
	cout << "Введите символ: "; cin >> ch1;

	int (*Ptr)(string str, char ch);
	Ptr = FindElement;
	int result = Ptr(Line, ch1);
	if (result != -1)
		cout << "Индекс символа '" << ch1 << "' = " << result << endl;
	else
		cout << "Строка не содержит символ '" << ch1 << "'!" << endl;

	system("pause");
	return 0;
}
