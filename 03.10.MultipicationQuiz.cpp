#include <iostream>
#include <ctime>
#include<cstdlib>

/*
    =====================================================================================
    03.10. Game:Multiplication quiz
    by   : #bayuyudhasaputra
    lang : IDN (Bahasa Indonesia)
    -------------------------------------------------------------------------------------
    Masalah :
    Listing 3.4, SubtractionQuiz.cpp, randomly generates a subtraction question. 
    Revise the program to randomly generate a multiplication question with two integers 
    less than 50.
    ======================================================================================
*/

int main()
{
    // 1. Buat dua bilangan acak
    std::srand(std::time(0));
    unsigned short bilangan1 = std::rand() % 50;
    unsigned short bilangan2 = std::rand() % 50;

    // 2. kalikan bilangan1 dengan bilangan2
    unsigned int hasilKali = bilangan1 * bilangan2;

    // 3. Input jawaban
    unsigned int jawaban;
    std::cout << "Berapakah hasil dari "
              << bilangan1 << " x " << bilangan2 << " ? ";
    std::cin >> jawaban;
    std::cout << std::endl;

    // 4. Bandingkan jawaban dengan hasilKali
    std::cout << "Anda menjawab " << jawaban << std::endl;
    if (jawaban == hasilKali)
    {
        std::cout << "Jawaban anda benar" << std::endl;
    }
    else
    {
        std::cout << "Maaf.. Jawaban anda belum tepat." << std::endl;
    }
    
    return 0;
}

/*

    Liang. 2014. Introduction to Programming with C++ 3rd Edition.
    London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/