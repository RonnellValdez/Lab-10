

#include "pch.h"
#include <iostream>
using namespace std;

void dimensions(double&, double&, double&, int&, int&);
double calculations(double&, double&, double&, int&, int&, double&);
void output(double, int&);

int main()
{
	double length = 0, width = 0, height = 0, Buckets = 0;
	int NumberOfWindows = 0, NumberOfDoors = 0, TotalBuckets = 0;

	dimensions(length, width, height, NumberOfWindows, NumberOfDoors);
	calculations(length, width, height, NumberOfWindows, NumberOfDoors, Buckets);
	output(Buckets, TotalBuckets);
	
	return 0;
}


// Input for room dimensions and number of doors/windows from user
void dimensions(double&length, double&width, double&height, int&NumberOfWindows, int&NumberOfDoors)
{
	length, width, height;
	NumberOfWindows, NumberOfDoors;
	int window = 15, door = 21;

	cout << "What is the total length of the room? " << endl;
	cin >> length;

	cout << "What is the height of the room? ";
	cin >> height;

	cout << "What is the width of the room? ";
	cin >> width;

	cout << "How many doors are in the room? ";
	cin >> NumberOfDoors;

	cout << "How many windows are in the room? ";
	cin >> NumberOfWindows;

}


//Calcualtions for square footage of the paint needed
double calculations(double&length, double&width, double&height, int&NumberOfWindows, int&NumberOfDoors, double&Buckets)
{
	double DoorWindowSqFt = (15 * NumberOfWindows) + (21 * NumberOfDoors);
	cout << endl << DoorWindowSqFt << " sq ft of doors and windows" << endl;
	//Calcualtions for square footage of the walls
	double WallSqFt = (length*height*width);
	cout << endl << WallSqFt << " sq ft of walls" << endl;

	double TotalSqFt = (WallSqFt - DoorWindowSqFt);

	cout << endl << TotalSqFt << " Total sq ft" << endl;
	//Calculation for total amount of buckets needed
	Buckets = TotalSqFt / 400;
	//cout << endl << Buckets;
	
	return Buckets;
		
}


//Output
void output(double Buckets, int&TotalBuckets)
{
	int divisor = Buckets * 100;
	TotalBuckets = (int)Buckets;
	
	//In order to account for situations where Buckets is an exact number with no decimals
	if (divisor == TotalBuckets * 100) 
	{
		cout << TotalBuckets << " Buckets of paint needed.";
	}

	TotalBuckets++;
	cout << endl << divisor << endl;
	cout << TotalBuckets << " Buckets of paint needed.";
}
