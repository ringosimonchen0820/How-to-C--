// This program displays three rows of numbers.
//! The cout object provides ways to format data as it is being displayed.
//! This affects the way data appears on the screen.



#include <iostream>
using namespace std;

int main()
{
    int num1 = 2897,    num2 = 5,       num3 = 837,
        num4 = 34,      num5 = 7,       num6 = 1623,
        num7 = 390,     num8 = 3456,    num9 = 12;
    
    // Display the first row of numbers.
    cout << num1 << " " << num2 << " " << num3 << endl;

    // Display the second row of numbers.
    cout << num4 << " " << num5 << " " << num6 << endl;

    // Display the third row of numbers.
    cout << num7 << " " << num8 << " " << num9 << endl;

    return 0;
}

//? Unfortunately the numbers do not line up in columns