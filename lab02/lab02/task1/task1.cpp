#include "pch.h"
#include <iostream>

using namespace std;
float go(float);

int main()
{
	float f1, f2, f3, f4, f5, s;
	cout << "Enter five numbers:" << endl;
	cin >> f1>>f2>>f3>>f4>>f5;
    f1 = go(f1);
	f2 = go(f2);
	f3 = go(f3);
	f4 = go(f4);
	f5 = go(f5);
	s = f1 * f3 - f2 / f4 + f4 * (f5 - f1) - f2;
	cout << "s=" << s << endl;


}
float go(float a)
{
	float y = a * a;
	return y;
}