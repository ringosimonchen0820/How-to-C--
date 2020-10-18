#include <iostream>
using namespace std;

// ProtoType
double calculateValue(int item, double cost);

int main()
{
    char choice;
    int items;
    double cost,value;
    
    do {
    // User inputs items and cost
    cout << "Enter number of items and cost: ";
    cin >> items >> cost;
    
    // Calculate the value of the items
    value = calculateValue(items, cost);
    cout << "The extended amout is $" << value << endl;
    
    // User inputs choice
    cout << "Do you have another purchase to enter? Y or N\n";
    cin >> choice;
    } while(choice == 'y' || choice == 'Y');
    
    cout << "Thank you!" << endl;

    return 0;
}

double calculateValue(int item, double cost)
{
   return item * cost;
}