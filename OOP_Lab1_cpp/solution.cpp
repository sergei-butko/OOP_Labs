#include <iostream>
using namespace std;

int dodav(int a, int b) {
	return a | b;
}

bool sravnen(int a, int b) {
	int bitA = (a >> sizeof(int) * 8 - 1) & 1;
	int bitB = (b >> sizeof(int) * 8 - 1) & 1;
	if (bitA < bitB)
		return false;
	else if (bitA > bitB)
		return true;
	else
		for (int i = sizeof(int) * 8 - 2; i >= 0; i--) {
			bitA = (a >> i) & 1;
			bitB = (b >> i) & 1;
			cout << bitA << " " << bitB << endl;
			if (bitA != bitB && bitA == 0)
				return true;
			else if (bitA != bitB && bitA == 1)
				return false;
		}
}