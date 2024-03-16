#include <iostream>
using namespace std;
/*
    ===============================================================
    02.05. Menentukan Gratuity Rate
    By   : Putra
    Lang : idn (Indonesia)
    ---------------------------------------------------------------
    Masalah :
    Tuliskan program yang meminta input subtotal dan gratuity rate.
    Kemudian, Hitung jumlah nominal gratuity dan total pembayaran.
    Misal, pengguna menginput subtotal sebesar 10 dan
    gratuity rate 15% maka program akan menampilkan jumlah nominal
    gratuity $1.5 dan total $11.5.

    ================================================================
*/

int main()
{
    cout << endl
         << "=======================================================" 
         << endl
         << "02.05. Gratuity rate"
         << endl
         << "-------------------------------------------------------"
         << endl
         << endl;

    // 1. Input subtotal.
    cout << "Input subtotal dalam Rupiah (Mis. 100000) Rp. ";
    double subTotal;
    cin >> subTotal;
    cout << endl;

    // 2. Input gratuity rate.
    cout << "Input gratuity rate (Mis. 15) : ";
    double gratuityRate;
    cin >> gratuityRate;
    cout << endl
         << "-------------------------------------------------------"
         << endl
         << endl;

    // 3. Hitung jumlah nominal gratuity.
    double nominalGratuity;
    nominalGratuity = (gratuityRate / 100.0) * subTotal;

    // 4. Hitung total.
    double total;
    total = subTotal + nominalGratuity;

    // 5. Tampilkan jumlah nominal gratuity dan total.
    cout << "Anda menginput subtotal Rp." << subTotal << endl;
    cout << "Anda menginput gratuity rate " << gratuityRate << "%" << endl << endl;
    cout << "Sehingga, " << endl;
    cout << "         "
         << "Besar nominal gratuity Rp." << nominalGratuity << endl;
    cout << "         "
         << "Total Pembayaran Rp." << total << endl << endl;
    cout << "======================================================" << endl << endl;

    return 0;
}

/*

    Liang. 2014. Introduction to Programming with C++ 3rd Edition.
    London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/