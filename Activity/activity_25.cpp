#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void swapper(int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}


void shellSort(vector<int>& V)
{
    bool flag = true;
    int i, numLength = V.size();

    int d = numLength;
    while (flag || (d > 1)) // bool flag
    {
        flag = false; //reset flag to 0 to check for
        // future swaps
        d = (d + 1) / 2;
        for (i = 0; i < (numLength - d); i++) {
            if (V[i + d] < V[i]) {
                swapper(V[i], V[i + d]);

                flag = true; //tells swap has occurred
            }
        }
    }
}

int smallest(vector<int> &vec) 
{
    int num = vec[0];
    for(int i = 0; i < vec.size(); ++i) 
    {
        if(vec[i] < num) 
        {
            num = vec[i];
        }
    }
    
    return num;
}

int largest(vector<int> &vec) 
{
    int num = vec[0];
    for(int i = 0; i < vec.size(); ++i) 
    {
        if(vec[i] > num) 
        {
            num = vec[i];
        }
    }
    
    return num;
}

int total(vector<int> &vec) 
{
    int sum = 0;
    for(int i = 0; i < vec.size(); ++i) 
    {
            sum += vec[i];
    }
    
    return sum;
}

double average(vector<int> &vec) 
{
    return total(vec) / (double)vec.size();
}

int odd_count(vector<int> &vec) 
{
    int num = 0;
    for(int i = 0; i < vec.size(); ++i) 
    {
        if(vec[i] % 2 == 1) 
        {
            num++;
        }
    }
    
    return num;
}

int even_count(vector<int> &vec) 
{
    int num = 0;
    for(int i = 0; i < vec.size(); ++i) 
    {
        if(vec[i] % 2 == 0) 
        {
            num++;
        }
    }
    
    return num;
}

int bin_search(vector<int> &vec, int num) 
{
    int left = 0, 
        right=vec.size()-1;
    while(left <= right) 
    {
        int mid = (left+right)/2;
        if(vec[mid] == num) 
        {
            return mid;
        } else if(num < vec[mid]) 
        {
            right = mid-1;
        } else 
        {
            left = mid+1;
        }
    }
    
    return -1;
}

int main() 
{
    srand(time(NULL));
    vector<int> vec;
    for(int i = 0; i < 5000; ++i) 
    {
        vec.push_back(rand()%1000);
    }
    cout << "Smallest number is " << smallest(vec) << endl;
    cout << "Largest number is " << largest(vec) << endl;
    cout << "Number of odd values is " << odd_count(vec) << endl;
    cout << "Number of even values is " << even_count(vec) << endl;
    cout << "Total of values is " << total(vec) << endl;
    cout << "Average of values is " << average(vec) << endl;
    
    shellSort(vec);
    cout << "Enter a number to search for in vector: ";
    int num;
    cin >> num;
    int ind = bin_search(vec, num);
    if(ind == -1) 
    {
        cout << num << " is not found in vector" << endl;
    } else 
    {
        cout << num << " is found at index " << ind << endl;
    }
    
    return 0;
}