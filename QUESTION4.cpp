/*
*	Question4.cpp
*
*	Name:				[ADULA JUDE ABLADOYI ]
*	Department:			[STATISTICS]
*	Matric./Reg. No:	[45304230CE]
*	
*	a program that inputs a five-digit integer, separates the integer
*	into its digits and prints them separated by three spaces each.
*/

#include <iostream>
using namespace std;

int main ()
{

	int eu;
	int e1;
	int e2;
	int e3;
	int e4;
	int e5;
	
	cout << "Welcome\n";
	cout << "This program reads Five-Digit integer, seperates the integer\n";
	cout << "into digits and prints them.\n\n";
		 
	cout << "Input five-digit number: ";
	cin >> eu;
	
	if (eu < 10000)
	{
		cout << "error!!! try again!\n";
	}
	if (eu > 99999)
	{
		cout << "error!!! try again!";
	}
	
	e1 = eu / 10000;
	e2 = (eu / 1000) % 10;
	e3 = (eu / 100) % 10;
	e4 = (eu / 10) % 10;
	e5 = eu % 10;
	
	cout << e1 << " " << e2 << " " << e3 << " " << e4 << " " << e5;
	
	return 0;
}
