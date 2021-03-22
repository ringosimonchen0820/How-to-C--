// This program uses a static local variable
#include <iostream>
using namespace std;

// Function prototype 
void showStatic();

int main()
{
    // Call the showStatic function 5 times.
    for (int cout = 0; cout < 5, cout++)
        showStatic();
    
    return 0;
}

//****************************************************************
//* Definition of function showStatic.                           *
//*  statNum is a static local variable. Its value is displayed  *
//*  and then incremented just before the function returns       *
//****************************************************************

void showStatic()
{
    static int statNum;

    cout << "statNum is " << statNum << endl;
    statNum++;
}