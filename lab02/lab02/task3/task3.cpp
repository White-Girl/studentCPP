
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int a1, a2, n=1, factorial=1, sh;
	cout << "Type the number to calculate factorial:" << endl;
	cin >> a1;
	cout << "Number to compare:" << endl;
	cin >> a2;
	while ((n < a1) && (a1 > a2)) do;
	{
		n = n + 1;
		factorial = factorial * n;
		sh = n;
    }
	if (a2 > a1)
	{
		cout << "Did the factorial exceed the value? YES" << "Did the factorial exceed the value? YES" << sh << endl;
	}
	else
	{
		cout << "Did the factorial exceed the value? NO" << endl;
    }
}


