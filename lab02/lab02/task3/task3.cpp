
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	bool isExceeded(int numToCalculateFactorial, int& stepNumber);
	while (true) 
	{
		int numToCalculateFactorial, stepNumber = 0;
		int f = 1, c;
		cout << "Type the number to calculate factorial :";
		cin >> numToCalculateFactorial;
		do 
		{
			f *= numToCalculateFactorial--;
		} while (numToCalculateFactorial > 0);
		cout << "Number to compare:";
		cin >> c;
		cout << "Did the factorial exceed the value?";

		if (f > c) 
		{
			numToCalculateFactorial = 1;
			do 
			{
				f /= numToCalculateFactorial++;
				stepNumber = stepNumber++;
			} while (f > c);
			cout << " YES" << endl;
			cout << "The step number is ";
			cout << stepNumber << endl;
		}
		else if (f <= c)
		{
			cout << "NO" << endl;
		}
	}
}



