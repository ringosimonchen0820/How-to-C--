#include <iostream>
#include <cstdlib>  // srand and rand functions
#include <ctime>    // time function
using namespace std;

int main()
{
    const int C = 100;  // constant integer with defined value 100
    char type;  // type of option chosen
    cout << "Would you like to (p)lay or watch the (c)omputer play?" << endl;
    cin  >> type;   // input of type

    do
    {
        int x;
        srand(unsigned(time(NULL))); // set different seeds to make sure each run of this program will generate different random numbers
        x = (rand() % C);   // generate a random integer between 0 and c-1
        x++;    // random value between 1 and 100
        int check = -1; // make initial check = -1
        int ends = C;   // for type selected as c, make the initial guess to be chosen from 1 to 100
        int start = 1;
        
        while(true)
        {
            // if selected type is p
            if (type == 'p')
            {
                cout << "Enter your guess in between 1 and 100." << endl;
                cin  >>  check;
            }
            
            // if selected type is c
            else if (type == 'c')
            {
                //get a random number between updated start and ends for computer guessing
                check = start + (rand() % (ends - (start - 1)));
                cout << "The computer's guess is " << (check) << "." << endl;
            }
            
            // if type is not equal to c or p or q
            else
            {
                cout << "Invalid option chosen" << endl;
                break;
            }

            // if the guess is greater
            if (check > x)
            {
                cout << "Sorry, your guess is too high, try again." << endl;
                
                // update ends in case type is c
                ends = check - 1;
            }
            
            else if (check < x)
            {
                cout << "Sorry, your guess is too low, try again." << endl;
                
                // update start
                start = check + 1;
            }
            
            // if right number is selected
            else
            {
                cout << "Congrats, you guessed the correct number, " << x << "." << endl;
                break;
            }
        }
        
        cout << "Would you like to (p)lay or watch the (c)omputer play or (q)uit?" << endl;
        cin  >> type;
    } while(type != 'q');
    
    return 0;
}