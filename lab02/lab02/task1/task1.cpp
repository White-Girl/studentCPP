#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d, e, f1, f2, f3, f4, f5, s;
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
	f1 = a * a;
	f2 = b * b;
	f3 = c * c;
	f4 = b * b;
	f5 = e * e;
	s = f1 * f3 - f2 / f4 + f4 * (f5 - f1) - f2;
	cout << "s=" << s << endl;
}
