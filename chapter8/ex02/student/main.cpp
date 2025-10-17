// This program finds the index of the first occurrence of the smallest element in the array.
// Date: 10/17/2025

#include <iostream>

using namespace std;

// Function Prototype

int smallestIndex(int array[], int arrayLength);

int main() {
    // Write your main here
    int arrayLength = 15;
    
    int array[15];
    int indexFirstOccurence;
    int x;

    // Prompt user to input each array element

    cout << "Enter 15 integers: " << endl;
    for(x = 0; x < arrayLength; x++) {
        cin >> array[x];
    }

    indexFirstOccurence = smallestIndex(array, arrayLength);

    // Display each element of the array and the index of the first occurence of the smallest element
    
    for(x = 0; x < arrayLength; x++) {
        cout << array[x] << " ";
    }

    cout << "\nThe position of the first occurrence of the smallest element in list is: " << indexFirstOccurence << endl;
    cout << "The smallest element in list is: " << array[indexFirstOccurence] << endl;

    return 0;
}

// This function takes as parameters an int array and its size and returns 
// the index of the first occurrence of the smallest element in the array.

int smallestIndex(int array[], int length) 
{
    int indexFirstOccurence = 0;
    int smallestValue = array[0];
    int index = 0;

    for(index = 0; index < length; index++) {
        if (array[index] < smallestValue) {
            smallestValue = array[index];
            indexFirstOccurence = index;
        }
        cout << "smallestValue is " << smallestValue << endl;
        cout << "index is " << index << endl;
    }

    return indexFirstOccurence;
}