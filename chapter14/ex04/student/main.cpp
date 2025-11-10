// This program prompts the user to enter time in 12-hour notation. The program
// then outputs the time in 24-hour notation.
// 11/10/2025

#include <iostream>
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
        // Prompt user to enter time in 12-hour notation

        cout << "Enter the hours" << endl;
        cin >> inputHr;
        cout << endl;

        if (inputHr < 0 || inputHr >= 12)
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

        // Adds 12 hours to input time if pm is selected

        if (amOrPm == "pm" || amOrPm == "PM") {
            outputHr = inputHr + 12;
        }

        else if (amOrPm == "am" || amOrPm == "AM") {
            outputHr = inputHr;
        }

        // Converts time from 12-hour notation to 24-hour notation

        militaryTime = to_string(outputHr) + ":" + to_string(inputMin) + ":" + to_string(inputSec);

        // Displays the converted time
    
        cout << "The time in 24-hour notation is " << militaryTime << endl;
    }

    // Catch any incorrect input

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