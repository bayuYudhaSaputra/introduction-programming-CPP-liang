#include <iostream>

/*
    ==================================================================
    03.07. Sort Three Integers
    by   : #bayuyudhasaputra
    lang : IDN (Bahasa Indonesia)
    ------------------------------------------------------------------
    Masalah :
    Write a program that prompts the user to enter 
    three integers and display the integers in non-decreasing order.

    ==================================================================
*/

int main()
{
    // 1. Input tiga bilangan
    int bilangan1, bilangan2, bilangan3;
    std::cout << "Input bilangan bulat pertama : ";
    std::cin >> bilangan1;
    std::cout << std::endl;

    std::cout << "Input bilangan bulat kedua : ";
    std::cin >> bilangan2;
    std::cout << std::endl;

    std::cout << "Input bilangan bulat ketiga : ";
    std::cin >> bilangan3;
    std::cout << std::endl;

    // 2. Cek input dan tampilkan hasilnya
    std::cout << "Urutan bilangan yang tepat adalah: ";
    if ((bilangan1 < bilangan2) &&
        (bilangan2 < bilangan3))
    {
        /*  Pilihan 1:
            bil1 < bil2 < bil3 */
        std::cout << bilangan1 << ", "
                  << bilangan2 << ", dan "
                  << bilangan3 << "."
                  << std::endl;

    }
    else if ((bilangan1 < bilangan3) &&
             (bilangan3 < bilangan2))
    {
        /* Pilihan 2:
            bil1 < bil3 < bil2 */
        std::cout << bilangan1 << ", "
                  << bilangan2 << ", dan "
                  << bilangan3 << "."
                  << std::endl;
                  
    }
    else if ((bilangan2 < bilangan1) &&
             (bilangan1 < bilangan3))
    {
        /* Pilihan 3:
            bil2 < bil1 < bil3 */
        std::cout << bilangan2 << ", "
                  << bilangan1 << ", dan "
                  << bilangan3 << "."
                  << std::endl;

    }
    else if((bilangan2 < bilangan3) &&
            (bilangan3 < bilangan1))
    {
        /* Pilihan 4:
            bil2 < bil3 < bil1 */
       std::cout << bilangan2 << ", "
                 << bilangan3 << ", dan "
                 << bilangan1 << "."
                 << std::endl;

    }
    else if((bilangan3 < bilangan1) &&
            (bilangan1 < bilangan2))
    {
        /* Pilihan 5:
            bil3 < bil1 < bil2 */
       std::cout << bilangan3 << ", "
                 << bilangan1 << ", dan "
                 << bilangan2 << "."
                 << std::endl;

    }
    else if((bilangan3 < bilangan2) &&
            (bilangan2 < bilangan1))
    {
        /* Pilihan 6:
            bil3 < bil2 < bil1 */
       std::cout << bilangan3 << ", "
                 << bilangan2 << ", dan "
                 << bilangan1 << "."
                 << std::endl;

    }
    else if((bilangan1 == bilangan2) &&
            (bilangan1 < bilangan3))
    {
        /* Pilihan 7:
            jika bil1 = bil2 dan bil1 < bil3
            maka bil2 < bil3 */
        std::cout << bilangan1 << ", "
                  << bilangan2 << ", dan "
                  << bilangan3 << "."
                  << std::endl;

    }
    else if((bilangan1 == bilangan2) &&
            (bilangan1 > bilangan3))
    {
        /* Pilihan 8:
            Jika bila1 = bil2 dan bil1 > bil3
            maka bil2 > bil3 */
        std::cout << bilangan3 << ", "
                  << bilangan2 << ", dan "
                  << bilangan1 << "."
                  << std::endl;
    }
    else if((bilangan1 == bilangan3) &&
            (bilangan1  < bilangan2))
    {
        /* Pilihan 9:
            Jika bil1 = bil3 dan bil1 < bil2
            maka bil3 < bil2 */
        std::cout << bilangan1 << ", "
                  << bilangan3 << ", dan "
                  << bilangan2 << "."
                  << std::endl;
    }
    else if((bilangan1 == bilangan3) &&
            (bilangan1  > bilangan2))
    {
        /* Pilihan 10:
            Jika bil1 = bil3 dan bil1 > bil2
            maka bil3 > bil2 */
        std::cout << bilangan2 << ", "
                  << bilangan1 << ", dan "
                  << bilangan3 << "."
                  << std::endl;
    }
    else if((bilangan2 == bilangan3) &&
            (bilangan2 < bilangan1))
    {
        /* Pilihan 11:
            Jika bil2 = bil3 dan bil2 < bil1
            maka bil3 < bil1 */
        std::cout << bilangan2 << ", "
                  << bilangan3 << ", dan "
                  << bilangan1 << "."
                  << std::endl;
    }
    else
    {
        std::cout << bilangan1 << ", "
                  << bilangan2 << ", dan "
                  << bilangan3 << "."
                  << std::endl;
    }
    
    return 0;
}

/*

    Liang. 2014. Introduction to Programming with C++ 3rd Edition.
    London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/