// This program calculates the number of boxes and the number of 
// containers to ship the specified number of cookies. 
// It also calculates the number of leftover boxes and leftover cookies.,

#include <iostream>

using namespace std;

int main() {

    // Write your main here
    int boxes = 0;
    int containers = 0;
    int leftoverCookies = 0;
    int leftoverBoxes = 0;
    int totalCookies;

    const int COOKIESPERBOX = 24;
    const int BOXESPERCONTAINER = 75;

    // Input the number of cookies

    cout << "Enter the number of cookies to be shipped: ";
    cin >> totalCookies;
    cout << totalCookies << endl;

    // Calculate the number of boxes needed and find the number of leftover cookies

    boxes = totalCookies / COOKIESPERBOX;

    //if (totalCookies % COOKIESPERBOX !=0){
       leftoverCookies = totalCookies % COOKIESPERBOX;     
    //}
    
    // Calculate the number of containers needed and find the number of leftover boxes

    containers = boxes / BOXESPERCONTAINER;

    if (boxes > BOXESPERCONTAINER) {
        leftoverBoxes = boxes % BOXESPERCONTAINER;
    }

    // Output the number of boxes and containers needed

    cout << "Number of boxes needed: " << boxes << endl;
    cout << "\nNumber of containers needed: " << containers << endl;
    cout << "\nNumber of leftover cookies: " << leftoverCookies << endl;
    cout << "\nNumber of leftover boxes: " << leftoverBoxes << endl;

    return 0;
}
