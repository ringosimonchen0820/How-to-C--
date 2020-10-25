//***********************************************************************************************
//*  Write a function that will accept a number in the range 1 through 5,                       * 
//*  and then use a switch statement to display the name of that number.                        *
//*  The function should return the name eg.                                                    *
//*  Five for 5 or “Invalid Input” if the number passed to the function is out of range.        *
//***********************************************************************************************


#include <iostream>
using namespace std;

void display(int n)
{
    switch(n)
    {
        case 1:
            cout << "One" << endl;
            break;
        
        case 2:
            cout << "Two" << endl;
            break;
        
        case 3:
            cout << "Three" << endl;
            break;
        
        case 4:
            cout << "Four" << endl;
            break;
        
        case 5:
            cout << "Five" << endl;
            break;
        
        default:
            cout << "Invalid Input" << endl;
    }
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    display(number);
    
    return 0;
}