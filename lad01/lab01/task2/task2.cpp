#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int name, day, month, year, y_day, y_month, y_year, old, i = 0;
	cout << "Vvedite imya:" << endl;
	cin >> name;
	cout << "Vvedite den' rozhdeniya:" << endl;
	cin >> day;
	cout << "Vvedite mesyats rozhdeniya:" << endl;
	cin >> month;
	cout << "Vvedite god rozhdeniya:" << endl;
	cin >> year;
	cout << "Vvedite segodnyashni' den':" << endl;
	cin >> y_day;
	cout << "Vvedite segodnyashni' mesyats:" << endl;
	cin >> y_month;
	cout << "Vvedite segodnyashni' god':" << endl;
	cin >> y_year;
	old = y_year - year;
	if (y_day - day < 0)
	{
		i++;
	}
	if ((y_month - month < 0) || (i > 0))
	{
		old--;
		cout << "Hello," << name << "You are" << old << "years old." << endl;
	}
}