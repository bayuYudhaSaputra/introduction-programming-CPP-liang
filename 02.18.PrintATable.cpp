#include <iostream>
#include <cmath>
using namespace std;

/*
    ========================================================================
    02.18. Print A Table
    by   : #bayuyudhasaputra
    lang : IDN (Bahasa Indonesia)
    ------------------------------------------------------------------------
    Masalah :
    Write a program that displays the following table:
    ----------------------------
    x	    y	    pow(x, y)
    ----------------------------
    2.5	    1.2	    3.00281
    5.0	    2.4	    47.5913
    1.2	    3.6	    1.92776
    2.4	    5.0	    79.6262
    3.6	    2.5	    24.5999
    ----------------------------

    ==========================================================================
*/

int main()
{
     // 1. Mendefinisikan dua variabel
     double bilanganBasis, bilanganPangkat, hasilPangkat;

     // 2. Mengkalkulasi nilai pertama
     bilanganBasis = 2.5;
     bilanganPangkat = 1.2;
     hasilPangkat = pow(bilanganBasis, bilanganPangkat);

     // 3. Menampilkan hasil pangkat nilai pertama
     cout << endl
          << " ================================================="
          << endl
          << endl
          << "   Basis  " << "  Pangkat  " << "  Hasil  "
          << endl
          << endl
          << " -------------------------------------------------"
          << endl
          << endl
          << "   " << bilanganBasis << "      " << bilanganPangkat << "        " << hasilPangkat
          << endl
          << endl;

     // 4. Mengkalkulasi nilai kedua
     bilanganBasis = 5.0;
     bilanganPangkat = 2.4;
     hasilPangkat = pow(bilanganBasis, bilanganPangkat);

     // 5. Menampilkan hasil pangkat nilai kedua
     cout << "   " << bilanganBasis << "        " << bilanganPangkat << "        " << hasilPangkat
          << endl
          << endl;

     // 6. mengkalkulasi nilai ketiga
     bilanganBasis = 1.2;
     bilanganPangkat = 3.6;
     hasilPangkat = pow(bilanganBasis, bilanganPangkat);

     // 7. Menampilkan hasil pangkat ketiga
     cout << "   " << bilanganBasis << "      " << bilanganPangkat << "        " << hasilPangkat
          << endl
          << endl;

     // 8. mengkalkulasi nilai keempat
     bilanganBasis = 2.4;
     bilanganPangkat = 5.0;
     hasilPangkat = pow(bilanganBasis, bilanganPangkat);

     // 9. Menampilkan hasil pangkat keempat
     cout << "   " << bilanganBasis << "        " << bilanganPangkat << "        " << hasilPangkat
          << endl
          << endl;

     // 10. mengkalkulasi nilai kelima
     bilanganBasis = 3.6;
     bilanganPangkat = 2.5;
     hasilPangkat = pow(bilanganBasis, bilanganPangkat);

     // 11. Menampilkan hasil pangkat kelima
     cout << "   " << bilanganBasis << "      " << bilanganPangkat << "        " << hasilPangkat
          << endl
          << endl
          << " =================================================";

     return 0;
}

/*

    Liang. 2014. Introduction to Programming with C++ 3rd Edition.
    London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/