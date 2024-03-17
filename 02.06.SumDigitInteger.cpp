#include <iostream>
using namespace std;

/*
    =====================================================
    02.06. Sum the digits in an integer
    By   : Putra
    Lang : idn (Indonesia)
    -----------------------------------------------------
    Masalah :
   
    Tuliskan program yang membaca bilangan mulai dari
    0 hingga 1000. Kemudian, digit-digit bilangan ini
    dijumlahkan. Misal, pengguna menginput bilangan
    932 maka program akan menampilkan jumlah digit-
    digit bilangan ini ( 9 + 3 + 2 ), yaitu 14.

    Petunjuk: Gunakan operator % untuk mengekstrak
    digit-digit bilangan ini. Dan, gunakan operator /
    untuk menghilangkan digit yang telah diekstrak.
    Misal, 932 % 10 = 2 dan 932 / 10 = 93.

    ===================================================== 
*/

int main() {
    cout << endl 
         <<"======================================================="
         << endl
         << endl
         << "02.06. Sum the digits in an integer"
         << endl
         << endl
         << "-------------------------------------------------------"
         << endl;
    
    // 1. Input bilangan integer dalam rentang 0 hingga 1000
    cout << "Input bilangan antara 0 hingga 1000 (Misal, 932) : ";
    // int non-negatif dengan rentang lebih pendek.
    unsigned short bilangan; 
    cin >> bilangan;

    // 2. Mengekstrak satuan bilangan ini
    unsigned short satuan;
    unsigned short sisaBilangan;
    satuan = bilangan % 10;
    sisaBilangan =  bilangan / 10;

    // 3. Mengekstrak puluhan bilangan
    unsigned short puluhan;
    puluhan = sisaBilangan % 10;
    sisaBilangan = sisaBilangan / 10;

    // 4. Mengekstrak ratusan bilangan
    unsigned short ratusan;
    ratusan = sisaBilangan % 10;
    sisaBilangan = sisaBilangan / 10;

    // 5. Menampilkan jumlah digit
    unsigned short jumlahDigit = ratusan + puluhan + satuan;
    cout << "Anda menginput bilangan " << bilangan << endl;
    
    cout << "Jadi, jumlah digit bilangan " << bilangan 
         << " adalah " << endl
         << "(" << ratusan << " + " << puluhan << " + " << satuan << " )"
         << endl
         << " = " << jumlahDigit << ". "
         << endl
         << "======================================================="
         << endl 
         << endl;

    return 0;
}

/*

    Liang. 2014. Introduction to Programming with C++ 3rd Edition.
    London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/