#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>
using namespace std;

// Function prototype
#define SIZE 25
bool readFile(string c[], int &size);
void getVotes(int v[], int size);
void calculatePercents(int v[], double p[], int size);
void displayResults(string c[], int v[], double p[], int size);

int main()
{
    string candidates[SIZE];
    int votes[SIZE];
    double percents[SIZE];
    int n = 0;

    if(readFile(candidates, n))
    {
        getVotes(votes, n);
        calculatePercents(votes, percents, n);
        displayResults(candidates, votes, percents, n);
        }

    return 0;
}

bool readFile(string c[], int &size)
{
    ifstream in("candidates.txt");
    if(in.fail())
    {
        cout << "Unable to open file" << endl;
        
        return false;
    }
    while(!in.eof())
    {
        in >> c[size];
        size++;
    }

    return true;
}

void getVotes(int v[], int size)
{
    srand(time(NULL));
    for(int i = 0; i < size; i++)
    {
        v[i] = (rand() % (25000-1500)) + 1500;
    }
}

void calculatePercents(int v[], double p[], int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += v[i];
    }
    for(int i = 0; i < size; i++)
    {
        p[i] = ((double)v[i] / sum) * 100;
    }
}

void displayResults(string c[], int v[], double p[], int size)
{
    cout << setprecision(1) << left << fixed;
    cout <<setw(10) << "Candidate" << setw(10) << "Votes" << setw(15) << "Percent" << endl;
    
    for(int i = 0; i < size; i++)
    {
        cout << setw(10) << c[i] << setw(10) << v[i] << p[i] << "%" << endl;
    }
}