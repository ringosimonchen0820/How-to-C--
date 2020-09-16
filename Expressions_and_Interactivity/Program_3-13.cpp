// This program display three rows of numbers in a lined up format
//! setw() can be used to establish print fields of a specified width

/*
TODO   Example Code:
TODO  
TODO   value = 23;
TODO   cout << "(" << setw(5) << value << ")";
TODO   
*/
// *   Above code should output as:
// *   (     23)



#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num1 = 2897,    num2 = 5,       num3 = 837,
        num4 = 34,      num5 = 7,       num6 = 1623,
        num7 = 390,     num8 = 3456,    num9 = 12;
    
    // Display the first row of numbers.
    cout << setw(6) << num1 << setw(6)
         << num2 << setw(6) << num3 << endl;
    
    // Display the second row of numbers.
    cout << setw(6) << num4 << setw(6)
         << num5 << setw(6) << num6 << endl;
    
    // Display the third row of numbers.
    cout << setw(6) << num7 << setw(6)
         << num8 << setw(6) << num9 << endl;
    
    return 0;

}