#include <iostream>
#include <cstdlib> // library srand() & rand()
#include <ctime> // library time()


/*
    =====================================================================================
    03.18. Game:Multiplication for four numbers
    by   : #bayuyudhasaputra
    lang : IDN (Bahasa Indonesia)
    -------------------------------------------------------------------------------------
    Masalah :
    Buatlah program yang membangkitkan 4 bilangan integer acak kurang dari 5.
    Kemudian, kalikan keempat bilangan ini. Program menawarkan prompt kepada pengguna 
    untuk menebak hasil perkalian. Program akan menampilkan pesan, baik ketika menebak 
    benar maupun salah.
    ======================================================================================
*/

int main()
{
    unsigned short bil1, bil2,
                   bil3, bil4,
                   jawaban, tebak;
    // 1. Acak bilangan 1
    srand(time(0));
    bil1 = rand() % 5;

    // 2. Acak bilangan 2
    bil2 = rand() % 5;

    // 3. Acak bilangan 3
    bil3 = rand() % 5;

    // 4. Acak bilangan 4
    bil4 = rand() % 5;

    // 5. Hitung hasil kali
    jawaban = bil1 * bil2 * bil3 * bil4;

    // 6. Ajukan pertanyaan
    std::cout << "Berapakah hasil dari "
              << bil1 << " x "
              << bil2 << " x "
              << bil3 << " x "
              << bil4 << " ? "
              << std::endl;
    
    // 7. Input tebakan
    std::cout << "Jawab : ";
    std::cin >> tebak;
    std::cout << std::endl;

    // 8. Cek input
    if(jawaban == tebak)
    {
        std::cout << "Selamat.. jawaban anda benar!"
                  << std::endl;
    }
    else
    {
        std::cout << "Maaf.. jawaban anda kurang tepat!"
                  << std::endl;
    }
    
    return 0;
}

/*

    Liang. 2014. Introduction to Programming with C++ 3rd Edition.
    London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/