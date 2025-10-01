#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Write your main here
    
    double netBalance;
    int d1, d2;
    double payment;
    double interest;
    double interestRate;
    double averageDailyBalance = 0.00;
    
    cout << setprecision(2) << fixed;

    // Prompt user for input

    cout << "Enter net balance: ";
    cin >> netBalance;
    cout << "Enter days in billing cycle (d1): ";
    cin >> d1;
    cout << "Enter days payment is made before billing cycle (d2): ";
    cin >> d2;
    cout << "Enter payment amount: ";
    cin >> payment;
    cout << "Enter interest rate (as a decimal): ";
    cin >> interestRate;

    averageDailyBalance = (netBalance * d1 - payment * d2) / d1;

    interest = averageDailyBalance * interestRate;
    averageDailyBalance = averageDailyBalance + interest;

    cout << "Average Daily Balance: " << averageDailyBalance << endl;
    cout << "Interest: " << interest << endl;

    return 0;
}