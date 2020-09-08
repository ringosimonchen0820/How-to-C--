// This program asks the user to enter the length and width of a rectangle. It calculates the rectangels's area and displays the value on the screen.
//! "cin" object may be used to gather multioke values at once.


#include <iostream>
using namespace std;

int main()
{
    int length,
        width,
        area;
    
    cout << "This program calculates the area of a rectangle.\n";
    cout << "Enter the length and width of the rectangle separated by a space.\n";
    cin >> length >> width;
    area = length * width;
    cout << "The area of the rectangle is " << area << "." << endl;
}