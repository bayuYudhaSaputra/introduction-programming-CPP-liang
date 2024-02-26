#include <iostream>
using namespace std;
/*  ======================================
    1.10. Average sales in grams
    by : Putra
    --------------------------------------
    Problem:
    Assume a vendor sells 6 kilograms
    of grocery in 15 hour and 30 minutes
    and 30 seconds. Write a program that 
    displays the average sale in grams per 
    hour!
    (Note that 1 kilogram is 1000 grams)
    ======================================= 
*/

int main() {
    // 1. Define variable grocery, hour and
    double grocery;
    double hour;
    double average;
    
    // 2. Inisialize grocery and hour.
    grocery = 6 * 1000;
    hour = 15 + 30 / 60 + 30 / 3600;
    
    // 3. Calculate average
    average = grocery / hour;
    
    // 4. Display result
    cout << "Average sale is " << average << " gram per hour." << endl;
    
    return 0;
}