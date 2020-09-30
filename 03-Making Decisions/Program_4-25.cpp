// This program is carefully constructed to use the "Fall through"
//  feature of the switch statement.



#include <iostream>
using namespace std;

int main()
{
    int modelNum;   // Model number

    // Get a number from the user
    cout << "Our TVs come in three models:\n";
    cout << "The 100, 200, and 300. Which do you want? ";
    cin  >> modelNum;

    // Display the model's features
    cout << "That model has the following deatures:\n";
    switch (modelNum)
    {
        case 300: cout << "\tPicture-in-a-picture.\n";
        case 200: cout << "\tStero sound.\n";
        case 100: cout << "\tRemote control.\n";
                  break;
        default : cout << "You can only choose the 100, 200, or 300.\n";
    }

    return 0;
}