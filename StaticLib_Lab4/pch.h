#ifndef PCH_H
#define PCH_H

#include "framework.h"
#include <iostream>
#include <string>
using namespace std;

namespace Space
{
    class MyClass
    {
    public:
        string str;
        int size;
        MyClass();
        MyClass(string);
        MyClass(MyClass&);

        int strLength();
    };
    MyClass operator + (MyClass, MyClass);
    MyClass operator - (MyClass, char);
}
#endif