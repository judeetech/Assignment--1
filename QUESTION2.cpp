/*
*	Question2.cpp
*
*	Name:				[ADULA JUDE ABLADOYI ]
*	Department:			[STATISTICS]
*	Matric./Reg. No:	[45304230CE]
*	
*	program that reads two integers and prints and determines
*	if the first is a multiple of the second.
*	
*/

#include <iostream>
using namespace std;

int main ()
{
	
	int eu;
	int ei;
	
	cout << "\tWelcome!!!\n";
	cout << "This program reads two integers and determines and prints\n";
	cout << "if the first is a multiple of the second.\n";
		 
	cout << "Enter First Integer: ";
	cin >> eu;
	
	cout << "Enter second Integer: ";
	cin >> ei;
	
	if (eu % ei == 0)
	cout << "\n" << eu << " is a multiple of " << ei;
	
	else
	cout << "\n" << eu << " is not a multiple of " << ei;
	return 0;
}
