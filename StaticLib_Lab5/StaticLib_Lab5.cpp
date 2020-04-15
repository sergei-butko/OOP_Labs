#include "pch.h"
#include "framework.h"

#include <iostream>
using namespace std;

namespace Space 
{
    Figure::Figure(int x1, int y1, int x2, int y2, int x3, int y3)
    {
        this->x1 = x1;
        this->y1 = y1;
        this->x2 = x2;
        this->y2 = y2;
        this->x3 = x3;
        this->y3 = y3;
    }
    double Figure::SideLength(int Ax, int Ay, int Bx, int By)
    {
        return sqrt(pow((Bx - Ax), 2) + pow((By - Ay), 2));
    }
    Triangle::Triangle(int x1, int y1, int x2, int y2, int x3, int y3) :Figure(x1, y1, x2, y2, x3, y3) { }
    double Triangle::Perimeter()
    {
        return (SideLength(x1, y1, x2, y2) + SideLength(x2, y2, x3, y3) + SideLength(x1, y1, x3, y3));
    }
    double Triangle::Area()
    {
        double HalfPerimetr = 0.5 * Perimeter();
        return sqrt(HalfPerimetr * (HalfPerimetr - SideLength(x1, y1, x2, y2)) * (HalfPerimetr - SideLength(x2, y2, x3, y3)) * (HalfPerimetr - SideLength(x1, y1, x3, y3)));
    }
}
