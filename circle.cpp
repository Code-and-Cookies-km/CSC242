//Programmer: Kayla
//Purpose: Week 2 Discussion

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//Allocate memory for variables
	float a, b, area;

	//Read in a, b, and area (prompt the user to input information)
	cout << "Input the value of a: ";
	cin >> a;

	cout << "Input the value of b: ";
	cin >> b;

	//Compute the area
	area = 3.14159 * a * b;

	//Display the area
	cout << "The area of the Ellipse is -->> " << area;

	return 0;
}
