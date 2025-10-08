// This program takes an integer as a parameter and returns the number with its digits reversed.
// Date: 10/8/2025

#include <iostream>
#include <cmath>
using namespace std;

int reverseDigit(int integer);

int main() {
    // Write your main here
    int integer;
    int reversedInt;
    int numOfDigits;
    

    // Prompt user to enter the integer

    cout << "Enter the integer to be reversed: " << endl;
    cin >> integer;

    reversedInt = reverseDigit(integer);

    // Display the reversed number

    cout << "the value of reverseDigit(" << integer << ") is " << reversedInt << endl;

    return 0;
}

// This function reverses the digits of a number

int reverseDigit(int integer) 
{
    int digit = 0;
    int revNumber = 0;
    
    if (integer < 0) { // Execute if original integer is negative
        integer = integer * -1; 

        while(integer > 0) {
            digit = integer % 10;
            integer = integer / 10;
            revNumber = (revNumber * 10) + digit;
        }// end while

        revNumber = revNumber * -1;
    }// end if

    else {  // Execute if original integer is positive
        while(integer > 0) {
        digit = integer % 10;
        integer = integer / 10;
        revNumber = (revNumber * 10) + digit;
        }// end while
    }

    return revNumber;
}// end function