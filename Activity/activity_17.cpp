// Write a program with a function which will ask for the length, width and height of a room 
//  and then pass that data to another function which will calculate and display the length of the longest pole which will fit in that room. 
//  That pole would run diagonally across the room from an upper corner to a lower
// These will both be void functions. The first one will use reference parameters.


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std; 

// Function Prototype
void longestPole(double &pole_length, double length, double width, double height);
void printPoleLength(const double &pole_length);

int main()
{
    double length_input,
           width_input,
           height_input;
    double pole_length = 0.0;

    cout << "Enter room's length: ";
    cin  >> length_input;

    cout << "Enter room's width: ";
    cin  >> width_input;

    cout << "Enter room's height: ";
    cin  >> height_input;
    
    // Call two functions
    longestPole(pole_length, length_input, width_input, height_input);
    printPoleLength(pole_length);

    return 0;
}

void longestPole(double &pole_length, double length, double width, double height)
{
    pole_length = sqrt(pow(length, 2.0) + pow(width, 2.0) + pow(height, 2.0));
}

void printPoleLength(const double &pole_length)
{
    cout << "The longest pole that can fit in the room is "
         << fixed << setprecision(2)
         << pole_length
         << endl;
}


