// This program calculates the billing amount from the user's yearly income, the hourly rate, and the total consulting time.
// Date: 12/2/2025

#include <iostream>

using namespace std;

double calculateBillingAmount(double hourlyRate, double time, bool lowIncome);

int main() {
    // Write your main here

    double yearlyIncome;
    double hourlyRate;
    double totalConsultingTime;
    bool hasLowIncome = false;
    double billingAmount = 0.00;

    // Prompt user to enter yearly income, the hourly rate, the total consulting time.

    cout << "Enter your yearly income: " << endl;
    cin >> yearlyIncome; 
    cout << endl;

    cout << "Enter your hourly rate: " << endl;
    cin >> hourlyRate;
    cout << endl;

    cout << "Enter your total consulting time in minutes: " << endl;
    cin >> totalConsultingTime;
    cout << endl;

    if (yearlyIncome <= 25000)
        hasLowIncome = true;

    billingAmount = calculateBillingAmount(hourlyRate, totalConsultingTime, hasLowIncome);

    // Output the billing amount

    cout << "The billing amount is " << billingAmount << endl;

    return 0;
}

// This function calculates the billing amount 

double calculateBillingAmount(double hourlyRate, double time, bool lowIncome)
{
    double billingAmount;
    double testVariable;
    time = static_cast<double>(time);

    if (lowIncome == true) {

        if (time <= 30) {
            billingAmount = 0;
        }

        else {
            billingAmount = (hourlyRate * 0.4) * ((time - 30) / 60);
        }
    }

    else if (lowIncome == false) {
        if (time <= 20) {
            billingAmount = 0;
        }

        else {
            billingAmount = (hourlyRate * 0.7) * ((time - 20) / 60);
        }
    }

    return billingAmount;
}