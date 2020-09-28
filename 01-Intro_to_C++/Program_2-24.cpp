// This program extracts the rightmost digital of a number
//! "%" the modulus operator divides an integer by another intergerm and gives the remainder


#include <iostream>
using namespace std;

int main()
{
    int number = 12345;
    int rightMost = number % 10;

    cout << "The rightmost digit in "
         << number << " is "
         << rightMost << endl;
    
    return 0;
}