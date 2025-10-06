// This program finds the area of a rectangle, the area of a circle,
// or the volume of a cylinder.
// Date: 10/6/2025

#include <iostream>
#include <iomanip>

using namespace std;

// Function prototypes

const double PI = 3.14159;
double rectangle(double l, double w);
double circle(double r);
double cylinder(double bR, double h);

int main()
{
    // Declare variables

    double length, width;
    double radius;
    double height;
    int choice;

    // Prompt user to enter input

    cout << fixed << showpoint << setprecision(2) << endl;
    cout << "This program can calculate the area of a rectangle, "
        << "the area of a circle, or volume of a cylinder." << endl;
    cout << "To run the program enter: " << endl;
    cout << "1: To find the area of rectangle." << endl;
    cout << "2: To find the area of a circle." << endl;
    cout << "3: To find the volume of a cylinder." << endl;
    cout << "-1: To terminate the program." << endl;
    cin >> choice;
    cout << endl;
    
    while (choice != -1)
    {
        switch(choice)
        {
        case 1: 
            cout << "Enter the length and the width "
                 << "of the rectangle: ";
            cin >> length >> width;
            cout << endl;
            cout << "Area = " <<  rectangle(length, width)
                 << endl;
            break;

        case 2:
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            cout << endl;
            cout << "Area = " << circle(radius)
                 << endl;
            break;

        case 3:
            cout << "Enter the radius of the base and the "
                 << "height of the cylinder: ";
            cin >> radius >> height;
            cout << endl;
            cout << "Volume = " << cylinder(radius, height) << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

        // Allow the user to continue or quit the program

        cout << "\nTo run the program enter: " << endl; 
        cout << "1: To find the area of rectangle." << endl;
        cout << "2: To find the area of a circle." << endl;
        cout << "3: To find the volume of a cylinder." << endl;
        cout << "-1: To terminate the program." << endl;
        cin >> choice;
        cout << endl;    
    }
    
    return 0;
 }

// This function finds the area of a rectangle

double rectangle(double l, double w)
{
    return l * w;
}

// This function finds the area of a circle

double circle(double r)
{
    return PI * (r * r);
}

// This function finds the volume of a cylinder

double cylinder(double bR, double h)
{
    return PI * (bR * bR) * h;
}
