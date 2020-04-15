#ifndef PCH_H
#define PCH_H

#include "framework.h"
#include <iostream>
#include <string>
using namespace std;

namespace Space
{
	class Figure
	{
	public:
		Figure(int, int, int, int, int, int);
	protected:
		int x1, y1, x2, y2, x3, y3;
		double SideLength(int, int, int, int);
	};
	class Triangle : public Figure
	{
	public:
		Triangle(int, int, int, int, int, int);
		double Perimeter();
		double Area();
	};
}
#endif
