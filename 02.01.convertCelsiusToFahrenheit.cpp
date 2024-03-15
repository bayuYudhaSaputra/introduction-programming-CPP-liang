#include <iostream>
using namespace std;
/* ====================================================================
    2.1. Konversi Dari Celsius Ke Fahrenheit.
    by : Putra
    language : IDN (Indonesia)
    -------------------------------------------------------------------

    Tulis program yang membaca suhu (dalam derajat celsius)
    dengan tipe data double dari console.Kemudian, suhu dalam
    celsius ini dikonversi ke derajat fahrenheit dan tampilkan
    hasilnya. Rumus untuk mengonversi suhu dari celsius ke fahrenheit
    adalah:

    fahrenheit = (9 / 5) * celsius + 32

   =====================================================================
*/

int main() {

    // 1. Baca input dari console
    double celsius;
    cout << "Input suhu dalam derajat celsius :  ";
    cin >> celsius;
    cout << endl;

    // 2. Hitung fahrenheit
    double fahrenheit = (9.0 / 5) * celsius + 32;

    // 3. Tampilkan fahrenheit
    cout << "Jadi, " << celsius << " derajat celsius sama dengan "
        << fahrenheit << " derajat fahrenheit." << endl;

    return 0;
}

/*

Liang. 2014. Introduction to Programming with C++ 3rd Edition. London : Pearson Education.
    https://www.pearson.com/en-us/subject-catalog/p/Liang-Companion-Website-for-Introduction-to-Programming-with-C-Access-to-Videonotes-3rd-Edition/P200000003422/978013338026

*/
