// This program prompts the user to input a string and outputs the string in uppercase letters.
// Date: 10/19/2025

#include <iostream>
#include <cctype>

using namespace std;

int main() {
    // Write your main here
    string inputString;
    string upperCaseString;
    int stringLength = 0;

    // Prompt user to enter a string
    cout << "Enter a string" << endl;
    cin >> inputString;

    // Convert the string to uppercase

    stringLength = inputString.length();

    for(int index = 0; index < stringLength; index++) {
        upperCaseString[index] = toupper(inputString[index]);
    }

    // Output the string in uppercase letters

    cout << "The string in uppercase letters is: ";
    for(int x = 0; x < stringLength; x++) {
        cout << upperCaseString[x];
    }
    cout << endl;

    return 0;
}
