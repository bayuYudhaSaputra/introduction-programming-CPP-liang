#include <iostream>
using namespace std;

/*
    ============================================================
    02.09. Menghitung Percepatan Rata-rata
    Oleh : #bayuyudhasaputra
    Lang : IDN (bahasa Indonesia)
    ------------------------------------------------------------
    Masalah :
    Buatlah program yang menampilkan percepatan rata-rata (dalam
    satuan m/s2) jika pengguna menginput kecepatan awal (dalam
    satuan m/s), kecepatan akhir (dalam satuan m/s) dan selang
    waktu (dalam satuan sekon)!
    ============================================================
*/

int main()
{
    cout << "=================================================="
         << endl
         << endl
         << "2.9. Fisika : Percepatan"
         << endl
         << endl
         << "--------------------------------------------------"
         << endl
         << endl;

    // 1. Input kecepatan awal, kecepatan akhir dan rentang waktu
    double kecepatanAwal, kecepatanAkhir, waktu;
    cout << "Input kecepatan awal (Misal, 2.5) : ";
    cin >> kecepatanAwal;

    cout << endl
         << "(Anda menginput kecepatan awal "
         << kecepatanAwal
         << "m/s)."
         << endl
         << endl;

    cout << "Input kecepatan akhir (Misal, 4.83) : ";
    cin >> kecepatanAkhir;

    cout << endl
         << "(Anda menginput kecepatan akhir "
         << kecepatanAkhir
         << "m/s)."
         << endl
         << endl;

    cout << "Input selang waktu (Misal. 1.5) : ";
    cin >> waktu;

    cout << endl
         << "(Anda menginput selang waktu "
         << waktu
         << " s)."
         << endl
         << endl;

    // 2. Hitung percepatan rata-rata
    double percepatan;
    percepatan = (kecepatanAkhir - kecepatanAwal) / waktu;

    // 3. Tampilkan hasil perhitungan
    cout << "Jadi, Percepatan dengan " << endl << endl
         << "      Kecepatan awal  : " << kecepatanAwal << " m/s," << endl << endl
         << "      Kecepatan akhir : " << kecepatanAkhir << " m/s, " << endl << endl
         << "      Selang waktu    : " << waktu << " sekon, " << endl << endl
         << "adalah " << percepatan << " m/s2." << endl
         << endl
         << "=================================================="
         << endl;

    return 0;
}