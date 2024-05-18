#include <iostream>

/*
    =====================================================================================
    03.02. Check A Number
    by   : #bayuyudhasaputra
    lang : IDN (Bahasa Indonesia)
    -------------------------------------------------------------------------------------
    Masalah :
    Write a program that prompts the user to enter two integers and checks whether 
    the first number is divisible by the second.
    ======================================================================================
*/

int main()
{
    // 1. Input bilangan yang dibagi dan pembagi
    int bilDibagi, bilPembagi;
    std::cout << "Input bilangan yang dibagi (Misal. 14) : ";
    std::cin >> bilDibagi;
    std::cout << std::endl;

    std::cout << "Input bilangan pembagi (Misal. 2) : ";
    std::cin >> bilPembagi;
    std::cout << std::endl;

    // 2. Cek input, apakah bilangan integer positif atau bukan
    if (bilDibagi > 0 && bilPembagi > 0)
    {
        // 3. Cek keterbagian bilDibagi dengan bilPembagi
        if (bilDibagi % bilPembagi == 0)
        {
            // 4. Tampilkan pesan
            std::cout << bilDibagi << " dapat dibagi oleh " << bilPembagi;
            std::cout << std::endl;
        }
        else
        {
            // 4. Tampilkan pesan
            std::cout << bilDibagi << " tidak dapat dibagi oleh " << bilPembagi;
            std::cout << std::endl;
        }
        
    } else
    {
        // 3. Tampilkan pesan warning.
        std::cout << "Warning:" << std::endl
                  << "    Input bilangan asli." 
                  << std::endl;
    }
          
    return 0;
}


/*

    Liang. 2014. Introduction to Programming with C++ 3rd Edition.
    London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/
