#include "pch.h"
#include "ctime"
#include "iostream"
using namespace std;
int main()
{
	srand(unsigned int(time(0)));
	int i = rand() % 100;
	while (true)
	{
		cout << "Ya zagadala chislo ot 0 do 100.Ygadaesh?)" << endl;
		int j;
		cin >> j;
		if (i > j)
		{
			cout << "Het,Ono bol'she" << endl;
		}
		else
		{
			if (i < j)
				cout << "Het,ono men'she" << endl;
			else
			{
				cout << "Eee, ti ygadal chislo!!!" << endl;
				break;
			}
		}
	}
	return 0;
}