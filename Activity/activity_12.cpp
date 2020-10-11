#include <iostream>
using namespace std;

void ulamSeq(int num);
int main() 
{
    int n = 0;

    // Input number from user
    cout << "Enter number: ";
    cin  >> n;

    // Validate user input
    while (n < 2) {
        cout << "Number should be greater than 2, Enter again: ";
        cin  >> n;
    }

    // Call the ulam sequence function
    ulamSeq(n);

    return 0;
}

// Create ulam sequence function
void ulamSeq (int num) 
{
    cout << "Calculating ULAM sequence starting from " << num  << " : "<< endl;
    cout << num;

    do 
    {
        // Checks for odd or even
        if (num % 2 == 0)  
            num = num / 2;

        else
        num = num * 3 + 1;
            
        cout << " " << num;
    } while (num != 1);
}