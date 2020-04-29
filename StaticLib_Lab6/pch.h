#ifndef PCH_H
#define PCH_H

#include "framework.h"
#include <iostream>
using namespace std;

namespace Space
{
	class MyException
	{
	private:
		double a, c, d;
		double Task(double, double, double);
	public:
		MyException(double, double, double);
	};
}

#endif
