// This program asks for three numbers, then display the average of the numbers.



#include <iostream>
using namespace std;

int main()
{
    double num1, num2, num3, avg;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;
    avg = num1 + num2 + num3 / 3;   
    cout << "The average is " << avg << endl;

    return 0;
}

//*   Example Code:
//*     Enter the first number: 10
//*     Enter the second number: 20
//*     Enter the third number: 30
//*     The average is 40
//? ===> Reason why the average is calculate as 40 is because base on line 17,
//?      30 is divided by 3 first then add 20 and then add 10
//?      which is not the right formula to excute for three numbers' average value 

