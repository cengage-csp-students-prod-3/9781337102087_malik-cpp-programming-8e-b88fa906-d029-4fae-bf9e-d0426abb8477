// This program converts the length entered from inches to centimeters.
// 11/9/2025

#include <iostream>

using namespace std;

int main() {
    // Write your main here

    const double centimeterConversion = 2.54;

    int feetLength;
    int inchLength;
    double convertedLength;

    try 
    {
        // Prompt user to enter length in feet and in inches

        cout << "Enter the length in feet" << endl;
        cin >> feetLength;

        cout << "Enter the length in inches" << endl;
        cin >> inchLength;

        if(cin.fail()) {
            throw feetLength;
            throw inchLength;
        }

        inchLength = (feetLength * 12) + inchLength;
        convertedLength = inchLength * centimeterConversion;

        cout << "The length in centimeters is: " << convertedLength;
    }

    catch (int x) {
        cout << "['A non positive number is entered']" << endl;
    }
    return 0;
}