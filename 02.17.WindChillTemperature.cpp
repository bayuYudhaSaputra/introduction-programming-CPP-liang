#include <iostream>
#include <cmath>
using namespace std;

/*
    ========================================================================
    02.17. Science: Wind-chill Temperature
    by   : #bayuyudhasaputra
    lang : IDN (Bahasa Indonesia)
    ------------------------------------------------------------------------
    Masalah :
    How cold is it outside? The temperature alone is not enough to provide the 
    answer. Other factors including wind speed, relative humidity, and sunshine 
    play important roles in determining coldness outside. In 2001, the National 
    Weather Service (NWS) implemented the new wind-chill temperature to measure 
    the coldness using temperature and wind speed.
    Write a program that prompts the user to enter a temperature and a wind
    speed!
    ==========================================================================
*/

int main()
{
    cout << endl
         << " ======================================================================"
         << endl
         << endl
         << " 02.17. Science: Wind-chill Temperature"
         << endl
         << endl
         << " ----------------------------------------------------------------------"
         << endl
         << endl;

    // 1. Input temperatur udara luar dalam derajat fahrenheit
    cout << " Input temperatur udara luar dalam derajat fahrenheit (Mis. 5.3) : ";
    double temperatureUdaraLuar;
    cin >> temperatureUdaraLuar;
    cout << endl
         << endl
         << " (Anda menginput " << temperatureUdaraLuar << " derajat fahrenheit)"
         << endl
         << endl;

    // 2. Input kecepatan udara dalam mil per jam
    cout << " Input kecepatan udara dalam mil per jam (Mis. 6) : ";
    double kecepatanUdara;
    cin >> kecepatanUdara;
    cout << endl
         << endl
         << " (Anda menginput " << kecepatanUdara << " mil per jam)"
         << endl
         << endl;

    // 3. Kalkulasi temperatur wind-chill
    double temperatureWindChill;
    temperatureWindChill = 
                            35.74 + 0.6215 * temperatureUdaraLuar -
                            35.75 * pow(kecepatanUdara, 0.16) +
                            0.4275 * temperatureUdaraLuar *
                            pow(kecepatanUdara, 0.16);

    // 4. Tampilkan hasil kalkulasi temperatur wind-chill
    cout << " Jadi, Temperature Wind-Chill dengan,"
         << endl
         << endl
         << "       temperature udara luar " << temperatureUdaraLuar << " derajat fahrenheit,"
         << endl
         << endl
         << "       kecepatan udara " << kecepatanUdara << " mil per jam,"
         << endl
         << endl
         << " adalah " << temperatureWindChill << "."
         << endl
         << endl
         << " ======================================================================"
         << endl;

    return 0;
}

/*

    Liang. 2014. Introduction to Programming with C++ 3rd Edition.
    London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/