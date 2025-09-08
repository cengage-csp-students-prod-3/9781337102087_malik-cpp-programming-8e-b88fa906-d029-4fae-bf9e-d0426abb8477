// This program arranges three numbers in 
// accending order and prints them to the console.
// Date: 9/8/2025
#include <iostream>

using namespace std;

int main() {

    // Declare variables
    int num1 = 00;
    int num2 = 00;
    int num3 = 00;
    int largestNum;
    int middleNum;
    int smallestNum;

    // Prompt user to enter three numbers

    cout << "Enter the first number" << endl;
    cin >> num1;

    cout << "Enter the second number" << endl;
    cin >> num2;

    cout << "Enter the third number" << endl;
    cin >> num3;

    // Finding the greatest number

    // Compare num1 and num2 to find which number is greater

    if (num1 > num2) {
        largestNum = num1;
    }
    else {
        largestNum = num2;
    }

    if (largestNum < num3) {
        largestNum = num3;
    }

    // Finding the smallest number
    
    // Compare each number to first and second greatest number to find least greatest number

    if (num1 < num2) {
        smallestNum = num1;
    }
    else {
        smallestNum = num2;
    }

    if (smallestNum > num3) {
        smallestNum = num3;
    }

    // Finding the middle number

    if ((num1 != largestNum) && (num1 != smallestNum)) {
        middleNum = num1;
    }

    if ((num2 != largestNum) && (num2 != smallestNum)) {
        middleNum = num2;
    }

    if ((num3 != largestNum) && (num3 != smallestNum)) {
        middleNum = num3;
    }

    cout << "\nThe smallest number is: " << smallestNum << endl;
    cout << "\nThe middle number is: " << middleNum << endl;
    cout << "\nThe largest number is: " << largestNum << endl;

    return 0;
}
