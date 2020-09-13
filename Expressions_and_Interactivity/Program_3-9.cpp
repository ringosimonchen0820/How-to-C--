// This program uses a type cast to avoid integer division.
//! Type casting allows you to perform manual data type conversion.
//?  General format of a type cast expression is :
//?  ---> static_cast<DataType>(Value)
//     
//*             ==== Example Code ===
//*       
//*             double number = 3.7;
//*             int val;
//*             val = static_cast<int>(number)



#include <iostream>
using namespace std;

int main()
{
    int books;          // Number of books to read.
    int months;         // Number of months spent reading.
    double perMonth;    // Average number of books per month.

    cout << "How many books do you plan to read? ";
    cin >> books;
    cout << "How many months will it take you to read them? ";
    cin >> months;
    perMonth = static_cast<double>(books) / months;
    cout << "That is " << perMonth << " books per onth.\n";

    return 0;
}