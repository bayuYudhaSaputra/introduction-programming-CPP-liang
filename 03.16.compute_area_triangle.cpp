#include <iostream>
#include <cmath>

/*
    =====================================================================================
    03.16. Game: scissor, rock, paper
    by   : #bayuyudhasaputra
    lang : IDN (Bahasa Indonesia)
    -------------------------------------------------------------------------------------
    Masalah :
    Tuliskan suatu program yang membaca 3 bilangan yang merepresentasikan panjang sisi
    segitiga. Kemudian, hitung luas segitiga jika ketiga input ini valid. Sebaliknya, 
    program juga menampilkan pesan peringatan ketika input tidak valid. Input dikatakan 
    valid jika ketiga nilainya sama.
    ======================================================================================
*/

int main()
{
    // 1. Input sisi-sisi segitiga
    double sisi1, sisi2, sisi3;
    std::cout << "Input sisi-sisi segitiga sama sisi." << std::endl;
    std::cout << "Sisi 1 : ";
    std::cin >> sisi1;
    std::cout << std::endl;
    std::cout << "Sisi 2 : ";
    std::cin >> sisi2;
    std::cout << std::endl;
    std::cout << "Sisi 3 : ";
    std::cin >> sisi3;
    std::cout << std::endl;

    // 2. Cek sisi-sisi segitiga
    if((sisi1 > 0) && (sisi2 > 0) && (sisi3 > 0))
    {
        if (sisi1 == sisi2 && sisi2 == sisi3)
        {
            // 3. Hitung luas segitiga
            double luas = (pow(sisi1, 2) / 4) * pow(3, 1/2);

            // 4. Tampilkan luas
            std::cout << "Luas segitiga dengan panjang sisi "
                      << sisi1 << " , "
                      << sisi2 << " , dan "
                      << sisi3 << " adalah "
                      << luas << " satuan luas."
                      << std::endl;
        }
        else
        {
            // 3. Tampilkan pesan peringatan
            std::cout << "Sisi yang diinput bukan sisi-sisi segitiga sama sisi."
                      << std::endl;
        }
        
    }
    else
    {
        // 3. Tampilkan pesan peringatan
        std::cout << "Pesan peringatan : Input bilangan positif."
                  << std::endl;
    }

    return 0;
}

/*

    Liang. 2014. Introduction to Programming with C++ 3rd Edition.
    London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/