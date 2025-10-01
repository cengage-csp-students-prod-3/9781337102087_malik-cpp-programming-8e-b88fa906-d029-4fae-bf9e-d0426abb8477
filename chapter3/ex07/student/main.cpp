#include <iostream>

using namespace std;

int main() {
    // Write your main here

    const double INTEREST_RATE = 0.0152;
    
    double netBalance;
    int d1, d2;
    double payment;
    double interest;
    double averageDailyBalance = 0.00;
    

    // Prompt user for input

    cout << "Enter net balance: ";
    cin >> netBalance;
    cout << "Enter days in billing cycle (d1): ";
    cin >> d1;
    cout << "Enter days payment is made before billing cycle (d2): ";
    cin >> d2;
    cout << "Enter payment amount: ";

    averageDailyBalance = (netBalance * d1 - payment * d2) / d1;

    interest = averageDailyBalance * INTEREST_RATE;
    //averageDailyBalance = averageDailyBalance + interest;

    cout << "Average Daily Balance: " << averageDailyBalance << endl;
    cout << "Interest: " << interest << endl;

    return 0;
}