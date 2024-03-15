#include <iostream>
using namespace std;
/*  ===========================================
    02.03.Convert feet into meters
    By   : Putra
    Lang : IDN (Indonesia)
    -------------------------------------------
    Masalah :

    Tuliskan suatu program yang membaca panjang
    dalam satuan kaki kemudian dikonversi ke
    meter.
    (Catatan : 1 kaki = 0.305 meter)

    ===========================================
*/

int main() {
    // 1. Input panjang dalam satuan kaki.
    cout << "Input satuan dalam kaki, (Misal 6.7) : ";
    double nilaiKaki;
    cin >> nilaiKaki;

    // 2. Konversi satuan kaki ke meter.
    double nilaiMeter = 0.305 * nilaiKaki;

    // 3. Tampilkan hasil konversi.
    cout << nilaiKaki << " kaki sama dengan "
    << nilaiMeter << " meter." << endl;

    return 0;
}

/*

Liang. 2014. Introduction to Programming with C++ 3rd Edition. London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/
