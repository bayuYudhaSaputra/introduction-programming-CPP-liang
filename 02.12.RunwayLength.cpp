#include <iostream>
using namespace std;

/*
    ============================================================
    02.12. Runway Length
    By   : #bayuyudhasaputra
    Lang : idn (bahasa Indonesia)
    ------------------------------------------------------------
    Masalah:
    Menentukan panjang minimum runway menggunakan rumus berikut:
    panjang = v^2 / 2a
    dimana, v adalah kecepatan dalam m/s
            a adalah percepatan dalam m/s^2
    ============================================================
*/

int main()
{
    cout << endl 
         << "===================================================="
         << endl
         << "02.12. Panjang Minimum Runway"
         << endl
         << "By : #bayuyudhasaputra"
         << endl
         << "Lang : idn (Bahasa Indonesia)"
         << endl
         << endl
         << "----------------------------------------------------"
         << endl
         << endl;

    // 1. Menerima inout kecepatan dan percepatan
    double kecepatan;
    cout << "Input kecepatan (Misal, 15.65): ";
    cin >> kecepatan;
    cout << endl
         << "      (Anda menginput " << kecepatan << " m/s)."
         << endl
         << endl;
    
    double percepatan;
    cout << "Input percepatan (Misal, 9.86) : ";
    cin >> percepatan;
    cout << endl
         << "       (Anda menginput " << percepatan << " m/s^2)."
         << endl
         << endl;

    // 2. Menghitung panjang minimum runway
    double panjang;
    panjang = (kecepatan * kecepatan) / (2 * percepatan);

    // 3. Tampilkan hasil perhitungan
    cout << "Jadi, Panjang runway minimum untuk pesawat dengan"
         << endl
         << endl
         << "      kecepatan " << kecepatan << " m/s."
         << endl
         << endl
         << "      percepatan " << percepatan << " m/s^2. "
         << endl
         << endl
         << "adalah " << panjang << " meter."
         << endl
         << endl
         << "====================================================";

    return 0;
}



