#include <iostream>
using namespace std;

/* ===================================
    1.9. Area and Perimeter of Square
    by : Putra
   -----------------------------------
   Write a program that displays the area and   perimeter of a square that has a side of 5.2 using the following formula:
    area = side * side 
    perimeter = 4 * side

   ==================================== */

int main() {
    // 1. define variable side
    float side = 52;
    
    // 2. compute variabel area and perimeter
    float area = side * side,
    perimeter = 4 * side;
    
    // 3. Display area and perimeter calculation results.
    cout << "The area of a square with side length " << side << " is " << area << ". \n"<< endl;
    cout << "The perimeter of a square with side length " << side << " is " << perimeter << "."<< endl;
    return 0;
}

/*

Liang. 2014. Introduction to Programming with C++ 3rd Edition. London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/
