#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function prototype
int countEven(vector<int> vector01,vector<int> vector02);

int main()
{
    int even = 0;
    srand(time(0));

    // Declaring vectors
    vector <int> vector01;
    vector <int> vector02;

    // Populting vectors with 500 random numbers
    for (int i = 0; i < 500; i++)
    {
        vector01.push_back(rand() % 100 + 1);
        vector02.push_back(rand() % 100 + 1);
    }


    even = countEven(vector01,vector02);

    cout << "The vectors contain " << even << " cells where both values are even." << endl;

    return 0;
}

/* 
 * Function implementation which counts
 * the no of even numbers in both vectors
 * at the same place
 */
int countEven(vector<int> vector01,vector<int> vector02)
{
    int even=0;
    for(int i=0;i<vector01.size();i++)
    {
        if (vector01[i] % 2 == 0 && vector02[i] % 2 == 0)
            even++;
    }
    
    return even;
}   