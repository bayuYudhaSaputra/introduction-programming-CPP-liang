#include <iostream>
#include <cmath>
using namespace std;

/*
    ========================================================================
    02.16. Geometry : Area Of A Hexagonal
    by   : #bayuyudhasaputra
    lang : IDN (Bahasa Indonesia)
    ------------------------------------------------------------------------
    Masalah :
    Write a program that prompts the user to enter the side of a hexagon and 
    displays its area.
    ==========================================================================
*/
int main()
{
    cout << endl
         << " ================================================================"
         << endl
         << endl
         << " 02.16. Geometry : Area Of A Hexagonal"
         << endl
         << endl
         << " ----------------------------------------------------------------"
         << endl
         << endl;

    // 1. Input panjang sisi segienam
    cout << " Input sisi segienam (Misal. 6) : ";
    double sisi;
    cin >> sisi;
    cout << endl
         << " (Anda menginput sisi = " << sisi << " satuan panjang)."
         << endl
         << endl;

    // 2. Hitung luas segienam
    double luasSegienam;
    luasSegienam = (3 * pow(3, 0.5) / 2) * pow(sisi, 2);

    // 3. Tampilkan hasil perhitungan luas segienam
    cout << " Jadi, luas segienam dengan:"
         << endl
         << endl
         << "       panjang sisi = " << sisi << " satuan panjang."
         << endl
         << endl
         << " adalah " << luasSegienam << " satuan luas."
         << endl
         << endl
         << " ================================================================"
         << endl;

    return 0;
}



/*

    Liang. 2014. Introduction to Programming with C++ 3rd Edition.
    London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/