#include <iostream>

/*
    =====================================================================================
    03.13. Financial application: Compute Taxes 
    by   : #bayuyudhasaputra
    lang : IDN (Bahasa Indonesia)
    -------------------------------------------------------------------------------------
    Masalah :
    Listing 3.3, ComputeTax.cpp, gives the source code to compute taxes for single filers. 
    Complete Listing 3.3 to give the complete source code.

    ======================================================================================
*/
int main()
{
    std::cout << "Input status dengan bilangan: "
              << std::endl
              << "\t 1 : untuk status \"Single\"."
              << std::endl
              << "\t 2 : untuk status \"Married Filing Jointly or Qualifying Widow(er)\"."
              << std::endl
              << "\t 3 : untuk status \"Married Filing Separately\"."
              << std::endl
              << "\t 4 : untuk status \"Head of Household\"."
              << std::endl
              << "Input status : ";

    // 1. Input status.
    unsigned short status;
    std::cin >> status;
    std::cout << std::endl;

    // 2. Input penghasilan
    double penghasilan;
    std::cout << "Input penghasilan pertahun dalam $ ";
    std::cin >> penghasilan;
    std::cout << std::endl;

    // 3. Cek status
    double nominalPajak = 0;

    switch (status)
    {
    case 1:
        // 4a. Cek penghasilan dengan status "Single"

        if (penghasilan < 0)
        {
            std::cout << "Input penghasilan dengan bilangan positif saja."
                      << std::endl;    
        }

        else if (penghasilan < 8350)
        {
            nominalPajak = 0.10 * penghasilan;
        }

        else if (penghasilan < 33950)
        {
            nominalPajak = 0.10 * 8350 +
                           0.15 * (penghasilan - 8350);
        }

        else if (penghasilan < 82250)
        {
            nominalPajak = 0.10 * 8350 +
                           0.15 * (33950 - 8350) +
                           0.25 * (penghasilan - 33950);
        }

        else if (penghasilan < 171550)
        {
            nominalPajak = 0.10 * 8350 +
                           0.15 * (33950 - 8350 ) +
                           0.25 * (82250 - 33950) +
                           0.28 * (penghasilan - 82250);
        }

        else if (penghasilan < 372950)
        {
            nominalPajak = 0.10 * 8350 +
                           0.15 * (33950  - 8350 ) +
                           0.25 * (82250  - 33950) +
                           0.28 * (171550 - 82250) +
                           0.33 * (penghasilan - 171550);
        }

        else
        {
            nominalPajak = 0.10 * 8350 +
                           0.15 * (33950  - 8350   ) +
                           0.25 * (82250  - 33950  ) +
                           0.28 * (171550 - 82250  ) +
                           0.33 * (372950 - 171550 ) + 
                           0.35 * (penghasilan - 372950);
        }
        
        break;
    
    case 2:
        // 4b. Cek penghasilan dengan status "Married Filing Jointly or Qualifying Widow(er)"

        if (penghasilan < 0)
        {
            std::cout << "Input penghasilan dengan bilangan positif saja."
                      << std::endl;
        }
        else if (penghasilan < 16700)
        {
            nominalPajak = 0.10 * penghasilan;
        }
        else if (penghasilan < 67900)
        {
            nominalPajak = 0.10 * 16700 +
                           0.15 * (penghasilan - 16700);
        }
        else if (penghasilan < 137050)
        {
            nominalPajak = 0.10 * 16700 +
                           0.15 * (67900 - 16700) +
                           0.25 * (penghasilan - 67900);
        }
        else if (penghasilan < 208850)
        {
            nominalPajak = 0.10 * 16700 +
                           0.15 * (67900 - 16700) +
                           0.25 * (137050 - 67900) +
                           0.28 * (penghasilan - 137050);
        }
        else if (penghasilan < 372950)
        {
            nominalPajak = 0.10 * 16700 +
                           0.15 * (67900 - 16700) +
                           0.25 * (137050 - 67900) +
                           0.28 * (208850 - 137900) +
                           0.33 * (penghasilan - 208850);
        }
        else
        {
            nominalPajak = 0.10 * 16700 +
                           0.15 * (67900 - 16700) +
                           0.25 * (137050 - 67900) +
                           0.28 * (208850 - 137900) +
                           0.33 * (372950 - 208850) +
                           0.35 * (penghasilan - 372950);
        }
        
        break;
    
    case 3:
        // 4c. Cek penghasilan dengan status "Married Filing Separately"

        if (penghasilan < 0)
        {
            std::cout << "Input penghasilan dengan bilangan positif saja."
                      << std::endl;
        }
        else if (penghasilan < 8350)
        {
            nominalPajak = 0.10 * penghasilan;
        }
        else if(penghasilan < 33950)
        {
            nominalPajak = 0.10 * 8350 +
                           0.15 * (penghasilan - 8350);
        }
        else if (penghasilan < 68525)
        {
            nominalPajak = 0.10 * 8350 +
                           0.15 * (33950 - 8350) +
                           0.25 * (penghasilan - 33950);
        }
        else if (penghasilan < 104425)
        {
            nominalPajak = 0.10 * 8350 +
                           0.15 * (33950 - 8350) +
                           0.25 * (68525 - 33950) +
                           0.28 * (penghasilan - 68525);
        }
        else if (penghasilan < 136475)
        {
            nominalPajak = 0.10 * 8350 +
                           0.15 * (33950 - 8350) +
                           0.25 * (68525 - 33950) +
                           0.28 * (104425 - 68525) +
                           0.33 * (penghasilan - 104425);
        }
        else
        {
            nominalPajak = 0.10 * 8350 +
                           0.15 * (33950 - 8350) +
                           0.25 * (68525 - 33950) +
                           0.28 * (104425 - 68525) +
                           0.33 * (136475 - 104425) +
                           0.35 * (penghasilan - 136475);
        }
        
        break;

    case 4:
        // 4e. Cek penghasilan dengan status "Head of Household"

        if (penghasilan < 0)
        {
            std::cout << "Input penghasilan dengan bilangan positif saja."
                      << std::endl;
        }
        else if (penghasilan < 11950)
        {
            nominalPajak = 0.10 * penghasilan;
        }
        else if (penghasilan < 45500)
        {
            nominalPajak = 0.10 * 11950 +
                           0.15 * (penghasilan - 11950);
        }
        else if (penghasilan < 117450)
        {
            nominalPajak = 0.10 * 11950 +
                           0.15 * (45500 - 11950) +
                           0.25 * (penghasilan - 45500);
        }
        else if (penghasilan < 190200)
        {
            nominalPajak = 0.10 * 11950 +
                           0.15 * (45500 - 11950) +
                           0.25 * (117450 - 45500) +
                           0.28 * (penghasilan - 117450);
        }
        else if (penghasilan < 372950)
        {
            nominalPajak = 0.10 * 11950 +
                           0.15 * (45500 - 11950) +
                           0.25 * (117450 - 45500) +
                           0.28 * (190200 - 117450) +
                           0.33 * (penghasilan - 190200);
        }
        else
        {
            nominalPajak = 0.10 * 11950 +
                           0.15 * (45500 - 11950) +
                           0.25 * (117450 - 45500) +
                           0.28 * (190200 - 117450) +
                           0.33 * (372950 - 190200) +
                           0.35 * (penghasilan - 372950);
        }
        
        break;
    
    default:
        // 4. Tampilkan pesan peringatan
        nominalPajak = 0;
        std::cout << "Pesan peringatan : Input status dengan bilangan 1, 2, 3 dan 4 saja."
                  << std::endl;
        break;
    }

    // 5. Tampilkan nominalPajak
    std::cout << "Pajak yang harus dibayarkan sebesar $ "
              << static_cast<int>(nominalPajak * 100) / 100.0
              << std::endl;




    return 0;
}



/*

    Liang. 2014. Introduction to Programming with C++ 3rd Edition.
    London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/