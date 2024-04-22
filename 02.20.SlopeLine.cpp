#include <iostream>

/*
    ========================================================================
    02.20. Slop Of A Line
    by   : #bayuyudhasaputra
    lang : IDN (Bahasa Indonesia)
    ------------------------------------------------------------------------
    Masalah :
    Write a program that prompts the user to enter the coordinates of two
    points (x1, y1) and (x2, y2), and displays the slope of the line that
    connects the two points. The formula of the slope is (y2 - y1)/(x2 - x1).

    ==========================================================================
*/

int main()
{
    std::cout << std::endl
              << " ============================================================ "
              << std::endl;
    // 1. Input absis titik pertama
    std::cout << " Input absis titik A (Misal. 4.5) : ";
    double absisTitik1;
    std::cin >> absisTitik1;
    std::cout << std::endl;

    // 2. Input ordinat titik pertama
    std::cout << " Input ordinat titik A (Misal. -5.5) : ";
    double ordinatTitik1;
    std::cin >> ordinatTitik1;
    std::cout << std::endl;

    // 3. Tampilkan titik pertama
    std::cout << " ----------------------------------------------------------- "
              << std::endl
              << "    Anda menginput titik A"
              << "(" << absisTitik1 << " , " << ordinatTitik1 << ")"
              << std::endl
              << " ----------------------------------------------------------- "
              << std::endl;

    // 4. Input absis titik kedua
    std::cout << " Input absis titik B (Misal, 6.6) : ";
    double absisTitik2;
    std::cin >> absisTitik2;
    std::cout << std::endl;

    // 5. Input ordinat titik kedua
    std::cout << " Input ordinat titik kedua (Misal, -6.5) : ";
    double ordinatTitik2;
    std::cin >> ordinatTitik2;
    std::cout << std::endl;

    // 6. Tampilkan titik kedua
    std::cout << " ----------------------------------------------------------- "
              << std::endl
              << "    Anda menginput titik B"
              << "(" << absisTitik2 << " , " << ordinatTitik2 << ")"
              << std::endl
              << " ----------------------------------------------------------- "
              << std::endl;

    // 7. Hitung gradien garis
    double gradien;
    gradien = (ordinatTitik2 - ordinatTitik1) / (absisTitik2 - absisTitik1);

    // 8. Tampilkan gradien garis
    std::cout << " Gradien garis AB adalah " << gradien 
              << std::endl
              << " ============================================================ "
              << std::endl;

    return 0;
}

/*

    Liang. 2014. Introduction to Programming with C++ 3rd Edition.
    London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/