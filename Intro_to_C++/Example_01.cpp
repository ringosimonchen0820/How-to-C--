/*
    Write a program that will ask the user to enter 5 integers,
    read them in and display their average.
    Average should be a double.
    A typical run might look similar to the following:

    Enter 5 integers: 3 8 9 6 7  The average is 6.6

    Write and compile a complete program and run it in your preferred integrated development environment (IDE).
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num1, num2, num3, num4, num5;
    double average;

    cout << fixed << setprecision(1);
    cout << "Enter first integer: " << endl;
    cin >> num1;
    cout << "Enter second integer: " << endl;
    cin >> num2;
    cout << "Enter third integer: " << endl;
    cin >> num3;
    cout << "Enter fourth integer: " << endl;
    cin >> num4;
    cout << "Enter fifth integer: " << endl;
    cin >> num5;
    average = (num1 + num2 + num3 + num4 + num5) / (double)5;
    cout << "The average of " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << ", and " << num5 << " is " << average << endl;

    return 0;
}
/*
  Sample execution:

    Enter first integer:
    6
    Enter second integer:
    5
    Enter third integer:
    8
    Enter fourth integer:
    7
    Enter fifth integer:
    1
    The average of 6, 5, 8, 7, and 1 is 5.4
*/