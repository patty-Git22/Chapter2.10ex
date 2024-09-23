/*
Title: Chapter 2 exercise 10 - Distance Per Tank of Gas
File name: Chapter2.10ex.cpp
Programmer: Patrick Maloon
Date:9/22/24

Create a C++ program that does the folowing:
A car holds 15 gallons of gasoline and can travel 375 miles before refueling.
Write a program that calculates the number of miles per gallon the car gets. Display the result on the screen
Once you have coded this and placed in your main branch in GitHub, create a second branch that revises your code so
that the user can enter the number of gallons and the miles driven.
Hint: The following formula can be used to calculate the distance:
MPG= Miles Driven/Gallons of Gas Used

*/ 

#include <iostream>
using namespace std;

int main()
{
	int tankSize;
	int milesDriven;
	double mpg;
	cout << "How many gallons of gas does your car hold? ";
	cin >> tankSize;
	cout << "How many miles can you drive before running out of gas? ";
	cin >> milesDriven;
	mpg = milesDriven / tankSize;
	cout << "If you drive " << milesDriven << " miles with a car that holds " << tankSize << " gallons of gas," << endl;
	cout << "Then your car averages " << mpg << " miles per gallon" << endl;

	return 0;

}
