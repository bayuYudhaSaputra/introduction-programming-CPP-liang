#include <iostream>

/*
    =====================================================================================
    03.08. Comparing Integers
    by   : #bayuyudhasaputra
    lang : IDN (Bahasa Indonesia)
    -------------------------------------------------------------------------------------
    Masalah :
    Write a program that prompts the user to enter the edges of a triangle and compares 
    them. If all edges are equal, display Equilateral Triangle; if only two edges are 
    equal, display Isosceles Triangle and if none of the edges are equal, 
    display Scalene Triangle.

    ======================================================================================
*/

int main()
{
    // 1. Input panjang sisi segitiga
    double sisi1, sisi2, sisi3;
    std::cout << " Input panjang sisi pertama segitiga : ";
    std::cin >> sisi1;

    std::cout << " Input panjang sisi kedua segitiga : ";
    std::cin >> sisi2;

    std::cout << " Input panjang sisi ketiga segitiga : ";
    std::cin >> sisi3;

    // 2. Cek input dari pengguna
    if (sisi1 > 0 &&
        sisi2 > 0 &&
        sisi3 > 0)
    {
        // 3. Cek kesamaan panjang sisi segitiga dan tampilkan hasilnya.
        std::cout << " Segitiga dengan panjang sisi, "
                  << sisi1 << ", "
                  << sisi2 << ", dan "
                  << sisi3;

        // Semua panjang sisi sama
        if ((sisi1 == sisi2) &&
            (sisi1 == sisi3))
        {
            std::cout << " adalah segitiga samasisi." << std::endl;
        }
        // Panjang dua sisi sama
        else if ((sisi1 == sisi2) ||
                 (sisi1 == sisi3) ||
                 (sisi2 == sisi3)
                )
        {
            std::cout << " adalah segitiga samakaki." << std::endl;
        }
        // Panjang sisi tidak ada yang sama.
        else
        {
            std::cout << " adalah segitiga sembarang." << std::endl;
        }
        
    }
    else
    {
        // 3. Tampilkan pesan peringatan
        std::cout << "Peringatan : Input bilangan positif saja." << std::endl;
    }

    return 0;
}

/*

    Liang. 2014. Introduction to Programming with C++ 3rd Edition.
    London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/