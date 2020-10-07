// This program demonstrates the prefix and postfix
//  modes of the increment and decrement operators.


#include <iostream>
using namespace std;

int main()
{
    int num = 4;

    cout << num << endl;        // Displays 4
    cout << num++ << endl;      // Displays 4, then adds 1 to num
    cout << num << endl;        // Displays 5
    cout << ++num << endl;      // Adds 1 to num, then displays 6
    cout << endl;               // Display a blank line
    cout << num << endl;        // Display 6
    cout << num-- << endl;      // Display 6, then subtracts 1 from num
    cout << num << endl;        // Display 5
    cout << --num << endl;      // Substracts 1 from num, then displays 4

    return 0;
}