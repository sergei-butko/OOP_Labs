#ifndef PCH_H
#define PCH_H

#include "framework.h"
#include <iostream>
#include <string>
using namespace std;

namespace Space
{
    class MyString
    {
    private:
        string Text;      //���������� ��� �������� ������
    public:
        void SetText();      //������� �������� ������
        string GetText();    //������� ��������� ������
    };

    class ChangeString
    {
    public:
        string AddLine(string, string);          //������� ���������� ������ �� ������
        string DeletePart(string, int, int);      //������� �������� ����� ������
        string DeleteAll(string);            //������� �������� ���� ������
        string FindSmallest(string, string, string);  //������� ���������� ����� �������� ������
        float FindConsonant(string);          //������� ���������� �������� ��������� � ������
        string DeleteSpace(string);            //������� �������� �������� � ������ � ����� ������
        string DeleteExtraSpaces(string);        //������� �������� ������ �������� ����� �������
    };
}
#endif //PCH_H