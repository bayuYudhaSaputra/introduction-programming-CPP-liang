#include <iostream>
using namespace std;

/* ============================
    1.6. Summation of Odd Number
    by : Putra
-------------------------------
Problem:

Write a program that displays the sum of the first ten odd numbers
(No Looping)

*/

int main() {
    // 1st odd number
    int n1 = 1;
    int U1 = 2 * n1 + 1;
    
    // 2nd odd number
    int n2 = 2;
    int U2 = 2 * n2 + 1;
    
    // 3rd odd number
    int n3 = 3;
    int U3 = 2 * n3 + 1;
    
    // 4th odd number
    int n4 = 4;
    int U4 = 2 * n4 + 1;
    
    // 5th odd number
    int n5 = 5;
    int U5 = 2 * n5 + 1;
    
    // 6th odd number
    int n6 = 6;
    int U6 = 2 * n6 + 1;
    
    // 7th odd number
    int n7 = 7;
    int U7 = 2 * n7 + 1;
    
    // 8th odd number
    int n8 = 8;
    int U8 = 2 * n8 + 1;
    
    // 9th odd number
    int n9 = 9;
    int U9 = 2 * n9 + 1;
    
    // 10th odd number
    int n10 = 10;
    int U10 = 2 * n10 + 1;
    
    // The sum of the first ten odd numbers
    int S10 = U1 + U2 + U3 + U4 + U5 + U6 + U7 + U8 + U9 + U10;
    
    cout << "The sum of the first ten odd numbers is " << endl;
    cout << U1 << " + " << U2 << " + " << U3 << " + " << U4 << " + " << U5 << " + " << U6 << " + " << U7 << " + " << U8 << " + " << U9 << " + " << U10 << " = " << S10 << "." << endl;
    
    return 0;
}


/*

Source :
    Liang. 2014. Introduction to Programming with C++ 3rd Edition. London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/9780133380262

*/
