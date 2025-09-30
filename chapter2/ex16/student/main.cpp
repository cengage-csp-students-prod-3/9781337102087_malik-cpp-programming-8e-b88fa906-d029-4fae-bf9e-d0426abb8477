#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Write your main here

    const double milkPerCarton = 3.78; // liters
    const double costPerLiter = 0.38;
    const double profitPerCarton = 0.27;

    double litersOfMilk;
    int numOfCartons;
    double costOfProducingMilk;
    double profitOfProducingMilk;

    // Prompt user to enter the total amount of milk produced in the morning

    cout << "Enter the amount of milk produced in the morning in liters: ";
    cin >> litersOfMilk;

    // Calculate the number of cartons needed, cost of producing milk,
    // and profit from producing milk

    numOfCartons = round(litersOfMilk / milkPerCarton);
    costOfProducingMilk = litersOfMilk * costPerLiter;
    profitOfProducingMilk = numOfCartons * profitPerCarton;

    cout << "Number of cartons needed: " << numOfCartons << endl;
    cout << "Cost of producing milk: $" << costOfProducingMilk << endl;
    cout << "Profit from producing milk: $" << profitOfProducingMilk << endl;

    return 0;
}