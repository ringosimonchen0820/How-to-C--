// The area of a triangle can be calculated given its base and height, or given the lengths of its sides.  
//  You can find the formulas for each of these methods on the web.  
//  Write a program with two overloaded functions both named triangleArea.
//  In main, randomly ask the user to enter either base and height or the lengths of the three sides and then make the appropriate call to triangleArea. 
//  triangleArea should return the area to main where it will be displayed. 
//  The program should contain an outer loop which asks if the user wishes to continue.

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

// Function prototype
void triangleArea(int base, int height);
void triangleArea(int a, int b, int c);

int main()
{
    char ans;
    int a, b, c, base, height;
    int choice;

    do
    {
        srand (time(NULL));
        choice = 1+ rand()%2;

        switch(choice)
        {
        case 1:
            cout << "Enter base and height of a triangle." << endl;
            cin >> base >> height;
            triangleArea(base, height);
            break;

        case 2:
            cout << "Enter the lengths of the sides of a triangle." << endl;
            cin >> a >> b >> c;
            triangleArea(a, b, c);
            break;
        }

        cout << "Run again? Y or N " << endl;
        cin >> ans;

        if(tolower(ans == 'N' || ans == 'n'))
        {
            break;
        }
    } while(tolower(ans == 'Y' || ans == 'y'));

    return 0;
}

// Function -- if base and height are given
void triangleArea(int base, int height)
{
    double Area = (base * height) / 2;
    cout << "The area is " << Area << endl;
}

// Function -- if sides are given
void triangleArea(int a, int b, int c)
{
    int s = (a + b + c) / 2;
    double Area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "The area is " << Area << endl;
}

