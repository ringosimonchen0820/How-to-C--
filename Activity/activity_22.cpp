//  Write a C++ program which declare an array which can hold 50 int values. Use a const to establish the size of
//   the array. Use a loop to fill the array with 50 random numbers. Then display the values 10 per line, like:

// **************************************************************************************** 
// *    32734  11377  29730  25790  27662  31264   5530   7441  14377  21719              *
// *    28059  27864   4276   1495  29687  12784  19497  31106  21525  22643              *
// *                                                                                      *
// *    ...                                                                               *
// ****************************************************************************************


#include <iostream>
#include <ctime>
#include <iomanip> //to display formatted output
using namespace std;

int main()
{
    //declare constant variable
    const int SIZE=50;
    //declare array
    int arr[SIZE];

    //initialize all the elements of array with random values
    srand(time(NULL));
    for(int i=0;i<SIZE;i++){
        //rand() will generate random values
        arr[i]=rand();
    
    }
    int count=1; //for displaying 10 elements in one line

    //traverse the elements of array from 0 to 49
    for(int i=0;i<SIZE;i++){

        //if displayed 10 elements in a line
        if(count==11){
            //display the next element in a new line
            //setw(11) will display the element within 11 column
            //setw sets the width of the field assigned for the output
            cout<<"\n"<<setw(11)<<arr[i]<<" ";
            //since one element of the new line displayed set count to 2
            count=2;
        }
        //if have not yet displayed 10 elements in a line
        else{
            cout<<setw(11)<<arr[i]<<" ";
            //increment count
            count++;
        }
    }

    return 0;
}