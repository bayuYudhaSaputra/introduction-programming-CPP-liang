#include <iostream>

/*
    =====================================================================================
    03.05. Find Future Dates
    by   : #bayuyudhasaputra
    lang : IDN (Bahasa Indonesia)
    -------------------------------------------------------------------------------------
    Masalah :
    Write a program that prompts the user to enter an integer for today’s day of the week 
    (Sunday is 0, Monday is 1, . . . , and Saturday is 6). Also, prompt the user to enter 
    the number of days after today for a future day and display the future day of the week.

    ======================================================================================
*/

int main()
{
    std::cout << " Indeks yang merepresentasikan nama-nama hari, " << std::endl
              << "   0 untuk Minggu,"  << std::endl
              << "   1 untuk Senin, "  << std::endl
              << "   2 untuk Selasa, " << std::endl
              << "   3 Untuk Rabu, "   << std::endl
              << "   4 untuk Kamis, "  << std::endl
              << "   5 untuk Jum'at, " << std::endl
              << "   6 untuk Sabtu."   << std::endl;

    // 1. Input indeks untuk nama hari ini.
    std::cout << "Input indeks yang merepresentasikan hari ini : ";
    unsigned short indeksHariIni;
    std::cin >> indeksHariIni;
    std::cout << std::endl;

    // 2. Cek input indeks
    if (indeksHariIni < 0 || indeksHariIni > 6)
    {
        // 3. Tampilkan pesan peringatan
        std::cout << "Anda hanya boleh menginput indeks, " << std::endl
                  << "  0, 1, 2, 3, 4, 5, atau 6 saja." << std::endl;
    }
    else
    {
        // 4. Ubah indeks menjadi nama hari dan tampilkan
        std::cout << "Hari ini adalah hari ";

        switch (indeksHariIni)
        {
        case 0:
            std::cout << "Minggu.";
            break;
        case 1:
            std::cout << "Senin.";
            break;
        case 2:
            std::cout << "Selasa.";
            break;
        case 3:
            std::cout << "Rabu.";
            break;
        case 4:
            std::cout << "Kamis.";
            break;
        case 5:
            std::cout << "Jum\'at.";
            break;
        case 6:
            std::cout << "Sabtu.";
            break;
        }

        std::cout << std::endl;

        // 5. Input banyak hari
        std::cout << "Input banyak hari : ";
        int banyakHari;
        std::cin >> banyakHari;
        std::cout << std::endl;

        // 6. Cek input banyakHari
        if (banyakHari < 0)
        {
            std::cout << "Anda hanya boleh menginput bilangan lebih dari 0.";
        }
        else
        {
            // 6. Hitung jumlah
            int jumlah = indeksHariIni + banyakHari;

            // 7. Hitung indeksHariEsok
            int indeksHariEsok = jumlah % 7;

            // 8. Cek indeksHariEsok dan tampilkan
            std::cout << " " << banyakHari << " hari lagi adalah hari ";
            
            switch (indeksHariEsok)
            {
                case 0:
                    std::cout << "Minggu.";
                    break;
                case 1:
                    std::cout << "Senin.";
                    break;
                case 2:
                    std::cout << "Selasa.";
                    break;
                case 3:
                    std::cout << "Rabu.";
                    break;
                case 4:
                    std::cout << "Kamis.";
                    break;
                case 5:
                    std::cout << "Jum\'at.";
                    break;
                case 6:
                    std::cout << "Sabtu.";
                    break;
            }
        }
        std::cout << std::endl;
    }

    return 0;
}

/*

    Liang. 2014. Introduction to Programming with C++ 3rd Edition.
    London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/