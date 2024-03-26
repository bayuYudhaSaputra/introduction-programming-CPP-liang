#include <iostream>
using namespace std;

/*
    ========================================================================================
    02.11. Populatin Projection
    By   : #bayuyudhasaputra
    Lang : idn (bahasa Indonesia)
    ---------------------------------------------------------------------------------------
    Masalah :
    Masalah yang akan diselesaikan dalam latihan ini adalah memproyeksi populasi berdasarkan
    petunjuk-petunjuk pada Programming Exercise 1.11. Proyeksi populasi pada Programming
    Exercise 1.11 menggunakan proyeksi populasi yang digunakan oleh Biro Sensus Amerika Serikat
    (U.S. Census Bureau) dengan asumsi sebagai berikut:
        => terjadi 1 kelahiran setiap 7 detik,
        => terjadi 1 kematian setiap 13 detik,
        => masuknya 1 imigran setiap 45 detik.
    Jika diasumsikan jumlah populasi awal 312.032.486 jiwa dan dalam 1 tahun diasumsikan 365
    hari, maka buatlah program memproyeksi jumlah populasi dalam beberapa tahun kemudian.
    Beberapa tahun yang dimaksud berdasarkan input dari pengguna. Misal, pengguna menginput 5
    maka program akan memproyeksi jumlah populasi pada 5 tahun kemudian.
    ========================================================================================
*/

main ()
{
    cout << endl
         << "==============================================================================="
         << endl
         << "02.11. Population Projection"
         << endl
         << "------------------------------------------------------------------------------"
         << endl;

    // 1. Input rentang waktu dalam satuan tahun
    unsigned int waktu;
    cout << "Input rentang waktu dalam tahun untuk memproyeksi jumlah populasi (Mis. 5) : ";
    cin >> waktu;
    cout << endl
         << "(Anda menginput "
         << waktu
         << " jam).";

    // 2. Hitung proyeksi jumlah kelahiran,
    unsigned int jumlahKelahiran;
    jumlahKelahiran = (waktu * 365 * 24 * 3600) / 7;

    // 3. Hitung proyeksi jumlah kematian,
    unsigned int jumlahKematian;
    jumlahKematian = (waktu * 365 * 24 * 3600) / 13;

    // 4. Hitung proyeksi jumlah imigran baru yang masuk
    unsigned int jumlahImigranBaru;
    jumlahImigranBaru = (waktu * 365 * 24 * 3600) / 45;

    // 5. Jumlahkan hasil proyeksi populasi
    unsigned int proyeksiPopulasi;
    proyeksiPopulasi = jumlahKelahiran - jumlahKematian + jumlahImigranBaru;

    // 6. Tampilkan hasil proyeksi populasi
    cout  << endl
          << "------------------------------------------------------------------------------"
          << endl
          << endl
          << "Dalam " << waktu << " tahun lagi dapat diproyeksikan bahwa : " << endl
          << "Jumlah kelahiran          = " << jumlahKelahiran << " jiwa. " << endl
          << "Jumlah kematian           = " << jumlahKematian << " jiwa. " << endl
          << "Jumlah imigran yang masuk = " << jumlahImigranBaru << " jiwa." << endl
          << "Jumlah populasi           = " << proyeksiPopulasi << " jiwa. " << endl
          << endl
          << "==============================================================================="
          << endl;

    return 0;
}

/*

    Liang. 2014. Introduction to Programming with C++ 3rd Edition.
    London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/
