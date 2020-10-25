
#include <iostream>
using namespace std;

int main()
{
    // Create a static variable to keep track of the current balance of a bank account
    static double curr_bal = 0;

    double d;
    char ch;

    // Use the do while loop
    do
    {
        cout << "Please input amount of transaction, positive for deposit, negative for withdraw: ";
        cin  >> d;

        // Check the condition
        if((curr_bal + d) < 0 )
        {
        cout << "Not possible withdrawal, insufficient funds!\n";
        }
        else
            curr_bal += d;

        cout << "Current balance: " << curr_bal << endl;

        // ask from the use to more transaction or not
        cout << "Do you have more transactions? Y or N: ";
        cin  >> ch;

    } while(ch == 'y' || ch == 'Y');

    // Display the final balance
    cout << "Final balance: " << curr_bal << endl;

    return 0;
}