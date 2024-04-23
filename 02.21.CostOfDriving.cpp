#include <iostream>

/*
    =====================================================================================
    02.21. Cost Of Driving
    by   : #bayuyudhasaputra
    lang : IDN (Bahasa Indonesia)
    -------------------------------------------------------------------------------------
    Masalah :
    Write a program that prompts the user to enter the distance to drive, the 
    fuel efficiency of the car in miles per gallon, and the price per gallon, 
    and displays the cost of the trip.

    ======================================================================================
*/

int main()
{
    std::cout << std::endl
              << " ======================================================================== "
              << std::endl;

    // 1. Input jarak tempuh
    std::cout << " Input jarak tempuh dalam satuan mil (Misal, 900.5) : ";
    double jarakTempuh;
    std::cin >> jarakTempuh;
    std::cout << std::endl;

    // 2. Input efisiensi bahan bakar
    std::cout << " Input efisiensi bahan bakar dalam satuan mil per galon (Misal. 25.5) : ";
    double efisiensi;
    std::cin >> efisiensi;
    std::cout << std::endl;

    // 3. Input harga bahan bakar per galon
    std::cout << " Input harga bahan bakar per galon (Misal. 3.55) : ";
    double hargaBahanBakar;
    std::cin >> hargaBahanBakar;
    std::cout << std::endl;

    // 4. Hitung biaya total
    double biayaTotal;
    biayaTotal = (jarakTempuh / efisiensi) * hargaBahanBakar;

    // 5. Tampilkan biaya total
    std::cout << " ------------------------------------------------------------------------ "
              << std::endl
              << " Biaya total untuk membeli bahan bakar adalah USD."
              << biayaTotal
              << std::endl
              << " ======================================================================== ";

    return 0;
}

/*

    Liang. 2014. Introduction to Programming with C++ 3rd Edition.
    London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/