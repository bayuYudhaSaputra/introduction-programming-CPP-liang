#include <iostream>
#include <cmath>

/*
    =====================================================================================
    03.20. Geometry: point in a rectangle?
    by   : #bayuyudhasaputra
    lang : IDN (Bahasa Indonesia)
    -------------------------------------------------------------------------------------
    Masalah :
    Tuliskan suatu program yang menawarkan prompt kepada pengguna untuk menginput 
    titik (x, y). Kemudian, program akan mengecek apakah titik yang diinput ini di dalam, 
    pada atau di luar persegi panjang dengan titik pusat di (0, 0) dengan tinggi 5 
    dan lebar 10.

    ======================================================================================
*/
int main()
{
    double x1 = 0,
           y1 = 0, 
           jarakHorizontal = 0, 
           jarakVertikal = 0;

    // 1. Input absis titik
    std::cout << "Input absis titik : ";
    std::cin >> x1;
    std::cout << std::endl;

    // 2. Input ordinat titik
    std::cout << "Input ordinat titik : ";
    std::cin >> y1;
    std::cout << std::endl;

    // 3. Tampilkan titik
    std::cout << "Titik yang diinput "
              << "(" << x1 << "," << y1 << ")."
              << std::endl;

    // 4. Hitung jarak Horizontal
    jarakHorizontal = std::abs(x1 - 0);

    // 5. Hitung jarak vertikal
    jarakVertikal = std::abs(y1 - 0);

    // 6. Cek nilai jarak horizontal dan vertikal
    if (jarakHorizontal < 10/2 &&
        jarakVertikal < 5/2)
    {
        std::cout << "Titik "
                  << "( " << x1 << "," << y1 << ") "
                  << "terletak di dalam persegi panjang dengan panjang 5, lebar 10 dan titik pusat O"
                  << std::endl;
    }
    else if (jarakHorizontal == 10/2 ||
             jarakVertikal == 5/2)
    {
        std::cout << "Titik "
                  << "( " << x1 << "," << y1 << ") "
                  << "terletak pada sisi persegi panjang dengan panjang 5, lebar 10 dan titik pusat O"
                  << std::endl;
    }
    else
    {
         std::cout << "Titik "
                  << "( " << x1 << "," << y1 << ") "
                  << "terletak di luar persegi panjang dengan panjang 5, lebar 10 dan titik pusat O"
                  << std::endl;
    }
    
    return 0;
}

/*

    Liang. 2014. Introduction to Programming with C++ 3rd Edition.
    London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/