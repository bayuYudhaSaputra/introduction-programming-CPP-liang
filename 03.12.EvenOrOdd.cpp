#include <iostream>
#include <cstdlib> // untuk fungsi srand() dan rand()
#include <ctime>   // unntuk fungsi time()

/*
    =====================================================================================
    03.12. Game : Even Or Odd 
    by   : #bayuyudhasaputra
    lang : IDN (Bahasa Indonesia)
    -------------------------------------------------------------------------------------
    Masalah :
    Write a program that lets the user guess whether a randomly generated integer would be 
    even or odd. The program randomly generates an integer and divides it by 2. 
    The integer is even if the remainder is 0, otherwise odd. The program prompts the user 
    to enter a guess and reports whether the guess is correct or incorrect.

    ======================================================================================
*/

int main()
{
    // 1. Buat bilangan integer acak
    srand(time(0));
    unsigned short bilangan = rand();

    // 2. Input jawaban
    std::cout << "Diantara pilihan 1 dan 2, Pilihlah jawaban yang anda anggap paling benar!"
              << std::endl
              << std::endl    
              << "Bilangan " << bilangan << " termasuk bilangan .... "
              << std::endl
              << "1. genap"
              << std::endl
              << "2. ganjil"
              << std::endl
              << std::endl
              << "Jawab : ";
    unsigned short jawaban;
    std::cin >> jawaban;
    std::cout << std::endl << std::endl;

    // 4. Hitung cekModulo
    unsigned short cekModulo = bilangan % 2;

    // 5. Cek cekModulo dan jawaban
    if (cekModulo == 0 && jawaban == 1)
    {
        std::cout << "Jawaban anda benar." << std::endl;
    }
    else if (cekModulo == 0 && jawaban == 2)
    {
        std::cout << "Jawaban anda salah." << std::endl;
    }
    else if (cekModulo != 0 && jawaban == 1)
    {
        std::cout << "Jawaban anda salah." << std::endl;
    }
    else if (cekModulo != 0 && jawaban == 2)
    {
        std::cout << "Jawaban anda benar." << std::endl;
    }
    else
    {
        std::cout << "Pesan peringatan : Anda hanya bisa menginput jawaban 1 atau 2 saja!"
                  << std::endl;
    }
    
    return 0;
}

/*

    Liang. 2014. Introduction to Programming with C++ 3rd Edition.
    London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/