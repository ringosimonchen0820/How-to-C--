#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

int main()
{
    string  partNumber,
            letter;
    int     quantity;
    double  price;
    
    ifstream fin("parts.txt");
    if (!fin) {
        cout << "Error opening file\n";
        return 0;
    }
    
    int     partA = 0,
            partB = 0,
            partC = 0,
            partD = 0,
            partU = 0;
    double  partAprice = 0,
            partBprice = 0,
            partCprice = 0,
            partDprice = 0,
            partUprice = 0;

    while (fin >> partNumber >> letter >> quantity >> price) {
        if (letter == "A") {
            partA++;
            partAprice = partAprice + price * quantity;
        }
        if (letter == "B") {
            partB++;
            partBprice = partBprice + price * quantity;
        }       
        if (letter == "C") {
            partC++;
            partCprice = partCprice + price * quantity;
        }       
        if (letter == "D") {
            partD++;
            partDprice = partDprice + price * quantity;
        }       
        if (letter == "U") {
            partU++;
            partUprice = partUprice + price * quantity;
        }       
    }

    fin.close();

    cout << "------------------------------INVENTORY REPORT--------------------------------\n";
    cout << "A    parts    Count:" << setw(10) << partA << setw(20) << "Value of inventory:" << setw(20) << fixed << setprecision(2) << partAprice << endl;
    cout << "B    parts    Count:" << setw(10) << partB << setw(20) << "Value of inventory:" << setw(20) << fixed << setprecision(2) << partBprice << endl;
    cout << "C    parts    Count:" << setw(10) << partC << setw(20) << "Value of inventory:" << setw(20) << fixed << setprecision(2) << partCprice << endl;
    cout << "D    parts    Count:" << setw(10) << partD << setw(20) << "Value of inventory:" << setw(20) << fixed << setprecision(2) << partDprice << endl;
    cout << "Unknown       Count:" << setw(10) << partU << setw(20) << "Value of inventory:" << setw(20) << fixed << setprecision(2) << partUprice << endl;

    return 0;
}