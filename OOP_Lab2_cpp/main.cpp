#include <iostream>
#include <string>
#include "../StaticLib(Lab2)/pch.h"
using namespace std;
using namespace Space;

int main()
{
    setlocale(LC_ALL, "Russian");

    MyString String;        //�������� ��'���� ������ MyString
    ChangeString Change;      //�������� ��'���� ������ ChangeString

    cout << "������� ������ ������ ������: ";
    String.SetText();        //��������� ������ ������
    string Part1 = String.GetText();

    cout << "������� ������ ������ ������: ";
    String.SetText();        //��������� ������ ������
    string Part2 = String.GetText();

    string Text = Change.AddLine(Part1, Part2);
    cout << "\n>> ��� �����: " << Text << "\n\n";

    cout << "������� ������ ��� ���������� � ������: ";
    String.SetText();        //��������� �������������� ������
    string NewPart = String.GetText();

    string NewText = Change.AddLine(Text, NewPart);
    cout << "\n>> ��� ����� �����: " << NewText << "\n\n";

    int first, last;
    cout << "�������� ����� ����� ��� ��������:\n";
    cout << "����� ����� � ������� ������ ��������: "; cin >> first;
    cout << "����� ����� �� ������� �������: "; cin >> last;
    string TextAfterDeleting = Change.DeletePart(NewText, first, last);
    cout << "\n>> ��� ����� ����� �������� �����: " << TextAfterDeleting << "\n\n";

    string TextAfterCleaning = Change.DeleteAll(NewText);
    cout << ">> ��� ����� ����� �������: " << TextAfterCleaning << "\n\n";

    string SmallestString = Change.FindSmallest(Part1, Part2, NewPart);
    cout << ">> ����� �������� ������: " << SmallestString << "\n\n";

    float PercentOfConsonant = Change.FindConsonant(NewText);
    cout << ">> ������� ��������� � ������: " << PercentOfConsonant << "%\n\n";

    string TextWithoutSpace = Change.DeleteSpace(NewText);
    cout << ">> ��� ����� ��� �������� � ������ � � �����: " << TextWithoutSpace << "\n\n";

    string TextWithoutExtraSpaces = Change.DeleteExtraSpaces(TextWithoutSpace);
    cout << ">> ��� ����� ��� �������� ����� �������: " << TextWithoutExtraSpaces << "\n\n";

    system("pause");
    return 0;
}