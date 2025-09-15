// The program outputs the individual digits of a number and the sum of the digits.
// Date: 9/15/2025

#include <cmath>
#include <iostream>

using namespace std;

int main() {

    // Write your main here
    int num;
    int digit;
    int sum = 0;
    int pwr = 0;
    int testNum;
    int reversedNum = 0, remainder, revNumber = 0;

    // Input a number

    cout << "Enter a number: ";
    cin >> num;

    // Check if the number is not negative

    if (num < 0) {
        num = num * -1;
    }

    // Find how many digits are in the number

    testNum = num;
    while (testNum > 0) {

        digit = testNum % 10;
        sum = sum + digit;
        testNum = testNum / 10;
        pwr++;
    }

    int i = num;
    while (i > 0) {
        remainder = i % 10;
        i = i / 10;
        revNumber = (revNumber * 10) + remainder;
    }
    cout << revNumber << endl;

    // Print out each individual digit

    cout << "Number " << num << " as " << endl;
    while (revNumber > 0) {
        digit = revNumber % 10;
        cout << digit << " ";
        revNumber = revNumber / 10;
    }
   
    cout << "\nThe sum is: " << sum << endl;
    return 0;
}