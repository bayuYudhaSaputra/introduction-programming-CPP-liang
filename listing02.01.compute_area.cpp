#include <iostream>
using namespace std;

int main()
{
    double radius;
    double area;

    // Step 1. Read in radius
    radius = 20;

    // Step 2. Compute area
    area = radius * radius * 3.14159;

    // Step 3. Display area
    cout << "The area is " << area << endl;
    return 0;
    
}
