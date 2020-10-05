#include <iostream>

using namespace std;

int main()
{
    cout << "Enter transactions -99 0 to stop" << endl;
    
    int     totalUnits = 0, 
            units, 
            transactions = 0;
    double  totalRevenue = 0, 
            max = 0, 
            min = 0, 
            price, 
            cost;
    
    cout << "Transaction # " << (transactions + 1) << ": ";
    cin >> units >> price;
    
    while (units != -99 && price != 0) {
        transactions++;
        totalUnits += units;
        cost = price * units;
        totalRevenue += cost;
        
        if (cost > max)
            max = cost;
        if (min > cost)
            min = cost;
        
        cout << "Transaction # " << (transactions + 1) << ": ";
        cin >> units >> price;
    }


    cout << "TRANSACTION PROCESSING REPORT     " << endl;
    cout << "Transaction Processed :           " << transactions << endl;
    cout << "Uints Sold:                       " << totalUnits << endl;
    cout << "Average Units per order:          " << (double) totalUnits / transactions << endl;
    cout << "Largest Transaction:              " << max << endl;
    cout << "Smallest Transaction:             " << min << endl;
    cout << "Total Revenue:               $    " << totalRevenue << endl;
    cout << "Average Revenue :            $    " << (double) totalRevenue / totalUnits << endl;

    return 0;
}