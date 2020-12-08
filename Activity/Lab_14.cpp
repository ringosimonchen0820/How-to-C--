#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

struct Parts
{
    string number;
    char cls;
    int ohb;
    double cost;
};

bool readFile(vector <Parts> &pVector);
int displayMenu();
double totalCost(const vector <Parts> &pVector);
void countByClass(const vector <Parts> & pVector,
                        vector <int> &classCounts);

double costForClass(char classIn, const vector <Parts> & pVector);
string highestCost(const vector <Parts> &pVector);
string lowestCost(const vector <Parts> &pVector);
void displayCounts(const vector <int> & classCounts);

int main()
{
    vector<Parts> pVector;
    vector<int> classCounts;
    char c = 'A';

    if(!readFile(pVector))
    {
        cout << "ERROR: could not read input file parts.txt" << endl;
        return 1;
    }

    int choice = 0;

    cout << fixed << setprecision(2);

    while(choice != 6)
    {
        choice = displayMenu();
        cout << "Your choice was " << choice << endl;
        switch(choice)
        {
            case 1:
                cout << "Total cost of inventory is $" << totalCost(pVector) << endl;
                break;

            case 2:
                countByClass(pVector, classCounts);
                displayCounts(classCounts);
                break;

            case 3:
                cout << "Which class? ";
                cin >> c;
                cout << "Cost of inventory for class "<< c << " is $" << costForClass(c, pVector) << endl;
                break;

            case 4:
                cout << "The part with the highest cost of inventory is " << highestCost(pVector) << endl;
                break;

            case 5:
                cout << "The part with the lowest cost of inventory is " << lowestCost(pVector) << endl;
                break;

            case 6:
                break;

            default:
                cout << "Invalid choice!" << endl;
        }
    }
}

bool readFile(vector <Parts> &pVector)
{
    ifstream infile("parts.txt");
    if(infile.fail())
        return false;
    Parts p;
    while(infile >> p.number)
    {
        infile >> p.cls >> p.ohb >> p.cost;
        pVector.push_back(p);
    }
    infile.close();
    
    return true;
}

int displayMenu()
{
    int choice;
    cout << "\tR E P O R T S M E N U" << endl;
    cout << "1. Total cost of inventory." << endl;
    cout << "2. A count of parts of each class." << endl;
    cout << "3. Cost of inventory for a class." << endl;
    cout << "4. Part with the highest cost of inventory." << endl;
    cout << "5. Part with lowest cost of inventory." << endl;
    cout << "6. Exit." << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    
    return choice;
}

double totalCost(const vector <Parts> &pVector)
{
    double total = 0;
    for(int i = 0; i < pVector.size(); i++)
    {
        total += pVector[i].ohb * pVector[i].cost;
    }
    
    return total;
}

void countByClass(const vector <Parts> & pVector,
                        vector <int> &classCounts)
{
    classCounts.clear();
    for(int i = 0; i < 6; i++)
        classCounts.push_back(0);
    for(int i = 0; i < pVector.size(); i++)
    {
        int index = pVector[i].cls - 'A'; //use ascii value to get index
        classCounts[index]++;
    }
}

double costForClass(char classIn, const vector <Parts> & pVector)
{
    int cost = 0;
    for(int i = 0; i < pVector.size(); i++)
    {
        if(pVector[i].cls == classIn)
        cost += pVector[i].ohb * pVector[i].cost;
    }
    
    return cost;
}

string highestCost(const vector <Parts> &pVector)
{
    int highIndex = 0;
    for(int i = 1; i < pVector.size(); i++)
    {
        if(pVector[i].cost > pVector[highIndex].cost)
        highIndex = i;
    }
    
    return pVector[highIndex].number;
}

string lowestCost(const vector <Parts> &pVector)
{
    int lowIndex = 0;
    for(int i= 1; i < pVector.size(); i++)
    {
        if(pVector[i].cost < pVector[lowIndex].cost)
        lowIndex = i;
    }
    
    return pVector[lowIndex].number;
}

void displayCounts(const vector <int> & classCounts)
{
    char c = 'A';
    cout << "Count of parts by class" << endl;
    for(int i = 0; i < 6; i++, c++)
    {
        cout << c << " " << classCounts[i] << endl;
    }
}