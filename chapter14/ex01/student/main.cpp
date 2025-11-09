// This program converts the length entered from inches to centimeters.
// 11/9/2025

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Write your main here

    const double centimeterConversion = 2.54;

    double feetLength;
    double inchLength;
    double convertedLength;

    cout << fixed << showpoint << setprecision(2) << endl;

    try 
    {
        // Prompt user to enter length in feet and in inches

        cout << "Enter the length in feet" << endl;
        cin >> feetLength;

        if(!(cin.good())) {
            throw feetLength;
        }

        cout << "Enter the length in inches" << endl;
        cin >> inchLength;

        if(!(cin.good())) {
            throw inchLength;
        }

        inchLength = (feetLength * 12) + inchLength;
        convertedLength = inchLength * centimeterConversion;

        cout << "The length in centimeters is: " << convertedLength << endl;
    }

    catch (int x) {
        cout << "'A non positive number is entered'" << endl;
    }
    return 0;
}