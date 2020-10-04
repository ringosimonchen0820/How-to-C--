/*
TODO    Write a program which asks the user to enter a number which represents a weekday 
TODO    (e.g., 1 for Sunday, 2 for Monday, etc.). 
TODO    Do not accept a number that is out of range. 
TODO    Then display the name of that day. 
TODO    Encase your logic in an outer loop which asks the user 
TODO     if he or she wants to enter another number. 
TODO    An entry of Y will continue asking for days, anything else should end the program. 
*/



#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    // declair variables needed 
    char again;
    int  number;

    // do-while loop
    do {
        cout << "Enter a day of week value: ";
        cin  >> number;
        
        // using switch statement to translate number imput name of that day
        switch (number) {
            case 1 :
                cout << "Monday\n";
                break;
            case 2 :
                cout << "Tuesday\n";
                break;
            case 3 :
                cout << "Wednesday\n";
                break;
            case 4 :
                cout << "Thursday\n";
                break;
            case 5 :
                cout << "Friday\n";
                break;
            case 6 :
                cout << "Saturday\n";
                break;
            case 7 :
                cout << "Sunday\n";
                break;
            default : 
                cout << number
                     << " is invalid\n";
        }

        // determine whether the the user want to continue the program
        cout << "Do you want to continue?";
        cin  >> again;
    } while (again == 'Y' || again == 'y');

    cout << "Goodbye! Thank you for using our program!" << endl;

    return 0;
}