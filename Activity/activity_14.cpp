#include <iostream>   
#include <ctime>  
using namespace std;

int main ()
{
    int dice1,
        dice2;
    
    srand (time(NULL));
    dice1 = rand() % 6 + 1;
    dice2 = rand() % 6 + 1;
    cout << "Dice 1 rolled " << dice1 << endl << "Dice 2 rolled " << dice2 << endl;
    cout << "Total score " << dice1 + dice2 << endl;
    
    return 0;
}