#include <iostream>

/*
    =====================================================================================
    03.04. Check The Speed
    by   : #bayuyudhasaputra
    lang : IDN (Bahasa Indonesia)
    -------------------------------------------------------------------------------------
    Masalah :
    Write a program that prompts the user to enter the speed of a vehicle. 
    If speed is less than 20, display too slow; if speed is greater than 80, 
    display too fast; otherwise, display just right.
    ======================================================================================
*/

int main()
{
    // 1. Input kecepatan
    double kecepatan;
    std::cout << " Input kecepatan (Misal. 12.0) : ";
    std::cin >> kecepatan;
    std::cout << std::endl;

    // 2. Cek kecepatan
    if (kecepatan < 0)
    {
        std::cout << " Kecepatan tidak boleh negatif";
    }
    else if (0 <= kecepatan && kecepatan < 20)
    {
        std::cout << " Kecepatan " << kecepatan << " mph terlalu rendah.";
    }
    else if (20 <= kecepatan && kecepatan < 80)
    {
        std::cout << " Kecepatan " << kecepatan << " mph sudah sesuai.";
    }
    else
    {
        std::cout << " Kecepatan " << kecepatan << " mph terlalu tinggi.";
    }
    
    std::cout << std::endl;
    return 0;
}


/*

    Liang. 2014. Introduction to Programming with C++ 3rd Edition.
    London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/