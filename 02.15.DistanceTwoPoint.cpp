#include <iostream>
#include <cmath>
using namespace std;

/*
    ========================================================================
    02.15. Distance Of Two Point
    by   : #bayuyudhasaputra
    lang : IDN (Bahasa Indonesia)
    ------------------------------------------------------------------------
    Masalah :
    Write a program that prompts the user to enter two points (x1, y1) and 
    (x2, y2) and displays their distance between them!
    ==========================================================================
*/

int main()
{
    cout << endl
         << "================================================================"
         << endl
         << endl
         << "02.15. Distance Of Two Points"
         << endl
         << endl
         << "----------------------------------------------------------------"
         << endl
         << endl;

    // 1. Input absis titik pertama
    cout << "Input absis titik pertama (Misal. 4) : ";
    double absisPertama;
    cin >> absisPertama;
    cout << endl << endl;

    // 2. Input ordinat titik pertama
    cout << "Input ordinat titik pertama (Misal. -1) : ";
    double ordinatPertama;
    cin >> ordinatPertama;
    cout << endl
         << endl
         << " --- [Titik pertama adalah "
         << "A(" << absisPertama << " ; " << ordinatPertama << ")] --- "
         << endl
         << endl;

    // 3. Input absis titik kedua
    cout << "Input absis titik kedua (Misal, 5) : ";
    double absisKedua;
    cin >> absisKedua;
    cout << endl << endl;

    // 4. Input ordinat titik kedua
    cout << "Input ordinat titik kedua (Misal, 3) : ";
    double ordinatKedua;
    cin >> ordinatKedua;
    cout << endl
         << endl
         << " --- [Titik kedua adalah "
         << "B(" << absisKedua << " ; " << ordinatKedua << ")] --- "
         << endl
         << endl;

    // 5. Hitung jarak titik pertama dengan titik kedua
    double jarak;
    jarak = pow(pow(( absisKedua - absisPertama ), 2) + pow(( ordinatKedua - ordinatPertama ), 2) , 0.5);

    // 6. Tampilkan hasil perhitungan jarak titik pertama dengan kedua
    cout << "Jadi, jarak antara titik" << endl << endl
         << "      A(" << absisPertama << " ; " << ordinatPertama << ")" << endl << endl
         << "      dengan " << endl << endl
         << "      B(" << absisKedua << " ; " << ordinatKedua << ")" << endl << endl
         << "kira-kira sama dengan " << jarak << " satuan panjang."
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
