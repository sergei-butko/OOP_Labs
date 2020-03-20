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
        string Text;      //Переменная для хранения текста
    public:
        void SetText();      //Функция создания текста
        string GetText();    //Функция получения текста
    };

    class ChangeString
    {
    public:
        string AddLine(string, string);          //Функция добавления строки до текста
        string DeletePart(string, int, int);      //Функция удаления части текста
        string DeleteAll(string);            //Функция удаления всей строки
        string FindSmallest(string, string, string);  //Функция нахождения самой короткой строки
        float FindConsonant(string);          //Функция нахождения процента согласных в тексте
        string DeleteSpace(string);            //Функция удаления пробелов в начале и конце текста
        string DeleteExtraSpaces(string);        //Функция удаления лишних пробелов между словами
    };
}
#endif //PCH_H