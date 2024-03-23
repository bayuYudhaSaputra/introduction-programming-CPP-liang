#include <iostream>
using namespace std;
/*  ==========================================
    02.04. Convert pounds into kilograms
    By   : Putra
    Lang : IDN (Indonesia)
    ------------------------------------------
    Masalah :

    Tuliskan suatu program yang mengonversi
    berat dari pound ke kilogram. Program
    menawarkan prompt kepada pengguna untuk
    menginput berat dalam pound. Kemudian,
    program mengonversi berat dari pound ke
    kilogram.
    (Catatan. 1 pound sama dengan 0.454
    kilogram)

    ==========================================
*/

int main() {
    // 1. Input berat dalam pound
    cout << "Input berat dalam satuan pound (Misal, 6.8) : ";
    double beratPound;
    cin >> beratPound;
    cout << endl;

    // 2. Hitung konversi pound ke Kg
    double beratKg;
    beratKg = beratPound * 0.454;

    // 3. Tampilkan hasil konversi
    cout << beratPound << " pound sama dengan "
    << beratKg << " Kg." << endl;

    return 0;
}

/*

Liang. 2014. Introduction to Programming with C++ 3rd Edition. London : Pearson Education.
https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/
