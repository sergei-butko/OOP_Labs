#include "pch.h"
#include "framework.h"

#include <iostream>
#include <string>
using namespace std;

namespace Space
{
	MyClass::MyClass()
	{
		str = "";
	}
	MyClass::MyClass(string str)
	{
		this->str = str;
		size = str.length();
	}
	MyClass::MyClass(MyClass& str)
	{
		this->str = str.str;
		size = str.strLength();
	}

	int MyClass::strLength()
	{
		return size;
	}
	MyClass operator + (MyClass S1, MyClass S2)
	{
		MyClass obj(S1.str + S2.str);
		return obj;
	}
	MyClass operator - (MyClass str, char Ch)
	{
		string result = "";
		for (int i = 0; i < str.size; i++)
		{
			if (str.str[i] != Ch)
			{
				result += str.str[i];
			}
		}
		return result;
	}
}