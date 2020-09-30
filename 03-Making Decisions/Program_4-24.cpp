// The switch statement in this program tells the user something 
//  he or she already knows: the data just entered
//  The following will demonstrate how break statements affect the program



#include <iostream>
using namespace std;

int main()
{
    char choice;

    cout << "Enter A, B, or C: ";
    cin  >> choice;
    switch (choice) // No break statements under each condition
    {
        case 'A' : cout << "You entered A.\n";
        case 'B' : cout << "You entered B.\n";
        case 'C' : cout << "You entered C.\n";
        default  : cout << "You did not enter A, B, or C!\n";
    }

    return 0;
}

//! Without the break statement, the program "falls through"
//!  all of the statements below the one with the matching case expression.

