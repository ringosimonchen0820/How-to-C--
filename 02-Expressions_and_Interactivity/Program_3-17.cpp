// This program asks for sales amount for 3 days. The total sales are calculated and displayed in a table.
//! When the precision of a number is set to a lower valuem numbers tend to be printed in scientific notation.



#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double day1, day2, day3, total;

    // Get the sales for each day.
    cout << "Enter the sales for day 1: ";
    cin >> day1;
    cout << "Enter the sales for day 2: ";
    cin >> day2;
    cout << "Enter the sales for day 3: ";
    cin >> day3;

    // Calculete the total sales.
    total = day1 + day2 + day3;

    // Display
    cout << "\nSales Amounts\n";
    cout << "----------------\n";
    cout << setprecision(2) << fixed;   //! "fixed" forces "cout" to print the digits in fixed-point notation, or decimal.
    cout << "Day 1: " << setw(8) << day1 << endl;
    cout << "Day 2: " << setw(8) << day2 << endl;
    cout << "Day 3: " << setw(8) << day3 << endl;
    cout << "Total: " << setw(8) << total << endl;

    return 0;

}