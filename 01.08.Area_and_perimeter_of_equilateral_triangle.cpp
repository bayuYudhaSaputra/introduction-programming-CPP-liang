#include <iostream>
using namespace std;

/*  =================================================
    1.8. Area and perimeter of equilateral triangle
    by : Putra
    -------------------------------------------------
    Problem:
    Write a program that displays the area and perimeter of an equilateral triangle that has its three sides as 9.2, using the following formula:
    area = 1.732 x (side1) x (side1) / 4
    perimeter = 3 x side1

    ====================================== */

int main() {
    float side1;
    side1 = 9.2;
    
    // Determine Area
    float area;
    area = 1.732 * side1 * side1 / 4;
    cout << "The area of triangle with side " << side1 << " is " << area << ".\n" << endl;
    
    // Determine perimeter
    float perimeter;
    perimeter = 3 * side1;
    cout << "The perimeter of triangle with side " << perimeter << ".\n" << endl;
    
    return 0;
}

/*

Liang. 2014. Introduction to Programming with C++ 3rd Edition. London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/