/*
*	Question6.cpp
*
*	Name:				[ADULA JUDE ABLADOYI ]
*	Department:			[STATISTICS]
*	Matric./Reg. No:	[45304230CE]
*	
*	Create a Body Mass Index (BMI) calculator application that reads
*	the user’s weight in kilograms and height in meters, calculate and
*	display the user’s body mass index.
*	
*/

#include <iostream>
using namespace std;

int main ()
{
	int e;
	float i,BMI;
	cout << "Welcome!!!\n\n";
	cout << "This program creates a Body Mass Index (BMI) calculator application that\n";
	cout << "reads the user's weight in kilograms and height in meters.\n\n";
	
	cout << "Please Enter your Weight(kg): ";
	cin >> e;
	
	cout << "Please Enter your Height(m): ";
	cin >> i;
	
	BMI = e/(i*i);
	std::cout << "Your Body Mass Index is: " << BMI;
	
	if (BMI > 25 && BMI < 29.9)
	cout << "\nThis User is Overweight";
	
	if (BMI >= 30)
	cout << "\nYou are Obessed\n";
	
	if (BMI < 18.5)
	cout << "\nThis User is Underwieght";
	
	if (BMI > 18.5 && BMI < 24.9)
	cout << "\nThis User is in a normal weight range.";

	return 0; 
}
