// This program mimics a calculator. It can perform arithmetic operations on two integers.
// Date: 10/1/2025

#include <iostream>

using namespace std;

int main() {
    // Write your main here

    int firstNum;
    int secondNum;
    char operation;
    int result;

    // Prompt user to enter two integers

    cout << "Enter the first number" << endl;
    cin >> firstNum;
    
    cout << "Enter the second number" << endl;
    cin >> secondNum;

    cout << "Enter the operation to be performed for the two integer" << endl;
    cin >> operation;

    // Perform operations on the two integers

    if (operation == '+') {
        result = firstNum + secondNum;
    }

    else if (operation == '-') {
        result = firstNum - secondNum;
    }

    else if (operation == '*') {
        result = firstNum * secondNum;
    }

    else if (operation == '/') {
        if (secondNum != 0) {           // Check if the denominator is 0 or not
            result = firstNum / secondNum;
        }

        else {
            cout << "Error: the second integer is 0" << endl;
        }
    }

    else {
        cout << "Incorrect input. Select +, -, *, or /." << endl;
    }

    // Display result

    cout << "['" << firstNum << "', '" << operation << "', '" << secondNum << "', '=', '" << result << "']" << endl;

    return 0;
}