#include <iostream>
#include <cmath>

/*
    =====================================================================================
    03.06. Health application: BMI
    by   : #bayuyudhasaputra
    lang : IDN (Bahasa Indonesia)
    -------------------------------------------------------------------------------------
    Masalah :
    Revise Listing 3.2, ComputeAndInterpretBMI.cpp, to let the user enter weight, feet, 
    and inches. For example, if a person is 5 feet, 10 inches, you will enter 5 for feet 
    and 10 for inches.

    ======================================================================================
*/

int main()
{
    // 1. Input berat dan tinggi
    double beratPound, tinggiFeet, tinggiInchi;
    std::cout << "Input berat badan dalam satuan Pound : ";
    std::cin >> beratPound;
    std::cout << std::endl;

    std::cout << "Input tinggi badan dalam satuan Feet lebih berapa inchi" << std::endl
              << "\t Tinggi (Feet) : ";
    std::cin >> tinggiFeet;
    std::cout << std::endl;
    std::cout << "\t Lebih (inchi) : ";
    std::cin >> tinggiInchi;
    std::cout << std::endl;

    // 2. Cek input
    if ((beratPound < 0 || beratPound == 0) || 
        (tinggiFeet < 0 || tinggiFeet == 0) || 
        (tinggiInchi < 0 || tinggiInchi == 0))
    {
        // 3. Tampilkan pesan peringatan
        std::cout << "Peringatan : Input bilangan positif." << std::endl;
    }
    else
    {
        // 3. Konversi satuan imperial ke satuan internasional.
        double beratKg = 0.435592 * beratPound;
        double tinggiFeetCm =  0.305 * tinggiFeet;
        double tinggiInchiCm = 0.0254 * tinggiInchi;

        // 4. Jumlahkan hasil konversi tinggi
        double tinggiCm = tinggiFeetCm + tinggiInchiCm;

        // 5. hitung BMI
        double bmi = beratKg / pow(tinggiCm, 2);

        // 6. Cek kategori BMI dan tampilkan hasilnya
        std::cout << "Indeks BMI anda adalah "
                  << bmi
                  << std::endl
                  << "Sehingga masuk dalam kategori ";

        if (bmi < 18.5)
        {
            std::cout << "\"Underweight\"";
        }
        else if(18.5 <= bmi && bmi < 25.0)
        {
            std::cout << "\"Normal\"";
        }
        else if (25.0 <= bmi && bmi < 30.0)
        {
            std::cout << "\"Overweight\"";
        }
        else
        {
           std::cout << "\"Obese\"";
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
