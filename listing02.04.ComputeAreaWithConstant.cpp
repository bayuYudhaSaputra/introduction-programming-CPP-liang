#include <iostream>
using namespace std;

int main()
{
	double const PI = 3.14159;

	// Step 1: Read in radius
	double radius;
	cout << "Input a radius : ";
	cin >> radius;

	// Step 2: Compute area
	double area = radius * radius * PI;

	// Step 3: Display the area
	cout << "The area is ";
	cout << area << endl;

	return 0;

}