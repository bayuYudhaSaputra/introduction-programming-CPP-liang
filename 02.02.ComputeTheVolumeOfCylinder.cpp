#include <iostream>
using namespace std;

/*  =========================================
    02.02.Menghitung Volume Tabung
    Oleh : Putra
    Lang : IDN (Indonesia)
    -----------------------------------------
    Masalah:
    Tulislah suatu program yang membaca nilai
    jari-jari dan tinggi dari input pengguna
    dan menghitung volume tabung dengan rumus
    berikut:
    area = radius * radius * pi
    volume = area * length
    dengan asumsi nilai pi = 3.14159265359
    =========================================
*/

int main() {
    // 1. Input jari2 dan tinggi tabung.
    cout << "Input jari-jari tabung (Misal, 5.6) : ";
    double jari2;
    cin >> jari2;
    cout << endl;

    // 2. Input tinggi tabung.
    cout << "Input tinggi tabung (Misal, 7.1) : ";
    double tinggi;
    cin >> tinggi;
    cout << endl;

    // 3. Hitung luas alas tabung.
    double luasAlas = 3.14159265359 * jari2 * jari2;

    // 4. Hitung volume tabung.
    double volume = luasAlas * tinggi;

    // 5. Tampilkan volume tabung.
    cout << "Volume tabung dengan jari-jari "
    << jari2 << " satuan panjang dan tinggi "
    << tinggi << " satuan panjang adalah "
    << volume << " satuan volume." << endl;

    return 0;
}

/*

Liang. 2014. Introduction to Programming with C++ 3rd Edition. London : Pearson Education.
https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/
