#include <iostream>
#include <cmath> // header sqrt()
using namespace std;

/*  ===========================
    1.7. Aproximation of phi
    by : Putra
    ---------------------------
    Problem:
    Write the program that aproximation
    of phi number.
    (no loop)
    ============================ */

int main() {

    // Aproximation phi until 5 iteration
    float phi5 = sqrt(6 * (1.0 + 1 / 4 + 1 / 9 + 1 / 16 + 1 / 25));
    cout << "Aproximation of phi until 5 iteration is " << phi5 << ". \n" << endl;
    
    // Aproximation phi until 6 iteration
    float phi6 = sqrt(6 * (1.0 + 1 / 4 + 1 / 9 + 1 / 16 + 1 / 25 + 1 / 36));
    cout << "Aproximation of phi until 6 iteration is " << phi6 << "." << endl;
    
    return 0;
}

/*

Source :
    Liang. 2014. Introduction to Programming with C++ 3rd Edition. London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/9780133380262

*/