#include "pch.h"
#include "framework.h"

#include <iostream>
#include <cmath>
using namespace std;

namespace Space
{
    MyException::MyException(double a, double c, double d)
    {
        this->a = a;
        this->c = c;
        this->d = d;
    }
    double MyException::Task(double a, double c, double d)
    {
        if (pow(a, 2) - 1 == 0)
        {
            throw exception("Denominator is Zero!");
        }
        else if (d / 4 <= 0)
        {
            throw exception("Sub-logarithmic expression is smaller than Zero!");
        }
        else
        {
            return (2 * c - log10(d / 4)) / (pow(a, 2) - 1);
        }
    }
}
