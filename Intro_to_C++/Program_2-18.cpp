// This program determines the size of intergers, long intergers, and long doubles.
//!   The sizeof operator may be used to determine the size of a data type on any system.


#include <iostream>
using namespace std;

int main()
{
    long double apple;

    cout << "The size of an interger is " << sizeof(int);
    cout << " bytes." << endl;

    cout << "The size of a long interger is " << sizeof(long);
    cout << " bytes." << endl;

    cout << "An apple can be eaten in " << sizeof(apple);
    cout << " bytes!" << endl;

    return 0;

}