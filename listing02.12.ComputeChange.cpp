#include <iostream>
using namespace std;

int main()
{
    // Receive the amount
    cout << "Enter an amount in double, for example 11.56: ";
    double amount;
    cin >> amount;

    int remainingAmount = static_cast<int>(amount * 100);

    // Find the number of one dollars
    int numberOfOneDollars = remainingAmount / 100;
    remainingAmount = remainingAmount % 100;

    // Find the number of quarters in the remaining amount
    int numberOfQuarters = remainingAmount / 25;
    remainingAmount = remainingAmount % 25;

    // Find the number of dimes in the remaining amount
    int numberOfDimes = remainingAmount / 10;
    remainingAmount = remainingAmount % 10;

    // Find the number of nickels in the remaining amount
    int numberOfNickels = remainingAmount / 5;
    remainingAmount = remainingAmount % 5;

    // Find the number of pennies in the remaining amount
    int numberOfPennies = remainingAmount;

    // Display results
    cout << "Your amount " << amount << " consist of " << endl <<
        "    " << numberOfOneDollars << " dollars " << endl <<
        "    " << numberOfQuarters << " quarters " << endl <<
        "    " << numberOfDimes << " dimes " << endl <<
        "    " << numberOfNickels << " nickels " << endl <<
        "    " << numberOfPennies << " pennies " << endl;

    return 0;
}