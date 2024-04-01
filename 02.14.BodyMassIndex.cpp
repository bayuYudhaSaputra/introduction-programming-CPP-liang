#include <iostream>
using namespace std;

/*
    ========================================================================
    02.13. Body Mass Index
    by   : #bayuyudhasaputra
    lang : IDN (Bahasa Indonesia)
    ------------------------------------------------------------------------
    Masalah :
    Body Mass Index (BMI) is a measure of health on weight. It can be 
    calculated by taking your weight in kilograms and dividing by the square 
    of your height in meters. Write a program that prompts the user to enter 
    a weight in kilograms and height in centimeters and displays the BMI!
    ==========================================================================
*/

int main()
{
    cout << endl
         << "================================================================"
         << endl
         << endl
         << "02.14. Body Mass Index"
         << endl
         << endl
         << "----------------------------------------------------------------"
         << endl
         << endl;

    // 1. Input berat badan dalam Kg
    cout << "Input berat badan dalam kilogram (Misal. 70): ";
    double massaBadan;
    cin >> massaBadan;
    cout << endl
         << endl
         << "(Anda menginput " << massaBadan << " Kg) "
         << endl
         << endl;

    // 2. Input tinggi badan dalam cm
    cout << "Input tinggi badan dalam centimeter (Misal. 163): ";
    double tinggiBadan;
    cin >> tinggiBadan;
    cout << endl
         << endl
         << "(Anda menginput " << tinggiBadan << " cm) "
         << endl
         << endl;

    // 3. Hitung BMI
    double BMI;
    BMI = massaBadan / (tinggiBadan * tinggiBadan);

    // 4. Tampilkan hasil BMI.
    cout << "Jadi, BMI dengan " << endl << endl
         << "      Massa badan " << massaBadan << " Kg," << endl << endl
         << "      Tinggi badan " << tinggiBadan << " cm," << endl << endl
         << "adalah " << BMI
         << endl
         << endl
         << "================================================================"
         << endl;

    return 0;
}


/*

    Liang. 2014. Introduction to Programming with C++ 3rd Edition.
    London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/
