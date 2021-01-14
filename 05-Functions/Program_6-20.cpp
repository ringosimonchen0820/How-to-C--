// This program demonstrates how a local variable 
//  can shadow the name of a global constant


#include <iostream>
using namespace std;

// Global constant
const int BIRDS = 500;

// Function prototype
void california();

int main()
{
    cout << "In main there are " << BIRDS
         << " birds.\n";
    california();

    return 0;
}

//****************************************
//* california function                  *
//****************************************

void california()
{
    const int BIRDS = 10000;
    cout << "In california there are " << BIRDS
         << " birds.\n";
}

//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//!  When the program is excuting in the main function, the global    !
//!   constant BIRDS,  which is set to 500, is visable.               !
//!  When the program is executing the california function, however,  !
//!   the local constant BIRDS shadows the global constant BIRDS.     !
//!  When the california function accesses BIRDS, it accesses the     !
//!   local constant.                                                 !
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!