#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;


int main()
{
    // Variable data type declaration
    int res,
        i,
        payoff = 1,
        total,
        pay;
    float Ftotal = 0,
          Average;

    cout << "Game is starting...\n";
    srand (time(NULL));
    // Starting of for loop and run 10 times
    for (i = 0; i < 10; i++)
    {
        // Infinite while loop, when res == 0 loop will terminate
        while(true)
        {
            res = rand() % 2;

            if (res == 1)
            {
                cout << "T";
                
                // Calculating payoff for Tail count
                payoff = payoff * 2;
            }

            if (res == 0)
            {
                cout << "H";
                pay = 2;
                break;
            }
        }
        // Calculating total win payoff for game played once;
        total = payoff * pay;

        // Calculating All win payoff
        Ftotal = Ftotal + total;

        payoff = 1;

        cout << " You win $" << total << endl;
    }

    Average = Ftotal / 10;
    cout<< "Average payoff is: $ "<< fixed << setprecision(2) << Average << endl;

    return 0;
}