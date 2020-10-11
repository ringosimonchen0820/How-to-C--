#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    ifstream inf("FleetInput.txt");

    string  id;
    int     FLT_MAX ;
    float   miles,
            gallons;
    cout << fixed << setprecision(1);
    cout << "AMSCO Fleet Report" << endl;
    cout << "------------------------------------------------" << endl;
    
    int     count = 0;
    float   total_miles = 0.0;
    string  best = "";
    string  worst = "";
    float   b = 0.0;
    float   w = FLT_MAX;
    
    cout << "Vehicle ID" << setw(15) << "Miles" << setw(15) << "Gallons" << setw(15) << "MPG" << endl;
    while (inf >> id >> miles >> gallons) {
        cout << id << setw(15) << miles << setw(15) << gallons << setw(15) << miles / gallons << endl;
        count++;
        
        if (miles / gallons > b) {
            best = id;
            b = miles / gallons;
        }
        
        if (miles / gallons < w) {
            worst = id;
            w = miles / gallons;
        }
        
        total_miles = total_miles + miles;
    }
    cout << "------------------------------------------------"<< endl;
    cout << "Count: " << count << endl;
    cout << "Total Miles: " << total_miles << endl;
    cout << "Average MPG: " << total_miles / count << endl;
    cout << "Vehicle ID with best MPG: " << best << " " << b << endl;
    cout << "Vehicle ID with worst MPG: " << worst << " " << w << endl;

    return 0;
}