#include <iostream>

using namespace std;

int main() {
    // Write your main here
    double kg = 0.0;
    double lbs = 0.0;
    const double KG_TO_LBS_CONVERSION = 2.2;

    // Prompt user to enter weight in kilogram 

    cout << "Enter your weight in kilograms." << endl;
    cin >> kg;

    lbs = KG_TO_LBS_CONVERSION * kg;
    
    // Display the person's weight in pounds

    cout << "Your weight is " << lbs << " lbs" << endl;
    return 0;
}