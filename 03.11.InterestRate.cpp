#include <iostream>

/*
    =====================================================================================
    03.11. Loan Interest Rate
    by   : #bayuyudhasaputra
    lang : IDN (Bahasa Indonesia)
    -------------------------------------------------------------------------------------
    Masalah :
    A bank uses the following function to calculate the rate of interest (in percentage) 
    for a particular loan amount (in lakhs of dollars).
        r(a) = 15;       if 0.1 < a <= 1
        r(a) = 13.5;     if   1 < a <= 5
        r(a) = 12.5;     if   5 < a <= 10
        r(a) = 11.0;     if  10 < a <= 50

    Write a program that prompts the user to enter the amount of the loan and displays 
    the rate of interest. If the amount is less than $10,000 or more than $50,00,000, 
    display a message “Loan cannot be provided.”
    ======================================================================================
*/
int main()
{
    // 1. Input pokokPinjaman
    int pokokPinjaman;
    std::cout << "Input nominal pinjaman pokok (dalam dollar) : ";
    std::cin >> pokokPinjaman;
    std::cout << std::endl;

    // 2. Cek nilai pokokPinjaman
    if (pokokPinjaman <= 10000 || pokokPinjaman > 5000000)
    {
        // 3. Tampilkan pesan peringatan
        std::cout << "Maaf.. Pengajuan pinjaman anda tidak disetujui."
                  << std::endl;
    }
    else
    {
        // 3. Cek nilai yang terbagi dalam 4 bagian
        double persenBunga;

        if ((10000 < pokokPinjaman) && (pokokPinjaman <= 100000))
        {
            persenBunga = 15.0;
        }
        else if ((100000 < pokokPinjaman) && (pokokPinjaman <= 500000))
        {
            persenBunga = 13.5;
        }
        else if ((500000 < pokokPinjaman) && (pokokPinjaman <= 1000000))
        {
            persenBunga = 12.5;
        }
        else if(1000000 < pokokPinjaman && (pokokPinjaman ))
        {
            persenBunga = 11.0;
        }

        int nominalBunga, totalPinjaman;
        nominalBunga = (persenBunga / 100) * pokokPinjaman;
        totalPinjaman = pokokPinjaman + nominalBunga;

        std::cout << "Pokok pinjaman : $" << pokokPinjaman << std::endl;
        std::cout << "Nominal bunga : $" << nominalBunga << std::endl;
        std::cout << "Total Pinjaman : $" << totalPinjaman;
     
    }
    
    return 0;
}


/*

    Liang. 2014. Introduction to Programming with C++ 3rd Edition.
    London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/