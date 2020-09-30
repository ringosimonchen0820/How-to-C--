// The switch statement in this program uses the "fall through"
//  feature to catch both uppercase and lower case letters entered
//  by the user.



#include <iostream>
using namespace std;

int main()
{
    char feedGrade;

    // Get the desired grade of feed.
    cout << "Our pet food is available in three grades:\n";
    cout << "A, B, and C. which do you wnat pricing for? ";
    cin  >> feedGrade;

    // Display the price
    switch(feedGrade)
    {
        case 'a':
        case 'A': cout << "30 cents per pound.\n";
                  break;
        case 'b':
        case 'B': cout << "20 cents per pound.\n";
                  break;
        case 'c':
        case 'C': cout << "10 cents per pound.\n";
                  break;
        default: cout << "That is an invalid choice.\n";
    }
    
    return 0;
}