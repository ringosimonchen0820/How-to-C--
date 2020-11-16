//  Write a C++ program which declare an array which can hold 50 int values. Use a const to establish the size of
//   the array. Use a loop to fill the array with 50 random numbers. Then display the values 10 per line, like:

// **************************************************************************************** 
// *    32734  11377  29730  25790  27662  31264   5530   7441  14377  21719              *
// *    28059  27864   4276   1495  29687  12784  19497  31106  21525  22643              *
// *                                                                                      *
// *    ...                                                                               *
// ****************************************************************************************


#include <iostream>
#include <iomanip> 
#include <ctime>
using namespace std;

int main()
{
    const int SIZE = 50;
    int arr[SIZE];

    // Initialize all the elements of array with random values seed rand()
    srand (time(NULL));
    for (int i = 0; i < SIZE; i++) {
        // rand() will generate random values
        arr[i]=rand();
    }
    
    int count = 1; // Displaying 10 elements in one line

    for (int i = 0; i < SIZE; i++) {
        if(count == 11) {
            cout<<"\n"<<setw(11)<<arr[i]<<" ";
            count = 2;
        } else {
            cout << setw(11) << arr[i] <<" ";
            count++;
        }
    }

    return 0;
}