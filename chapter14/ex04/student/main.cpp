// This program prompts the user to enter time in 12-hour notation. The program
// then outputs the time in 24-hour notation.
// 11/10/2025

#include <iostream>

using namespace std;

int main() {
    // Write your main here

    int inputTime;
    int outputNotation;

    //try {
        // Prompt user to enter time

        cout << "Enter the time in 12-hour notation" << endl;
        cin >> inputTime;
        cout << endl;

        outputNotation = inputTime + 12;

        cout << "The time in 24-hour notation is " << outputNotation << endl;
    //}
    return 0;
}