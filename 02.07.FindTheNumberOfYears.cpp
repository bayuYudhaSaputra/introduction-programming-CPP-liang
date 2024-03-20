#include <iostream>
using namespace std;

/*
    =====================================================
    02.07. Find The Number Of Years
    By   : #bayuyudhasaputra
    Lang : idn (Indonesia)
    -----------------------------------------------------
    Masalah :

    Tuliskan program yang menawarkan prompt kepada kepada
    pengguna untuk menginput rentang waktu dalam satuan
    menit (Misal, 1 miliar menit). Kemudian, program
    menampilkan hasil konversi dari jangka waktu menit
    ini ke dalam tahun, hari, jam dan menit. Untuk
    mempermudah perhitungan, satu tahun diasumsikan
    365 hari.

    =====================================================
*/

int main() {
    cout << endl
         << "================================================================="
         << endl
         << endl
         << "02.07. Find the number of years"
         << endl
         << endl
         << "-----------------------------------------------------------------"
         << endl
         << endl;

    // 1. Membaca input dari pengguna
    unsigned int menit;
    cout << "Input rentang waktu dalam menit (Mis. 5000000) : ";
    cin >> menit;
    cout << endl
         << "Anda menginput " << menit << " menit."
         << endl
         << endl;

    // 2. Mengonversi menit ke tahun
    unsigned int tahun;
    tahun = menit / (365 * 24 * 60);

    // 3. Menentukan sisa pembagian dengan hasil operasi (365 * 24 * 60)
    unsigned int sisaMenit;
    sisaMenit = menit % (365 * 24 * 60);

    // 4. Mengonversi sisa pembagian pada langkah 3 ke hari.
    unsigned int hari;
    hari = sisaMenit / (24 * 60);

    // 5. Menentukan sisa pembagian pada langkah 3 dengan hasil operasi (24 * 60)
    sisaMenit %= 24 * 60;

    // 6. Mengonversi sisa pembagian pada langkah 5 ke jam.
    unsigned int jam;
    jam = sisaMenit / 60;

    // 7. Menentukan sisa pembagian pada langkah 5 dengan bilangan 60.
    sisaMenit %= 60;

    // 8. Tampilkan hasil konversi.
    cout << menit     << " menit sama dengan "
         << tahun     << " tahun "
         << hari      << " hari "
         << jam       << " jam "
         << sisaMenit << " menit."
         << endl
         << endl
         << "================================================================="
         << endl
         << endl;

    return 0;
}

/*

    Liang. 2014. Introduction to Programming with C++ 3rd Edition.
    London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/
