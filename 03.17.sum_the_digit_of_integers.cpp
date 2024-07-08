#include <iostream>

/*
    =====================================================================================
    03.17. Sum the digits in an integer
    by   : #bayuyudhasaputra
    lang : IDN (Bahasa Indonesia)
    -------------------------------------------------------------------------------------
    Masalah :
    Buatlah program yang meminta input 3 digit bilangan integer. Program akan menampilkan
    jumlah angka-angka ratusan, puluhan dan satuan dari bilangan integer ini jika 
    dinyatakan valid. Input dikatakan valid ketika pengguna benar-benar menginput bilangan 
    ratusan. Jika input dianggap valid maka program akan menampilkan hasil penjumlahan ini. 
    Jika input dianggap tidak valid maka program akan menampilkan pesan peringatan.

    ======================================================================================
*/

int main()
{
    // 1. Input bilangan 3 digit
    std::cout << "Input bilangan ratusan (Mis. 314) : ";
    unsigned short bilangan = 1;
    std::cin >> bilangan;
    std::cout << std::endl;

    // 2. Cek input
    if (100 <= bilangan && bilangan < 1000)
    {
        unsigned short digitRatusan, digitPuluhan, digitSatuan, sisaRatusan, jumlah;
        
        // 3. Ambil angka ratusan
        digitRatusan = bilangan / 100;
        sisaRatusan = bilangan % 100;

        // 4. Ambil angka puluhan
        digitPuluhan = sisaRatusan / 10;

        // 5. Ambil angka satuan
        digitSatuan = sisaRatusan % 10;

        // 6. Jumlahkan digit-digit
        jumlah = digitRatusan + digitPuluhan + digitSatuan;

        std::cout << "Ratusan : " << digitRatusan << std::endl
                  << "Puluhan : " << digitPuluhan << std::endl
                  << "Satuan : "  << digitSatuan  << std::endl
                  << "Jumlah : "  << jumlah       << std::endl;
    }
    else
    {
        std::cout << "Pesan peringatan : Input bilangan tiga digit."
                  << std::endl;
    }
    
    return 0;
}

/*

    Liang. 2014. Introduction to Programming with C++ 3rd Edition.
    London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/