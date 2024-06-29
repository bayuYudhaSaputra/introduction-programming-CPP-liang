#include <iostream>
#include <ctime>
#include <cstdlib>

/*
    =====================================================================================
    03.14. Game : Prediction 
    by   : #bayuyudhasaputra
    lang : IDN (Bahasa Indonesia)
    -------------------------------------------------------------------------------------
    Masalah :
    Tulis suatu program yang membangkitkan bilangan acak dua digit. Program ini menawarkan 
    prompt kepada pengguna untuk memprediksi bilangan acak yang dibangkitkan sebelumnya. 
    Kemudian, program menilai akurasi tebakan pengguna berdasarkan aturan berikut:
    Jika pengguna menebak kedua digit bilangan maka tingkat akurasinya 100%. 
    Jika pengguna menebak satu digit bilangan saja maka tingkat akurasinya 50%. 
    Jika tidak ada satupun bilangan yang benar maka tingkat akurasinya 0%.

    ======================================================================================
*/

int main()
{
    // 1. Acak bilangan integer
    std::srand(time(0));
    unsigned short bilAcak = rand() % 100;
    
    
    // 2. Ekstrak puluhan dari bilAcak
    unsigned short bilAcakPuluhan = bilAcak / 10;

    // 3. Ekstrak satuan dari bilAcak
    unsigned short bilAcakSatuan = bilAcak % 10;

    // 4. Input bilangan integer
    unsigned short bilTebak;
    std::cout << "Input bilangan integer dua digit : ";
    std::cin >> bilTebak;

    // 5. Cek nilai bilTebak
    if (0 < bilTebak && bilTebak < 100)
    {
        // 6a. Tampilkan bilangan acak
        std::cout << "Bilangan acak : " << bilAcak << std::endl;

        // 7. Ektrak puluhan bilTebak
        unsigned short bilTebakPuluhan = bilTebak / 10;

        // 8. Ekstrak satuan bilTebak
        unsigned short bilTebakSatuan = bilTebak % 10;

        // 9. Definisikan variabel akurasi
        unsigned short akurasi;

        // 10. Bandingkan nilai bilAcak dengan bilTebak
        if ((bilAcakPuluhan == bilTebakPuluhan) && (bilAcakSatuan == bilTebakSatuan))
        {
            // kedua digit bilangan sama
            akurasi = 100;
        }
        else if ((bilAcakPuluhan == bilTebakSatuan) && (bilAcakSatuan == bilTebakPuluhan))
        {
            // kedua digit bilangan sama
            akurasi = 100;
        }
        else if ((bilAcakPuluhan != bilTebakPuluhan) && (bilAcakSatuan == bilTebakSatuan))
        {
            // hanya satu digit yang sama
            akurasi = 50;
        }
        else if ((bilAcakPuluhan == bilTebakPuluhan) && (bilAcakSatuan != bilTebakSatuan))
        {
            // hanya satu digit yang sama
            akurasi = 50;
        }
        else if ((bilAcakPuluhan != bilTebakSatuan) && (bilAcakSatuan == bilTebakPuluhan))
        {
            // hanya satu digit yang sama
            akurasi = 50;
        }
        else if ((bilAcakPuluhan == bilTebakSatuan) && (bilAcakSatuan != bilTebakPuluhan))
        {
            // hanya satu digit yang sama
            akurasi = 50;
        }
        else
        {
            // tidak ada satu digitpun yang sama
            akurasi = 0;
        }

        // 11. Tampilkan akurasi jawaban
        std::cout << "Akurasi jawaban anda : " << akurasi << " %" << std::endl;
        
    }
    else
    {
        // 6b. Tampilkan pesan peringatan
        std::cout << "Pesan peringatan : Input bilangan dua digit saja." << std::endl;
    }
    
    return 0;
}

/*

    Liang. 2014. Introduction to Programming with C++ 3rd Edition.
    London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/