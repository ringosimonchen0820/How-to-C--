// This program shows variable initialization.
/*
!   An assignment operation assigns, or copies, a value into a variable.
!   When a value is assigned to a variable as part of the variable's definition,
!   it is called an initialization.
*/  
/* 
*    Operand on the left side of the "=" must be an ivalue
*     12 = unitsSold ===> Incorrect
*     unitsSold = 12 ===> Correct 
*/


#include <iostream>
using namespace std;

int main()
{
    int month = 2, // variable month is initialized to 2
        days; // variable days is uninitialized

    days = 28;
    cout << "Month " << month << " has " << days << " days." << endl;
    
    return 0;
}

