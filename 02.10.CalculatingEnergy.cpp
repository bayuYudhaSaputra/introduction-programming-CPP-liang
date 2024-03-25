#include <iostream>
using namespace std;

/*
    ===========================================================
    02.10. Science : Calculating Energy
    -----------------------------------------------------------
    Masalah:

    Masalah yang akan diselesaikan adalah menentukan energi
    kalor yang dibutuhkan untuk memanaskan air dengan massa
    tertentu dengan perubahan suhu tertentu pula. Energi yang
    dibutuhkan untuk memanaskan air dapat dihitung menggunakan
    rumus:

        Q = M * (t1 - t0) * 4184

    Buatlah program untuk menyelesaikan masalah ini!
    ============================================================
*/

int main()
{
    cout << endl
         << "==================================================="
         << endl
         << "02.10. Science : Calculating Energy"
         << endl
         << "---------------------------------------------------"
         << endl
         << endl;
    // 1. Input massa air (dalam satuan Kg)
    double massa;
    cout << "Input massa air (Misal, 12.5) : ";
    cin >> massa;
    cout << endl
         << "(Anda menginput massa air "
         << massa
         << " Kg)"
         << endl
         << endl;

    // 2. Input suhu awal (dalam satuan derajat Celsius)
    double suhuAwal;
    cout << "Input suhu awal (Misal. 10.56) : ";
    cin >> suhuAwal;
    cout << endl
         << "(Anda menginput suhu awal "
         << suhuAwal
         << " derajat Celsius)"
         << endl
         << endl;

    // 3. Input suhu akhir (dalam satuan derajat Celsius)
    double suhuAkhir;
    cout << "Input suhu akhir (Misal, 78,67) : ";
    cin >> suhuAkhir;
    cout << endl
         << "(Anda menginput suhu akhir "
         << suhuAkhir
         << " derajat Celsius)"
         << endl;

    // 4. Hitung energi kalor yang dibutuhkan
    double energiKalor;
    energiKalor = massa * (suhuAkhir - suhuAwal) * 4184;

    // 5. Tampilkan hasil perhitungan
    cout << endl
         << "Jadi, energi kalor yang dibutuhkan untuk memanaskan air dengan,"
         << endl
         << "      massa      : " << massa << " Kg."
         << endl
         << "      suhu awal  : " << suhuAwal << " derajat Celsius."
         << endl
         << "      suhu akhir : " << suhuAkhir << " derajat Celsius. "
         << endl
         << endl
         << "adalah " << energiKalor << " joule."
         << endl;
    cout << "==================================================="
         << endl;

    return 0;
}

/*

    Liang. 2014. Introduction to Programming with C++ 3rd Edition.
    London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/