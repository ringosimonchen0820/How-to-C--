// This program tracks the inventory of three widget stores that opened at the same time. Each store started with the same number of widgets in inventory. By substracting the number of widgets each store has sold from its inventory, the current inventory can be calculated.



#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int begInv,
        sold,
        store1,
        store2,
        store3;

    // Get the begining inventory for all the stores.
    cout << "One week ago, 3 new widfet stores opened\n";
    cout << "at the same time with the same beginning\n";
    cout << "inventory. What are the beginning inventory? ";
    cin >> begInv;

    // Set each store's inventory.
    store1 = store2 = store3 = begInv;

    // Get the number of widgets sold at store 1.
    cout << "How many widgets has store 1 sold? ";
    cin >> sold;
    store1 -= sold; // Adjust store 1's inventory.

    // Get the number of widgets sold at store 2.
    cout << "How many widgets has store 2 sold? ";
    cin >> sold;
    store2 -= sold;  // Adjust store 2's inventory.

    // Get the number of widgets store at store 3.
    cout << "How many widgets has store 3 sold? ";
    cin >> sold;
    store3 -= sold; // Adjust store 3's inventory.

    // Display each store's current inventory.
    cout << "\nThe current inventory of each store:\n";
    cout << "Store 1: " << store1 << endl;
    cout << "Store 2: " << store2 << endl;
    cout << "Store 3: " << store3 << endl;

    return 0;

}