#include <iostream>
#include <ctime>
#include <cstdlib>

/*
    =====================================================================================
    03.15. Game: scissor, rock, paper
    by   : #bayuyudhasaputra
    lang : IDN (Bahasa Indonesia)
    -------------------------------------------------------------------------------------
    Masalah :
    Tuliskan program yang menjalankan permainan populer batu, gunting, kertas. 
    Ketentuannya adalah gunting menang melawan kertas (karena gunting dapat menggunting 
    kertas), batu mengalahkan gunting karena (batu dapat menghancurkan gunting), kertas 
    mengalahkan batu (karena kertas dapat membungkus batu). Program membangkitkan bilangan 
    acak 0, 1, dan 2 yang merepresentasikan berturut-turut gunting, batu dan kertas. 
    Kemudian, pengguna menginput bilangan 0, 1, dan 2 yang merepresentasikan hal yang sama. 
    Program akan menampilkan siapa yang menang, apakah komputer atau manusia?
    ======================================================================================
*/

int main()
{
    // 1. Bangkitkan bilangan acak 0, 1, atau 2
    srand(time(0));
    unsigned short pilKompi = rand() % 3;

    // 2. Input bilangan 0, 1, atau 2
    std::cout << "Input bilangan: " << std::endl
              << "\t 0 jika memilih \"Gunting\"." << std::endl
              << "\t 1 jika memilih \"Batu\"." << std::endl
              << "\t 2 jika memilih \"Kertas\"." << std::endl
              << "Input : ";
    unsigned short pilPengguna;
    std::cin >> pilPengguna;

    // 3. Evaluasi nilai pilPengguna
    switch (pilPengguna)
    {
    case 0: // Penggun => Gunting
        {
            if (pilKompi == 0) // Komputer => Gunting
            {
                std::cout << "Komputer memilih \"Gunting\"."
                          << std::endl
                          << "Anda memilih \"Gunting\"."
                          << std::endl
                          << "Hasilnya draw."
                          << std::endl; 
            }
            else if (pilKompi == 1) // Pengguna => Batu
            {
                std::cout << "Komputer memilih \"Batu\"."
                          << std::endl
                          << "Anda memilih \"Gunting\"."
                          << std::endl
                          << "Maaf.. Anda belum beruntung.."
                          << std::endl;
            }
            else if (pilKompi == 2) // Pengguna => Kertas.
            {
                std::cout << "Komputer memilih \"Kertas\"."
                          << std::endl
                          << "Anda memilih \"Gunting\"."
                          << std::endl
                          << "Selamat.. Anda menang.."
                          << std::endl;
            }

            break;
        }
        
    case 1: // Pengguna => Batu
        {
            if (pilKompi == 0) // Komputer => Gunting
            {
                std::cout << "Komputer memilih \"Gunting\"."
                          << std::endl
                          << "Anda memilih \"Batu\"."
                          << std::endl
                          << "Selamat.. Anda menang.."
                          << std::endl;
            }
            else if (pilKompi == 1) // Komputer => Batu
            {
                std::cout << "Komputer memilih \"Batu\"."
                          << std::endl
                          << "Anda memilih \"Batu\"."
                          << std::endl
                          << "Hasilnya.. Draw."
                          << std::endl;
            }
            else if (pilKompi == 2) // Komputer => Kertas
            {
                std::cout << "Komputer memilih \"Kertas\"."
                          << std::endl
                          << "Anda memilih \"Batu\"."
                          << std::endl
                          << "Maaf.. Anda belum beruntung.."
                          << std::endl;

            }

            break;
        }
        
    case 2: // Pengguna => Kertas
        {
            if(pilKompi == 0) // Komputer => Gunting
            {
                std::cout << "Komputer memilih \"Gunting\"."
                          << std::endl
                          << "Anda memilih \"Kertas\"."
                          << std::endl
                          << "Maaf.. Anda belum beruntung.."
                          << std::endl;
            }
            else if (pilKompi == 1) // Komputer => Batu
            {
                std::cout << "Komputer memilih \"Batu\"."
                          << std::endl
                          << "Anda memilih \"Kertas\"."
                          << std::endl
                          << "Selamat.. Anda menang.."
                          << std::endl;
            } 
            else if (pilKompi == 2) // Komputer => Kertas
            {
                std::cout << "Komputer memilih \"Kertas\"."
                          << std::endl
                          << "Anda memilih \"Kertas\"."
                          << std::endl
                          << "Hasilnya Draw.."
                          << std::endl;
            }
            break;
        }
        
    default:
        std::cout << "Pesan peringatan : \"Input bilangan 0, 1, atau 2 saja.\"" << std::endl;
        break;
    }
    
    return 0;
}

/*

    Liang. 2014. Introduction to Programming with C++ 3rd Edition.
    London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/