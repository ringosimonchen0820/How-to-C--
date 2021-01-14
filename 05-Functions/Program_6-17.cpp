// This program shows that a global variable is visible 
//  to all the functions that appear in a program after 
//  the variable's declaration.



#include <iostream>
using namespace std;

// Function prototype
void anotherFunction();
int num = 2;            // Global cariable

int main()
{
    cout << "In main, num is " << num << endl;
    anotherFunction();
    cout << "Back in main, num is " << num << endl;
    return 0;
}

//******************************************************
//* Definition of anotherFunction                      *
//*  This function changes the value of the            *
//*  global variable num.                              *
//******************************************************

void anotherFunction()
{
    cout << "In anotherFunction, num is " << num << endl;
    num = 50;
    cout << "But, it is now changed to " << num << endl;
}


//! num is defined outside of all the functions,
//!  cuz its definition appears before the definitions of main and anotherFunction,
//!  both functions have access to it.
