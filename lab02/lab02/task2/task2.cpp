
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	float a, b, c, d, e, f1, f2, f3, f4, f5, s;
	cout << "Enter the first number:" << endl;
	cin >> a;
	cout << "Enter the second number:" << endl;
	cin >> b;
	cout << "Enter the third number:" << endl;
	cin >> c;
	cout << "Enter the fourth number:" << endl;
	cin >> d;
	cout << "Enter the fifth number:" << endl;
	cin >> e;
	f1 = (a * 2 - a + a * (a / 2)) / a / 5;
	f2 = (b * 2 - b + b * (b / 2)) / b / 5;
	f3 = (c * 2 - c + c * (c / 2)) / c / 5;
	f4 = (d * 2 - d + d * (d / 2)) / d / 5;
	f5 = (e * 2 - e + e * (e / 2)) / e / 5;
	s = f1 * f3 - f2 / f4 + f4 * (f5 - f1) - f2;
	cout << "s=" << s << endl;
}

