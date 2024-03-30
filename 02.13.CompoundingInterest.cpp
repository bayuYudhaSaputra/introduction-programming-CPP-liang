#include <iostream>
using namespace std;

/*
    ========================================================================
    02.13. Compunding Interest
    by : #bayuyudhasaputra
    lang : IDN (Bahasa Indonesia)
    ------------------------------------------------------------------------
    Masalah :
    Tuliskan program yang menyediakan input kepada pengguna untuk menginput
    sejumlah uang yang ditabung per bulan serta menampilkan jumlah tabungan
    setelah 6 bulan.
    (Pada Programming Exercise 5.32, anda akan menggunakan perulangan untuk
    menyederhanakan kode serta menampilkan jumlah nominal tabungan pada
    bulan pertama, kedua dan seterusnya)
    ========================================================================
*/

int main()
{
    cout << endl
         << "==========================================================="
         << endl
         << endl
         << "02.13. Compounding Interest"
         << endl
         << endl
         << "-----------------------------------------------------------"
         << endl
         << endl;

    // 1. Input nilai nominal awal tabungan dan persentase bunga tahunan
    cout << "Input nominal tabungan awal dalam rupiah (Mis. 1000000) : ";
    double tabunganAwal;
    cin >> tabunganAwal;
    cout << endl
         << "(Anda menginput Rp." << tabunganAwal << ") "
         << endl
         << endl;

    // 2. Input nilai nominal persentase bunga tahunan
    cout << "Input persentase bunga tahunan (Misal, 5) : ";
    double persen;
    cin >> persen;
    cout << endl
         << "(Anda menginput bunga " << persen << " persen per tahun)."
         << endl
         << "-----------------------------------------------------------"
         << endl;

     // 3. Hitung nominal tabungan pada bulan ke-1 serta menampilkannya di layar.
     double tabungan;
     tabungan = tabunganAwal * (1 + persen / 1200);
     cout << endl
          << "Jumlah nominal tabungan pada bulan ke-1 adalah Rp."
          << tabungan
          << endl
          << endl;

     // 4. Hitung nominal tabungan pada bulan ke-2 serta menampilkannya di layar.
     tabungan = (tabunganAwal + tabungan) * (1 + persen /1200);
     cout << "Jumlah nominal tabungan pada bulan ke-2 adalah Rp."
          << tabungan
          << endl
          << endl;

     // 5. Hitung nominal tabungan pada bulan ke-3 serta menampilkannya di layar.
     tabungan = (tabunganAwal + tabungan) * (1 + persen / 1200);
     cout << "Jumlah nominal tabungan pada bulan ke-3 adalah Rp."
          << tabungan
          << endl
          << endl;

     // 6. Hitung nominal tabungan pada bulan ke-4 serta menampilkannya di layar.
     tabungan =  (tabunganAwal + tabungan) * (1 + persen / 1200);
     cout << "Jumlah nominal tabungan pada bulan ke-4 adalah Rp."
          << tabungan
          << endl
          << endl;

     // 7. Hitung nominal tabungan pada bulan ke-5 serta menampilkannya di layar.
      tabungan =  (tabunganAwal + tabungan) * (1 + persen / 1200);
     cout << "Jumlah nominal tabungan pada bulan ke-5 adalah Rp."
          << tabungan
          << endl
          << endl;

     // 8. Hitung nominal tabungan pada bulan ke-6 serta menampilkannya di layar.
      tabungan =  (tabunganAwal + tabungan) * (1 + persen / 1200);
     cout << "Jumlah nominal tabungan pada bulan ke-6 adalah Rp."
          << tabungan
          << endl
          << endl
          << "===========================================================";

    return 0;
}

/*

    Liang. 2014. Introduction to Programming with C++ 3rd Edition.
    London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/
