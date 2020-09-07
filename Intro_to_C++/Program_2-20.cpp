// This program can't find its variable.
//!   Variable cannot be used in any part of the program before the definition


#include <iostream>
using namespace std;

int main()
{
    cout << value; // ERROR!! value not defined yet!

    int value = 100;

    return 0;
}
// The program will run into an error