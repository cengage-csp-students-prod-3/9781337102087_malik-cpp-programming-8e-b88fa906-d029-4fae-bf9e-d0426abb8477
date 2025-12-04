// This program converts the person's date of birth in a long format, such as "August 27, 1980".
// Date: 12/4/2025

#include <iostream>
#include "invalidMonth.h"
#include "invalidDay.h"

using namespace std;

int main() {
    // Write your main here
        int day;
        int month;
        int year;
        string monthWord = "";
        int daysInAMonth;
        bool done = false;
        bool isLeapYear = false;

        // Prompt user to enter year of birth

        cout << "Enter your year of birth." << endl;
        do {
            cin >> year;
            cout << endl;
            if (year <= 0) {
                cout << "The input entered is negative. Enter a positive number." << endl;
            }
        }
        while (year <= 0);

        // Prompt user to enter month of birth

        cout << "Enter your month of birth as a numeric value (1 through 12)." << endl;
        do {
            try // Check if input is within correct range
            {       
                cin >> month;
                cout << endl;
                if (month <= 0 || month > 12) {
                    throw invalidMonth();
                }

                done = true;
            }

            // Display error message and prompt user to enter correct input

            catch (invalidMonth object) {
                cout << "The input entered is incorrect. Enter a month between 1 and 12." << endl;
            }

        }
        while (done == false);

        // Determine if the year entered is a leap year

        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            isLeapYear = true;
        }

        // Find the exact number of days in a month

        if (month < 8) {

            if (month == 2) {   // Check if the month entered is February
                if (isLeapYear == true) {
                    daysInAMonth = 29;
                }

                else {
                   daysInAMonth = 28; 
                }
            }

            else if (month % 2 != 0) {
                daysInAMonth = 31;
            }

            else {
                daysInAMonth = 30;
            }
        }

        else if (month >= 8) {
            if (month % 2 == 0) {
                daysInAMonth = 31;
            }

            else {
                daysInAMonth = 30;
            }
        }

        // Prompt user to enter day of birth

        done = false;
        cout << "Enter your day of birth as a numeric value (1 through 30 or 31)." << endl;
        do {
            try // Check if input is within correct range
            {
                cin >> day;
                cout << endl;
                if (day <=0 || day > daysInAMonth) {
                    throw invalidDay();
                }

                done = true;
            }

            // Display error message and prompt user to enter correct input

            catch (invalidDay object)
            {
            cout << "The input entered is incorrect. Enter a day between 1 and 30." << endl;
            }
        }
        while (done == false);

        // Determines the name of month based on number entered

        if (month == 1) {
            monthWord = "January";
            
        }

        else if (month == 2) {
            monthWord = "Feburary";
        }

        else if (month == 3) {
            monthWord = "March";
        }

        else if (month == 4) {
            monthWord = "April";
        }

        else if (month == 5) {
            monthWord = "May";
        }

        else if (month == 6) {
            monthWord = "June";
        }

        else if (month == 7) {
            monthWord = "July";
        }

        else if (month == 8) {
            monthWord = "August";
        }

        else if (month == 9) {
            monthWord = "September";
        }

        else if (month == 10) {
            monthWord = "October";
        }

        else if (month == 11) {
            monthWord = "November";
        }

        else if (month == 12) {
            monthWord = "December";
        }

        cout << monthWord << " " << day << ", " << year << endl;

        return 0;
}