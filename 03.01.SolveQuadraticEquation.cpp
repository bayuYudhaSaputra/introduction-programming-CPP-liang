#include <iostream>
#include <cmath>

/*
    =====================================================================================
    03.01. Solve Quadratic Equation
    by   : #bayuyudhasaputra
    lang : IDN (Bahasa Indonesia)
    -------------------------------------------------------------------------------------
    Masalah :
    Write a program that prompts the user to enter values for a, b, and c and displays 
    the result based on the discriminant. If the discriminant is positive, display two 
    roots. If the discriminant is 0, display one root. Otherwise, display 
    “The equation has no real roots.”
    ======================================================================================
*/
int main()
{
    // 1. input koefisien x kuadrat dan x serta konstanta
    double koefisienX2, koefisienX, konstanta;
    std::cout << "Input koefisien x^2 (Misal. 1.0) : ";
    std::cin >> koefisienX2;
    std::cout << std::endl;

    std::cout << "Input koefisien x (Misal, 5.0) : ";
    std::cin >> koefisienX;
    std::cout << std::endl;

    std::cout << "Input konstanta (Misal, 6.0) : ";
    std::cin >> konstanta;
    std::cout << std::endl;
    
    // 2. Periksa koefisien x^2
    if (koefisienX2 == 0)
    {
        // 3. Tampilkan pesan error
        std::cout << "Warning : Koefisien x^2 tidak boleh 0." << std::endl;
    }
    else
    {
        // 3. Tampilkan persamaan kuadrat
        std::cout << "Persamaan kuadrat yang anda input adalah : "
                  << koefisienX2 << " x^2 + " << koefisienX << " x + " << konstanta << " = 0 "
                  << std::endl;
        
        // 4. Hitung determinan
        double diskriminan = pow(koefisienX, 2) - 4 * koefisienX2 * konstanta;

        // 5. Periksa determinan
        if (diskriminan < 0)
        {
            //6. Tampilkan pesan 
            std::cout << "Warning : Persamaan kuadrat "
            << koefisienX2 << " x^2 + " << koefisienX << " x + " << konstanta << " = 0 "
            << " tidak mempunyai akar real."
            << std::endl;

        }
        else if (diskriminan == 0)
        {
            // 6. Hitung akar persamaan kuadrat
            double akar = - koefisienX / (2 * koefisienX2);
            
            // 7. Tampilkan akar persamaan kuadrat
            std::cout << "Persamaan kuadrat "
            << koefisienX2 << " x^2 + " << koefisienX << " x + " << konstanta << " = 0 "
            << " mempunyai 1 akar real, yaitu " << akar
            << std::endl;
        }
        else
        {
            //6 . Hitung akar-akar persamaan kuadrat
            double akar1 = - (koefisienX + pow(diskriminan, 0.5)) / (2 * koefisienX2);
            double akar2 = - (koefisienX - pow(diskriminan, 0.5)) / (2 * koefisienX2);

            //7. Tampilkan akar-akar persamaan kuadrat
            std::cout << "Persamaan kuadrat "
            << koefisienX2 << " x^2 + " << koefisienX << " x + " << konstanta << " = 0 "
            << " mempunyai 2 akar real, yaitu " << akar1 << " atau " << akar2
            << std::endl;

        }
    }

    return 0;
}

/*

    Liang. 2014. Introduction to Programming with C++ 3rd Edition.
    London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/