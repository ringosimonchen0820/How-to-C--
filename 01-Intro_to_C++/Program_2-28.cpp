// This program calculates the circumference of a circle using named constants and other variables.
//! named constant is like a variable, but its content is read-only and cannot be changed while the program is running.


#include <iostream>
using namespace std;

int main()
{
    // Constants.
    const double PI = 3.14159;
    const double DIAMETER = 10.0;

    // Variables to hold the circumferemce.
    double circumference;

    // Calculate the circumference.
    circumference = PI * DIAMETER;

    // Display the circumference.
    cout << "The circumference is: " << circumference << endl;

    return 0;

}
