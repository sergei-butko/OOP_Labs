#include <iostream>
#include <string>
#include "../StaticLib(Lab2)/pch.h"
using namespace std;
using namespace Space;

int main()
{
    setlocale(LC_ALL, "Russian");

    MyString String;        //Создание об'екта класса MyString
    ChangeString Change;      //Создание об'екта класса ChangeString

    cout << "Введите первую строку текста: ";
    String.SetText();        //Получение первой строки
    string Part1 = String.GetText();

    cout << "Введите вторую строку текста: ";
    String.SetText();        //Получение второй строки
    string Part2 = String.GetText();

    string Text = Change.AddLine(Part1, Part2);
    cout << "\n>> Ваш текст: " << Text << "\n\n";

    cout << "Введите строку для добавления к тексту: ";
    String.SetText();        //Получение дополнительной строки
    string NewPart = String.GetText();

    string NewText = Change.AddLine(Text, NewPart);
    cout << "\n>> Ваш новый текст: " << NewText << "\n\n";

    int first, last;
    cout << "Выберите часть теста для удаления:\n";
    cout << "Номер буквы с которой начать удаление: "; cin >> first;
    cout << "Номер буквы до которой удалить: "; cin >> last;
    string TextAfterDeleting = Change.DeletePart(NewText, first, last);
    cout << "\n>> Ваш текст после удаления части: " << TextAfterDeleting << "\n\n";

    string TextAfterCleaning = Change.DeleteAll(NewText);
    cout << ">> Ваш текст после очистки: " << TextAfterCleaning << "\n\n";

    string SmallestString = Change.FindSmallest(Part1, Part2, NewPart);
    cout << ">> Самая короткая строка: " << SmallestString << "\n\n";

    float PercentOfConsonant = Change.FindConsonant(NewText);
    cout << ">> Процент согласных в тексте: " << PercentOfConsonant << "%\n\n";

    string TextWithoutSpace = Change.DeleteSpace(NewText);
    cout << ">> Ваш текст без пробелов в начале и в конце: " << TextWithoutSpace << "\n\n";

    string TextWithoutExtraSpaces = Change.DeleteExtraSpaces(TextWithoutSpace);
    cout << ">> Ваш текст без пробелов между словами: " << TextWithoutExtraSpaces << "\n\n";

    system("pause");
    return 0;
}