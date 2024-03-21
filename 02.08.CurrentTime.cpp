#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    // Obtain the total seconds since midnight, Jan 1, 1970
    int totalSeconds = time(0);

    // Compute the current seconds in the minute in the hour
    int currentSecond = totalSeconds % 60;

    // Obtain the total minutes
    int totalMinutes = totalSeconds / 60;

    // Compute the current minute in the hour
    int currentMinute = totalMinutes % 60;

    // Obtain the total hours
    int totalHours = totalMinutes / 60;

    // Compute the current hour
    int currentHour = totalHours % 24;

    // menerima input zona waktu (Misal, input 5 jika berada pada zona waktu GMT+5)
    cout << endl
         << "===================================================================="
         << endl
         << "Input zona waktu anda (Misal, input 5 jika zona waktu anda GMT+5) : ";
         
    int zonaWaktu;
    cin >> zonaWaktu;
    
    cout << endl
         << "--------------------------------------------------------------------"
         << endl;

    currentHour += zonaWaktu;

    // Display results
    cout << "Current time" << " (GMT" << zonaWaktu << ") is "
         << currentHour << ":" << currentMinute << ":" << currentSecond
         << endl 
         << "===================================================================="
         << endl;

    return 0;
}