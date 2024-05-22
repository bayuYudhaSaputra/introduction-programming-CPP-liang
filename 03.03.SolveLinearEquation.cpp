#include <iostream>

/*
    =====================================================================================
    03.03. Solve Linear Equation
    by   : #bayuyudhasaputra
    lang : IDN (Bahasa Indonesia)
    -------------------------------------------------------------------------------------
    Masalah :
    Write a program that prompts the user to enter a, b, c, d, e, and f, and displays 
    the result. If ad - bc is 0, report that “The equation has no solution.”
    ======================================================================================
*/

int main()
{
    // 1. Input koefisien dan konstanta sistem persamaan linear
    double koefx1, koefy1, konstanta1,
           koefx2, koefy2, konstanta2;
    
    std::cout << " Input koefisien absis persamaan linear pertama : ";
    std::cin >> koefx1;
    std::cout << std::endl;

    std::cout << " Input koefisien ordinat persamaan linear pertama : ";
    std::cin >> koefy1;
    std::cout << std::endl;

    std::cout << "Input konstanta persamaan linear pertama : ";
    std::cin >> konstanta1;
    std::cout << std::endl;

    std::cout << " Input koefisien absis persamaan linear kedua : ";
    std::cin >> koefx2;
    std::cout << std::endl;

    std::cout << " Input koefisien ordinat persamaan linear kedua : ";
    std::cin >> koefy2;
    std::cout << std::endl;

    std::cout << " Input konstanta persamaan linear kedua : ";
    std::cin >> konstanta2;
    std::cout << std::endl;

    // 2. Tampilkan sistem persamaan linear
    std::cout << " Persamaan linear pertama adalah : " 
              << koefx1 << "x + " << "( " << koefy1 << ") = " << konstanta1
              << std::endl;
    
    std::cout << " Persamaan linear kedua adalah : " 
              << koefx2 << "x + " << "( " << koefy2 << ") = " << konstanta2
              << std::endl; 

    // 3. Cek penyebut Aturan Cramer (koefx1 * koefy2 - koefy1 * koefx2)
    if (koefx1 * koefy2 - koefy1 * koefx2 == 0)
    {
        // 4. cek pembagi Aturan Cramer
        if ((konstanta1 * koefy2 - konstanta2 * koefy1 == 0) || 
            (koefx1 * konstanta2 - koefx2 * konstanta1 == 0))
        {
            // 5. Tampilkan pesan peringatan
            std::cout << " Peringatan : Penyelesaian sistem persamaan linear tidak tunggal."
                      << std::endl;
        }
        else
        {
            // 5. Tampilkan pesan peringatan
            std::cout << " Peringatan : Sistem persamaan liear tidak mempunyai penyelesaian"
                      << std::endl;
        }  
    }
    else
    {
        // 4. Hitung penyelesaian x
        double penyelesaianX = (konstanta1 * koefy2 - konstanta2 * koefy1) /
                               (koefx1 * koefy2 - koefy1 * koefx2);

        // 5. Hitung penyelesaian y
        double penyelesaianY = (koefx1 * konstanta2 - koefx2 * konstanta1) /
                               (koefx1 * koefy2 - koefx1 * koefx2);

        // 6. Tampilkan penyelesaian
        std::cout << " Penyelesaian sistem persamaan linear adalah ("
                  << penyelesaianX << " , " << penyelesaianY << ")"
                  << std::endl;
    }

    return 0;
}

/*

    Liang. 2014. Introduction to Programming with C++ 3rd Edition.
    London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/