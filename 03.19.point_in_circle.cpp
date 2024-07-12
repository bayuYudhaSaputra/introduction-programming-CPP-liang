#include <iostream>
#include <cmath>

/*
    =====================================================================================
    03.19. Geometry: point in a circle?
    by   : #bayuyudhasaputra
    lang : IDN (Bahasa Indonesia)
    -------------------------------------------------------------------------------------
    Masalah :
    Tuliskan program yang meminta pengguna untuk menginput suatu titik (x, y). 
    Kemudian, titik (x, y) ini dibandingkan dengan lingkaran yang berpusat di titik (0, 0) 
    dan jari-jari 10 satuan. Program akan menampilkan pesan apakah titik ini berada 
    di dalam, pada atau di luar lingkaran tersebut.

    ======================================================================================
*/

int main()
{
    double x1 = 0, y1 = 0;
    // 1. Input absis titik
    std::cout << "Input absis : ";
    std::cin >> x1;
    std::cout << std::endl;

    // 2. Input ordinat titik
    std::cout << "Input ordinat : ";
    std::cin >> y1;
    std::cout << std::endl;

    // 3. Cek lingkaran
    if((pow(x1, 2) + pow(y1, 2)) < pow(10, 2))
    {
        std::cout << "Titik "
                  << "( " << x1 << " , " << y1 << " ) "
                  << "terletak di dalam lingkaran."
                  << std::endl;
    }
    else if((pow(x1, 2) + pow(y1, 2)) > pow(10, 2))
    {
        std::cout << "Titik "
                  << "( " << x1 << " , " << y1 << " ) "
                  << "terletak di luar lingkaran."
                  << std::endl;
    }
    else
    {
        std::cout << "Titik "
                  << "( " << x1 << " , " << y1 << " ) "
                  << "terletak pada lingkaran."
                  << std::endl;
    }
    
    return 0;
}

/*

    Liang. 2014. Introduction to Programming with C++ 3rd Edition.
    London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/