#include "pch.h"
#include "framework.h"

#include <iostream>
#include <string>
using namespace std;

namespace Space
{
    void MyString::SetText()    //Функция создания текста
    {
        getline(cin, Text);
    }

    string MyString::GetText()    //Функция получения текста
    {
        return Text;
    }

    string ChangeString::AddLine(string a, string b)        //Функция добавления строки до текста
    {
        return a + " " + b;
    }

    string ChangeString::DeletePart(string text, int first, int last)    //Функция удаления части текста
    {
        text.erase(first, last - first);
        return text;
    }

    string ChangeString::DeleteAll(string text)            //Функция удаления всей строки
    {
        text.clear();
        return text;
    }

    string ChangeString::FindSmallest(string text1, string text2, string text3)    //Функция нахождения самой короткой строки
    {
        string temp = text1;
        if (text2.length() < temp.length()) {
            temp = text2;
        }
        if (text3.length() < temp.length()) {
            temp = text3;
        }
        return temp;
    }

    float ChangeString::FindConsonant(string text)          //Функция нахождения процента согласных в тексте
    {
        int Size = text.length();
        int ConsonantsAmount = 0;
        char a[] = { 'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'z' };
        for (int i = 0; i < Size; i++)
        {
            for (int j = 0; j < 20; j++)
            {
                if (text[i] == a[j])
                    ConsonantsAmount++;
            }
        }
        for (int i = 0; i < text.length(); i++) {
            if (text[i] == ' ' || text[i] == '.' || text[i] == ',' || text[i] == '!') {
                Size--;
            }
        }
        float result = (ConsonantsAmount * 100) / Size;
        return result;
    }

    string ChangeString::DeleteSpace(string text)          //Функция удаления пробелов в начале и конце текста
    {
        int begin = 0;
        int i = 0;
        while (text[i] == ' ') {
            begin++;
            i++;
        }

        int end = 0;
        i = text.length() - 1;
        while (text[i] == ' ') {
            end++;
            i--;
        }

        string str = text.substr(begin, text.length() - begin - end);
        return str;
    }

    string ChangeString::DeleteExtraSpaces(string text)        //Функция удаления лишних пробелов между словами
    {
        for (int i = 0; i < text.length() - 1; i++) {
            if (text[i] == ' ' && text[i + 1] == ' ') {
                text.erase(i, 1);
                i--;
            }
        }
        return text;
    }
}