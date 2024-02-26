#include <iostream>
using namespace std;
/*  =========================================
    1.12. Average sales in kilograms
    by : Putra
    -----------------------------------------
    Problem:
    Assume a vendor sells 5553 grams of 
    grocery in 2 hours, 9 minutes and 30 
    seconds. Write a program that displays 
    the average sale in kilograms per hour     
    (Note that 1 kilogram is 1000 grams).
    ========================================
*/

int main() {
    /* 1. Define variable grocery, hour and 
           average */
    double grocery;
    double hour;
    double average;
    
    // 2. Inisialize grocery, and hour
    grocery = 5553 / 1000;
    hour = 2 + 9 / 60 + 30 / 3600;
    
    // 3. Calculate average
    average = grocery / hour;
    
    // 4. Display result
    cout << "The average sale is " << average << " Kg per hour." << endl;
    return 0;
}