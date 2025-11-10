// This program prompts the user to enter time in 12-hour notation. The program
// then outputs the time in 24-hour notation.
// 11/10/2025

#include <iostream>

using namespace std;

int main() {
    // Write your main here

    int inputHr;
    int inputMin;
    int inputSec;
    int outputHr;
    string militaryTime;

    //try {
        // Prompt user to enter time in 12-hour notation

        cout << "Enter the hours" << endl;
        cin >> inputHr;
        cout << endl;

        cout << "Enter the minutes" << endl;
        cin >> inputMin;
        cout << endl;

        cout << "Enter the seconds" << endl;
        cin >> inputSec;
        cout << endl;

        if (inputHr < 12) {
            outputHr = inputHr + 12;
        }

        else
            outputHr = inputHr;

        militaryTime = to_string(outputHr) + ":" + to_string(inputMin) + ":" + to_string(inputSec);

        cout << "The time in 24-hour notation is " << militaryTime << endl;
    //}
    return 0;
}