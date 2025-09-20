// This program converts a telephone number expressed in letters 
// to the corrsponding digits.
// Date: 9/19/2025

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
        // Write your main here

    string telephoneInLetters = "";
    string telephoneInNum = "";
    char yesOrNo;
    int numOfLetters = 0;
    const int MAX_NUM_OF_LETTERS = 7;
    char letter;
    int digit = 0;

    // Prompt the user to enter y or any other letter to exit the program

    cout << "Enter Y/y to convert a telephone number from letters to digits. \nEnter any other letter to terminate the program." << endl;
    cin >> yesOrNo;

    while ((yesOrNo == 'y') || (yesOrNo == 'Y')) {

        

        // Enter a telephone number expressed in letters

        cout << "Enter a telephone number using letters: ";
        cin >> telephoneInLetters;

        numOfLetters = telephoneInLetters.length();
        if (numOfLetters > MAX_NUM_OF_LETTERS) {
            numOfLetters = MAX_NUM_OF_LETTERS;
        }

        // Convert string to lowercase

        transform(telephoneInLetters.begin(), telephoneInLetters.end(), telephoneInLetters.begin(),
            [](unsigned char c) { return std::tolower(c); });

        // Convert each letter of the string to a digit

        int i = 0;

        while (i < numOfLetters) {

            if (i == 3) {
                telephoneInNum.append("-"); // Add a hyphen after the third digit
            }

            letter = telephoneInLetters[i];

            // Uses the phone dialpad to process each letter to a digit

            if ((letter == 'a') || (letter == 'b') || (letter == 'c')) {
                digit = 2;
            }

            else if ((letter == 'd') || (letter == 'e') || (letter == 'f')) {
                digit = 3;
            }

            else if ((letter == 'g') || (letter == 'h') || (letter == 'i')) {
                digit = 4;
            }

            else if ((letter == 'j') || (letter == 'k') || (letter == 'l')) {
                digit = 5;
            }

            else if ((letter == 'm') || (letter == 'n') || (letter == 'o')) {
                digit = 6;
            }

            else if ((letter == 'p') || (letter == 'q') || (letter == 'r') || (letter == 's')) {
                digit = 7;
            }
            else if ((letter == 't') || (letter == 'u') || (letter == 'v')) {
                digit = 8;
            }

            else if ((letter == 'w') || (letter == 'x') || (letter == 'y') || (letter == 'z')) {
                digit = 9;
            }

            telephoneInNum.append(to_string(digit));
            i++;
        }

        // Output the corresponding telephone number in digits.

        cout << "The corresponding telephone number is: ['" << telephoneInNum << "']" << endl;
        
        //for (int x = 0; x < numOfLetters; x++) {
            //telephoneInNum.erase();
       // }

        cout << "To process another telephone number, enter Y / y \nEnter any other letter to terminate the program." << endl;
        cin >> yesOrNo;
    }

    return 0;
}