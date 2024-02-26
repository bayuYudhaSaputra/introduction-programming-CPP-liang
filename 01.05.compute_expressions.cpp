#include <iostream>
using namespace std;

/*
============================================
1.5. Compute Expression
by : Putra
--------------------------------------------
Problem:

Write a program that displays the result of
(1.2 x 0.1 + 3.9 x 0.9) / (0.09 + 0.001)

============================================
*/

int main() {
    float result = (1.2 * 0.1 + 3.9 * 0.9) / (0.09 + 0.01);
    cout << "The result of (1.2 x 0.1 + 3.9 x 0.9) / (0.09 + 0.001) = " << result << endl;
    
    return 0;
}

/*

Source :
    Liang. 2014. Introduction to Programming with C++ 3rd Edition. London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/9780133380262

*/