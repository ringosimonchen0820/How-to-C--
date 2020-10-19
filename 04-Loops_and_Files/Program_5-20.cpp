// This program reads numbers from a file.



#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile;
    int value1, value2, value3, sum;

    // Open the file.
    inputFile.open("Numbers.txt");

    // Read the three numbers from the file.
    inputFile >> value1;
    inputFile >> value2;
    inputFile >> value3;

    // Close the file;
    inputFile.close();

    // Calculate the sum of the numbers.
    sum = value1 + value2 + value3;

    // Display the three numbers.
    cout << "Here are the numbers:\n"
         << value1 << " "
         << value2 << " "
         << value3 << " "
         << endl;
    
    // Display the sum of the numbers
    cout << "Their sum is: "
         << sum 
         << endl;

    return 0;
}