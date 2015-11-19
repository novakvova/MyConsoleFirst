// MyClassConsole.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	cout << "Console Hello!\n";
	cout << "Hello Koloduch\n";
	int p = 0;
	cout << "Enter p->_";
	cin >> p;
	cout << "You Enter = " << p << endl;
	int i;
	cout << "Bonatskiy table \n";
	for (i = 0; i < p; i++)
	{
		cout << p << "*" << i + 1 << " = " << (i + 1)*p << endl;
	}
	cout << "Bay\n";
	return 0;
}

