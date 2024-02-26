#include <iostream>
using namespace std;

/*
   =======================================
   1.11. Population Projection
   by : Putra
   ---------------------------------------
   Problem:
   
    The U.S. Census Bureau projects population 
    based on the following assumptions:
   
     => One birth every 7 seconds 
     => One death every 13 seconds
     => One new immigrant every 45 seconds
    
    Write a program that displays the 
    population for each of the next five years. 
    Assume the current population is 
    312,032,486 and one year has 365 days. 
    Hint: In C++, if two integers perform 
    division, the result is the quotient.
    The fractional part is truncated.
    
    For example, 5 / 4 is 1 (not 1.25) and
    10 / 4 is 2 (not 2.5). To get an accurate
    result with the fractional part, one of 
    the values involved in the division must
    be a number with a decimal point. For
    example, 5.0 / 4 is 1.25 and 10 / 4.0
    is 2.5.
    
   =======================================
*/

int main() {
    
    // 1. Define variables.
    int numberOfBirths;
    int numberOfDeaths;
    int numberOfNewImigrants;
    
    // 2. Calculate each variable.
    numberOfBirths = (5 * 365 * 24 * 3600) / 7;
    numberOfDeaths = (5 * 365 * 24 * 3600) / 13;
    numberOfNewImigrants = (5 * 365 * 24 * 3600) / 45;
    
    // 3. Calculate the results of population projections in 5 year later.
    int populationProjection;
    populationProjection = 312032486 + numberOfBirths + numberOfNewImigrants - numberOfDeaths;
    
    // 4. Display the results of population projections in 5 year later.
    cout << "The results of population projections in 5 year later is " << populationProjection << "." << endl;
    
    return 0;
}


