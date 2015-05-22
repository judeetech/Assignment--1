/*
*	Question1.cpp
*	Name:				[ADULA JUDE ABLADOYI]
*	Department:			[STATISTICS]
*	Matric./Reg. No:	[45304230CE]
*	
*	program that reads an integer and determines and
*	prints whether it's odd or even.
*	
*/

#include <iostream>
using namespace std;


int main ()
{
	
	int eu;
	
	cout << "\tWelcome!!!\n";
	cout << "this program reads an integer and determines and prints\n";
	cout << "whether it's odd or even.\n\n";
		 
	cout << "Enter Integer: ";
	cin >> eu; 
	
	if (eu % 2 == 0)
	cout << eu << " is an Even number\n";
	
	else
	cout << eu << " is an Odd number\n";
	
	return 0;
}
