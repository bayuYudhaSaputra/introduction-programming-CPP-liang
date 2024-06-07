#include <iostream>

/*
    =====================================================================================
    03.09. Display the day and remaining hours
    by   : #bayuyudhasaputra
    lang : IDN (Bahasa Indonesia)
    -------------------------------------------------------------------------------------
    Masalah :
    Write a program that prompts the user to enter the day number of a week and hours 
    passed, and displays the day and remaining hours. For example, if the user entered 
    day number 1 and hours passed 20, the program should display Today is Sunday and 
    Remaining Hours: 4. If the user entered day number 7 and hours passed 2, the program 
    should display Today is Saturday and Remaining Hours 22.

    ======================================================================================
*/

int main()
{
    unsigned short indeksHariIni, lamaJam;
    // 1. Input indeks hari ini
    std::cout << "Indeks nama-nama hari," << std::endl
              << "\t 1 : \t \"Minggu\""   << std::endl
              << "\t 2 : \t \"Senin\""    << std::endl
              << "\t 3 : \t \"Selasa\""   << std::endl
              << "\t 4 : \t \"Rabu\""     << std::endl
              << "\t 5 : \t \"Kamis\""    << std::endl
              << "\t 6 : \t \"Jum\'at\""  << std::endl
              << "\t 7 : \t \"Sabtu\""    << std::endl;
    std::cout << "Input indeks hari ini : ";
    std::cin >> indeksHariIni;
    std::cout << std::endl;

    // 2. Input "sudah berlangsung berapa jam hari ini?"
    std::cout << "Sudah berlangsung berapa jam untuk hari ini? ";
    std::cin >> lamaJam;
    std::cout << std::endl;

    // 3. Cek nilai lamaJam
    if ((0 <= lamaJam) && (lamaJam <= 24))
    {
        unsigned short sisaHariIni;
        sisaHariIni = 24 - lamaJam;
        switch (indeksHariIni)
        {
        case 1:
            std::cout << "Hari ini adalah hari Minggu"
                      << " dan tersisa "
                      << sisaHariIni
                      << " jam lagi."
                      << std::endl;
            break;
        
        case 2:
            std::cout << "Hari ini adalah hari Senin"
                      << " dan tersisa "
                      << sisaHariIni
                      << " jam lagi."
                      << std::endl;
            break;
        case 3:
            std::cout << "Hari ini adalah hari Selasa"
                      << " dan tersisa "
                      << sisaHariIni
                      << " jam lagi."
                      << std::endl;
            break;
        case 4:
            std::cout << "Hari ini adalah hari Rabu"
                      << " dan tersisa "
                      << sisaHariIni
                      << " jam lagi."
                      << std::endl;
            break;
        case 5:
            std::cout << "Hari ini adalah hari Kamis"
                      << " dan tersisa "
                      << sisaHariIni
                      << " jam lagi."
                      << std::endl;
            break;
        case 6:
            std::cout << "hari ini adalah hari Jum\'at"
                      << " dan tersisa "
                      << sisaHariIni
                      << " jam lagi."
                      << std::endl;
            break;
        case 7:
            std::cout << "Hari ini adalah hari Sabtu"
                      << " dan tersisa "
                      << sisaHariIni
                      << " jam lagi."
                      << std::endl;
            break;
        default:
            std::cout << "Peringatan : Input indeks hari ini dengan bilangan 1 hingga 7"
                      << std::endl;
            break;
        }
    }
    else
    {
        std::cout << "Pesan peringatan : Input tidak kurang dari 0 atau tidak lebih dari 24" 
                  << std::endl;
    }
    
    return 0;
}


/*

    Liang. 2014. Introduction to Programming with C++ 3rd Edition.
    London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/