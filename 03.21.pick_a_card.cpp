#include <iostream>

/*
    =====================================================================================
    03.21. Game: pick a card
    by   : #bayuyudhasaputra
    lang : IDN (Bahasa Indonesia)
    -------------------------------------------------------------------------------------
    Masalah :
    Tuliskan suatu program yang mensimulasikan pengambilan 52 kartu remi. Program harus 
    menampilkan rank (Ace, 2, 3, 4, 5, 6, 7, 8, 9, 10, Jack, Queen, King) dan suit 
    (Clubs, Diamonds, Hearts, Spades) dari kartu remi tersebut.

    ======================================================================================
*/

int main()
{
    // 1. Input rank
    std::cout << "Input rank : ";
    unsigned short indeksRank;
    std::cin >> indeksRank;
    std::cout << std::endl;

    // 2. Input suit
    std::cout << "Input suit : ";
    unsigned short indeksSuit;
    std::cin >> indeksSuit;
    std::cout << std::endl;


    // 4. Cek indeks rank dan suit

    if ((1 <= indeksRank && indeksRank <= 14) &&
        (1 <= indeksSuit && indeksSuit <= 4))
    {
       std::cout << "Anda memilih ";

        // Cek indeksRank
        switch (indeksRank)
        {
            case 1:
                std::cout << "As ";
                break;
    
            case 2:
                std::cout << "2 ";
                break;
    
            case 3:
                std::cout << "3 ";
                break;

            case 4:
                std::cout << "4 ";
                break;

            case 5:
                std::cout << "5 ";
                break;

            case 6:
                std::cout << "6 ";
                break;

            case 7:
                std::cout << "7 ";
                break;

            case 8:
                std::cout << "8 ";
                break;
    
            case 9:
                std::cout << "9 ";
                break;
    
            case 10:
                std::cout << "10 ";
                break;

            case 11:
                std::cout << "Jack ";
                break;

            case 12:
                std::cout << "Queen ";
                break;

            case 13:
                std::cout << "King ";
                break;  
        }

        // Cek indeksSuit
        switch (indeksSuit)
        {
            case 1:
                std::cout << "clubs";
                break;
            case 2:
                std::cout << "diamonds";
                break;

            case 3:
                std::cout <<"Hearts";
                break;
        
            case 4:
                std::cout << "Spades";
                break;
        }

        std::cout << "." << std::endl;
    }
    else
    {
        std::cout << "Input indeks Rank dengan bilangan 1, 2, 3, ..., 13 saja"
                  << std::endl;
        std::cout << "Input dengan bilangan 1, 2, 3, atau 4 saja"
                  << std::endl;
        

    }

    return 0;
}
    
/*

    Liang. 2014. Introduction to Programming with C++ 3rd Edition.
    London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/