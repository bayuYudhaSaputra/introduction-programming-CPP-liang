#include <iostream>
#include <cmath>
// using namespace std;

/*
    ========================================================================
    02.19. Area Of Triangle
    by   : #bayuyudhasaputra
    lang : IDN (Bahasa Indonesia)
    ------------------------------------------------------------------------
    Masalah :
    Write a program that prompts the user to enter three points (x1,y1);
    (x2,y2); (x3,y3) of a triangle and displays its area.

    ==========================================================================
*/

int main()
{
    std::cout << " =============================================================== "
              << std::endl;

    // 1. Input absis titik pertama
    double absisTitik1;
    std::cout << " Input absis titik A (Misal. 1): ";
    std::cin >> absisTitik1;
    std::cout << std::endl;

    // 2. Input ordinat titik pertama
    double ordinatTitik1;
    std::cout << " Input ordinat titik A (Misal. 1) : ";
    std::cin >> ordinatTitik1;
    std::cout << std::endl;

    // 3. Tampilkan titik pertama
    std::cout << std::endl
              << " -------------------------------------------------------------- "
              << std::endl
              << " Anda menginput titik A"
              << "(" << absisTitik1 << " , " << ordinatTitik1 << ")"
              << std::endl
              << " -------------------------------------------------------------- "
              << std::endl;

    // 4. Input absis titik kedua
    double absisTitik2;
    std::cout << " Input absis titik B (Misal, 6) : ";
    std::cin >> absisTitik2;
    std::cout << std::endl;

    // 5. Input ordinat titik kedua
    double ordinatTitik2;
    std::cout << " Input ordinat titik B (Misal, 5) : ";
    std::cin >> ordinatTitik2;
    std::cout << std::endl;

    // 6. Tampilkan titik kedua
    std::cout << " -------------------------------------------------------------- "
              << std::endl
              << " Anda menginput titik B"
              << "(" << absisTitik2 << " , " << ordinatTitik2 << ")"
              << std::endl
              << " -------------------------------------------------------------- "
              << std::endl;

    // 7. Input absis titik ketiga
    double absisTitik3;
    std::cout << " Input absis titik C (Misal, 8) : ";
    std::cin >> absisTitik3;
    std::cout << std::endl;

    // 8. Input ordinat titik ketiga
    double ordinatTitik3;
    std::cout << " Input ordinat titik C (Misal, 2) : ";
    std::cin >> ordinatTitik3;
    std::cout << std::endl;

    // 9. Tampilkan titik ketiga
    std::cout << " -------------------------------------------------------------- "
              << std::endl
              << " Anda menginput titik C"
              << "(" << absisTitik3 << " , " << ordinatTitik3 << ")"
              << std::endl;

    // 10. Tentukan jarak titik 1 dengan 2
    double jarakTitik1Dan2;
    jarakTitik1Dan2 = pow(pow((absisTitik2 - absisTitik1), 2) + pow((ordinatTitik2 - ordinatTitik1), 2), 0.5);

    // 11. Tampilkan jarak titik 1 dan 2
    std::cout << " =============================================================== "
              << std::endl
              << " Panjang sisi AB adalah "
              << jarakTitik1Dan2 << " satuan panjang."
              << std::endl;
    
    // 12. Tentukan jarak titik 1 dengan 3
    double jarakTitik1Dan3;
    jarakTitik1Dan3 = pow(pow((absisTitik3 - absisTitik1), 2) + pow((ordinatTitik3 - ordinatTitik1),2), 0.5);

    // 13. Tampilkan jarak titik 1 dengan 3
    std::cout << " Panjang sisi AC adalah "
              << jarakTitik1Dan3 << " satuan panjang."
              << std::endl;
    
    // 14. Tentukan jarak titik 2 dengan 3
    double jarakTitik2Dan3;
    jarakTitik2Dan3 = pow(pow((absisTitik3 - absisTitik2), 2) + pow((ordinatTitik3 - ordinatTitik2), 2), 0.5);

    // 15. Tampilkan jarak titik 2 dengan 3
    std::cout << " Panjang sisi BC adalah "
              << jarakTitik2Dan3 << " satuan panjang."
              << std::endl;
    
    // 16. Tentukan setengah keliling
    double setengahKeliling;
    setengahKeliling = (jarakTitik1Dan2 + jarakTitik1Dan3 + jarakTitik2Dan3) / 2;

    // 17. Tentukan luas segitiga
    double luas;
    luas = pow((setengahKeliling
                                * (setengahKeliling - jarakTitik1Dan2) 
                                * (setengahKeliling - jarakTitik1Dan3) 
                                * (setengahKeliling - jarakTitik2Dan3)), 0.5);

    // 18. Tampilkan luas segitiga
    std::cout << " Luas segitiga ABC adalah "
              << luas
              << " satuan luas."
              << std::endl
              << " =============================================================== ";

    return 0;
}

/*

    Liang. 2014. Introduction to Programming with C++ 3rd Edition.
    London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/