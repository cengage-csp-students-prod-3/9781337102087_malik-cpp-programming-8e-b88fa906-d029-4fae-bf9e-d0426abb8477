// This program prompts the user to enter time in 12-hour notation. The program
// then outputs the time in 24-hour notation.
// 11/10/2025

#include <iostream>
#include <string>
#include "invalidHr.h"
#include "invalidMin.h"
#include "invalidSec.h"

using namespace std;

int main() {
    // Write your main here

    int inputHr;
    int inputMin;
    int inputSec;
    int outputHr;
    string amOrPm;
    string militaryTime;

    try
    {
        // Prompt user to enter time in 12-hour notation and check if input 
        // is within correct range

        cout << "Enter the hours" << endl;
        cin >> inputHr;
        cout << endl;

        if (inputHr < 0 || inputHr > 12)
            throw invalidHr();

        cout << "Enter the minutes" << endl;
        cin >> inputMin;
        cout << endl;

        if (inputMin < 0 || inputMin >= 60)
            throw invalidMin();

        cout << "Enter the seconds" << endl;
        cin >> inputSec;
        cout << endl;

        if (inputSec < 0 || inputSec >= 60)
            throw invalidSec();

        cout << "Enter AM or PM" << endl;
        cin >> amOrPm;
        cout << endl;

        if(inputHr == 12) {
            inputHr = 00;
        }

        // Adds 12 hours to input time if pm is selected

        if (amOrPm == "pm" || amOrPm == "PM") {
            outputHr = inputHr + 12;
        }

        else if (amOrPm == "am" || amOrPm == "AM") {
            outputHr = inputHr;
        }

        // Convert time from 12-hour notation to 24-hour notation

        militaryTime = to_string(outputHr) + ":" + to_string(inputMin) + ":" + to_string(inputSec);

        // Display the converted time
    
        cout << "The time in 24-hour notation is " << militaryTime << endl;
    }

    // Catch incorrect input that isn't within the correct range

    catch (invalidHr object)
    {
        cout << "The number of hours is entered incorrectly." << endl;
    }

    catch (invalidMin object)
    {
        cout << "The number of minutes is entered incorrectly." << endl;
    }

    catch (invalidSec object)
    {
        cout << "The number of seconds is entered incorrectly." << endl;
    }

    return 0;
}