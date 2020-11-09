// Write a program which asks the user to enter a string and then passes it to a void recursive function which displays the string in reverse. 

#include <iostream>
#include <string>
using namespace std;

// Function prototype
void reverse(string s, int i);

int main()
{
    string strIn;

    cout << "Enter a string:" << endl;
    getline(cin, strIn);
    reverse(strIn, strIn.length());
    cout << endl;
    
    return 0;
}

void reverse(string s, int i)
{
    if (i > 0)
    {
        cout << s[ i - 1];
        reverse(s, i - 1);
    }
}