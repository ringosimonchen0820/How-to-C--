#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    // Set up variables
    int temp_i = -5;
    int wind_speed;
    
    // header
    cout << "Temp: " << setfill('-') << setw(39) << '-' << "Wind Speed" << setw(39) << '-' << endl;
    cout << setfill(' ') << fixed;
    cout << setw(14);
    for (wind_speed = 5; wind_speed <= 45; wind_speed += 5)
    {
        cout << wind_speed << setw(10);
    }
    cout << "\n";

    // display table of data
    while (temp_i <= 50.0)
    {
        switch (temp_i)
        {
            case 0:
            case 5:
                cout << setprecision(1)
                     << fixed
                     << setw(4)
                     << float(temp_i)
                     << setw(10)
                     << 35.74 + 0.6215 * temp_i - 35.75 * pow(5, 0.16) + 0.4275 * temp_i * pow(5, 0.16) << setw(10)
                     << 35.74 + 0.6215 * temp_i - 35.75 * pow(10, 0.16) + 0.4275 * temp_i * pow(10, 0.16) << setw(10)
                     << 35.74 + 0.6215 * temp_i - 35.75 * pow(15, 0.16) + 0.4275 * temp_i * pow(15, 0.16) << setw(10)
                     << 35.74 + 0.6215 * temp_i - 35.75 * pow(20, 0.16) + 0.4275 * temp_i * pow(20, 0.16) << setw(10)
                     << 35.74 + 0.6215 * temp_i - 35.75 * pow(25, 0.16) + 0.4275 * temp_i * pow(25, 0.16) << setw(10)
                     << 35.74 + 0.6215 * temp_i - 35.75 * pow(30, 0.16) + 0.4275 * temp_i * pow(30, 0.16) << setw(10)
                     << 35.74 + 0.6215 * temp_i - 35.75 * pow(35, 0.16) + 0.4275 * temp_i * pow(35, 0.16) << setw(10)
                     << 35.74 + 0.6215 * temp_i - 35.75 * pow(40, 0.16) + 0.4275 * temp_i * pow(40, 0.16) << setw(10)
                     << 35.74 + 0.6215 * temp_i - 35.75 * pow(45, 0.16) + 0.4275 * temp_i * pow(45, 0.16) << setw(10)
                     << endl;
                
                temp_i += 5;
                break;
            
            default : 
                cout << setprecision(1)
                     << fixed
                     << setw(2)
                     << float(temp_i)
                     << setw(10)
                     << 35.74 + 0.6215 * temp_i - 35.75 * pow(5, 0.16) + 0.4275 * temp_i * pow(5, 0.16) << setw(10)
                     << 35.74 + 0.6215 * temp_i - 35.75 * pow(10, 0.16) + 0.4275 * temp_i * pow(10, 0.16) << setw(10)
                     << 35.74 + 0.6215 * temp_i - 35.75 * pow(15, 0.16) + 0.4275 * temp_i * pow(15, 0.16) << setw(10)
                     << 35.74 + 0.6215 * temp_i - 35.75 * pow(20, 0.16) + 0.4275 * temp_i * pow(20, 0.16) << setw(10)
                     << 35.74 + 0.6215 * temp_i - 35.75 * pow(25, 0.16) + 0.4275 * temp_i * pow(25, 0.16) << setw(10)
                     << 35.74 + 0.6215 * temp_i - 35.75 * pow(30, 0.16) + 0.4275 * temp_i * pow(30, 0.16) << setw(10)
                     << 35.74 + 0.6215 * temp_i - 35.75 * pow(35, 0.16) + 0.4275 * temp_i * pow(35, 0.16) << setw(10)
                     << 35.74 + 0.6215 * temp_i - 35.75 * pow(40, 0.16) + 0.4275 * temp_i * pow(40, 0.16) << setw(10)
                     << 35.74 + 0.6215 * temp_i - 35.75 * pow(45, 0.16) + 0.4275 * temp_i * pow(45, 0.16) << setw(10)
                     << endl;
                
                temp_i += 5;
        }
        
        // if (temp_i < 0)
        // {
        //     cout << setprecision(1)
        //          << fixed
        //          << temp_i
        //          << setw(10)
        //          << 35.74 + 0.6215 * temp_i - 35.75 * pow(5, 0.16) + 0.4275 * temp_i * pow(5, 0.16) << setw(10)
        //          << 35.74 + 0.6215 * temp_i - 35.75 * pow(10, 0.16) + 0.4275 * temp_i * pow(10, 0.16) << setw(10)
        //          << 35.74 + 0.6215 * temp_i - 35.75 * pow(15, 0.16) + 0.4275 * temp_i * pow(15, 0.16) << setw(10)
        //          << 35.74 + 0.6215 * temp_i - 35.75 * pow(20, 0.16) + 0.4275 * temp_i * pow(20, 0.16) << setw(10)
        //          << 35.74 + 0.6215 * temp_i - 35.75 * pow(25, 0.16) + 0.4275 * temp_i * pow(25, 0.16) << setw(10)
        //          << 35.74 + 0.6215 * temp_i - 35.75 * pow(30, 0.16) + 0.4275 * temp_i * pow(30, 0.16) << setw(10)
        //          << 35.74 + 0.6215 * temp_i - 35.75 * pow(35, 0.16) + 0.4275 * temp_i * pow(35, 0.16) << setw(10)
        //          << 35.74 + 0.6215 * temp_i - 35.75 * pow(40, 0.16) + 0.4275 * temp_i * pow(40, 0.16) << setw(10)
        //          << 35.74 + 0.6215 * temp_i - 35.75 * pow(45, 0.16) + 0.4275 * temp_i * pow(45, 0.16) << setw(10);

        //         cout << "STOP" << endl;
        //         temp_i += 5;
        // }
        // else 
        // {
        //     cout << setprecision(1)
        //          << fixed
        //          << temp_i
        //          << setw(10)
        //          << 35.74 + 0.6215 * temp_i - 35.75 * pow(5, 0.16) + 0.4275 * temp_i * pow(5, 0.16) << setw(10)
        //          << 35.74 + 0.6215 * temp_i - 35.75 * pow(10, 0.16) + 0.4275 * temp_i * pow(10, 0.16) << setw(10)
        //          << 35.74 + 0.6215 * temp_i - 35.75 * pow(15, 0.16) + 0.4275 * temp_i * pow(15, 0.16) << setw(10)
        //          << 35.74 + 0.6215 * temp_i - 35.75 * pow(20, 0.16) + 0.4275 * temp_i * pow(20, 0.16) << setw(10)
        //          << 35.74 + 0.6215 * temp_i - 35.75 * pow(25, 0.16) + 0.4275 * temp_i * pow(25, 0.16) << setw(10)
        //          << 35.74 + 0.6215 * temp_i - 35.75 * pow(30, 0.16) + 0.4275 * temp_i * pow(30, 0.16) << setw(10)
        //          << 35.74 + 0.6215 * temp_i - 35.75 * pow(35, 0.16) + 0.4275 * temp_i * pow(35, 0.16) << setw(10)
        //          << 35.74 + 0.6215 * temp_i - 35.75 * pow(40, 0.16) + 0.4275 * temp_i * pow(40, 0.16) << setw(10)
        //          << 35.74 + 0.6215 * temp_i - 35.75 * pow(45, 0.16) + 0.4275 * temp_i * pow(45, 0.16) << setw(10);

        //         cout << "STOP" << endl;
        //         temp_i += 5;
        // }
    }

    return 0;
}