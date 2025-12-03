// This program calculates the billing amount from the user's yearly income, 
// the hourly rate, and the total consulting time.
// Date: 12/2/2025

#include <iostream>

using namespace std;

double calculateBillingAmount(double hourlyRate, int time, bool lowIncome);

int main() {
    // Write your main here

    double yearlyIncome;
    double hourlyRate;
    int totalConsultingTime;
    bool hasLowIncome = false;
    double billingAmount;

    // Prompt user to enter yearly income, the hourly rate, the total consulting time.

    cout << "Enter your yearly income: " << endl;
    cin >> yearlyIncome; 
    cout << endl;

    cout << "Enter your hourly rate: " << endl;
    cin >> hourlyRate;
    cout << endl;

    cout << "Enter your total consulting time: " << endl;
    cin >> totalConsultingTime;
    cout << endl;

    if (yearlyIncome <= 25000)
        hasLowIncome = true;

    billingAmount = calculateBillingAmount(hourlyRate, totalConsultingTime, hasLowIncome);

    cout << "The billing amount is " << billingAmount << endl;

    return 0;
}

double calculateBillingAmount(double hourlyRate, int time, bool lowIncome)
{
    double billingAmount;

    if ((lowIncome == true) && (time <= 30)) {

    }

    else {
        billingAmount = (hourlyRate * 0.4) * ((time - 30) / 60);
    }
}