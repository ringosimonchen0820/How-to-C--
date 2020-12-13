#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;


bool get_data(vector <string>& part_number, 
              vector <char>& part_class,
              vector <int>& part_ohb, 
              vector <double>& part_cost);

int bin_search(string key, const vector<string>& part_number);

string get_target();

void get_more_data(char& class_in, int& part_ohb_in, double& part_cost_in);

void insert_data(vector <string>& part_number, 
                 vector <char>& part_class,
                 vector <int>& part_ohb, 
                 vector <double>& part_cost, 
                 string part_in,
                 char class_in, 
                 int part_ohb_in, 
                 double part_cost_in);

void display(const vector <string>& part_number, 
             const vector <char>& part_class,
             const vector <int>& part_ohb, 
             const vector <double>& part_cost, 
             int finder);

void sort(vector <string>& part_number, 
                  vector <char>& part_class,
                  vector <int>& part_ohb, 
                  vector <double>& part_cost);

// prints search stats
void print_stats(int searches, int good, int bad);

void put_data(const vector <string>& part_number, 
              const vector <char>& part_class,
              const vector <int>& part_ohb, 
              const vector <double>& part_cost);


template <class CType>


void swapper(CType& a, CType & b)
{
    CType temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
       vector<string>part_number;
       vector<char>part_class;
       vector<int> part_ohb;
       vector<double>part_cost;

       bool fin;
       string target;
       char class_in;
       int ohb_in;
       double cost_in;
       int opt = 0;
       int position, numOfsearch = 0, success = 0, added = 0;

       fin = get_data(part_number, part_class, part_ohb, part_cost);

       if (!fin)
       {
         cout << "could not open file";
       }
       else
       {
              sort(part_number, part_class, part_ohb, part_cost);
              
              do
              
              {
                     target = get_target();

                     //if the user enter Stop then stop the loop
                     //otherwise,
                     if (target != "Stop")
                     {
                           //call the function bin_search()

                           //to search the position of the part_number

                           position = bin_search(target, part_number);

                           //increament the number of searches

                           numOfsearch++;

                           //if position is not -1, then

                           if (position != -1)
                           {
                                  display(part_number, part_class, part_ohb, part_cost, position);

                                  success++;
                           }

                           //otherwise,

                           else
                           {

                                  //tell the user the part number is not there

                                  //would like to be able to insert it into the list.

                                  cout << "The Part number cannot in the file." << endl;

                                  cout << "Would like to insert it into the list ? Press 1 or Press 0" << endl;

                                  cin >> opt;

                                  if (opt == 1)

                                  {

                                         //call the function get_more_data()

                                         //to get the remaining info to add a part number

                                         get_more_data(class_in, ohb_in, cost_in);

                                         //call the function insert_data()

                                         insert_data(part_number, part_class, part_ohb, part_cost, target, class_in, ohb_in, cost_in);

                                         //Inserts part number data into vectors

                                         added++;

                                         cout << "The Part number is added to the list." << "\n" << endl;

                                  }

                          

                           }

                     }

              }

              //stop the loop if the user wants to stop

              while (target != "Stop");

              //call the function put_data()

              //to put the added part numbers in the file in an order

              put_data(part_number, part_class, part_ohb, part_cost);

              //print the report using the function print_stats()

              print_stats(numOfsearch, success, added);

       }

       system("pause");

       return 0;
}


bool get_data(vector <string>& part_number, vector <char>& part_class, vector <int>& part_ohb, vector <double>& part_cost)
{
       //declare the variables

       bool isfileOpened = true;

       string Pname;

       char Pclass;

       int Pohb;

       double Pcost;

       //create an object to read the file

       ifstream infile;

       //open the input file

       infile.open("parts.txt");

       //if file doe not open then print an message

       if (infile.fail())

       {

              isfileOpened = false;

              cout << "could not open the file";

       }

       //otherwise

       else

       {

              isfileOpened = true;

              //read the data from the file and push into the vectors

              while (infile >> Pname >> Pclass >> Pohb >> Pcost)

              {

                     part_number.push_back(Pname);

                     part_class.push_back(Pclass);

                     part_ohb.push_back(Pohb);

                     part_cost.push_back(Pcost);

              }

       }

       //close the file and return the bool value

       infile.close();

       return isfileOpened;
}


int bin_search(string key, const vector<string>& part_number)
{
       int i = part_number.size() - 1;

       int j = 0;

       int pos;

       pos = (i + j) / 2;

       //do binary search

       while (i >= j && part_number[pos] != key)

       {

              //search for the key

              if (part_number[pos] < key)

              {

                     j = pos + 1;

              }

              else if (part_number[pos]>key)

              {

                     i = pos - 1;

              }

              pos = (i + j) / 2;

       }

       if (part_number[pos] != key)

       {

              pos = -1;

       }

       //return the position

       return pos;
}


string get_target()
{
       string target;

       cout << "Enter the part number or(Enter Stop to exit): ";

       cin >> target;

       return target;
}


void get_more_data(char& class_in, int& part_ohb_in, double& part_cost_in)
{
       cout << "Enter the part class: ";

       cin >> class_in;

       cout << "Enter the amount : ";

       cin >> part_ohb_in;

       cout << "Enter the cost : ";

       cin >> part_cost_in;
}


void insert_data(vector <string>& part_number, vector <char>& part_class, vector <int>& part_ohb,
vector <double>& part_cost, string part_in, char class_in, int part_ohb_in, double part_cost_in)
{
       int i;

       i = part_number.size() - 1,

              part_number.resize(part_number.size() + 1);

       part_class.resize(part_class.size() + 1);

       part_ohb.resize(part_ohb.size() + 1);

       part_cost.resize(part_cost.size() + 1);

       //compare an swap the data

       while (i >= 0 && part_in < part_number[i])

       {

              part_number[i + 1] = part_number[i];

              part_class[i + 1] = part_class[i];

              part_ohb[i + 1] = part_ohb[i];

              part_cost[i + 1] = part_cost[i];

              i--;

       }

       part_number[i + 1] = part_in;

       part_class[i + 1] = class_in;

       part_ohb[i + 1] = part_ohb_in;

       part_cost[i + 1] = part_cost_in;
}


void display(const vector <string>& part_number, const vector <char>& part_class,
const vector <int>& part_ohb, const vector <double>& part_cost, int finder)
{
       double inventoryCost = 0;

       cout << fixed << setprecision(2);

       inventoryCost = (part_cost[finder] * part_ohb[finder]);

       cout << "There are " << part_ohb[finder] << " of Part Number "

       << part_number[finder] << " in invertory." << endl;

       cout << "It is a class " << part_class[finder] << " part." << endl;

       cout<<"The cost is $" << part_cost[finder] <<"."<< endl;

       cout << "The value of that inventory is $" << inventoryCost << ".\n" << endl;
}


void sort(vector <string>& part_number, vector <char>& part_class,
vector <int>& part_ohb, vector <double>& part_cost)
{
       int i, j, k, temp;

       //compare the elements using gap values

       for (i = part_number.size() / 2; i > 0; i = i / 2)

       {

              for (j = i; j < part_number.size(); j++)

              {

                     for (k = j - i; k >= 0; k = k - i)

                     {

                            if (part_number[k + i] >= part_number[k])

                                  break;

                           else

                           {

                                  //call the swapper() to swap the values

                                  swapper(part_number[k], part_number[k + i]);

                                  swapper(part_class[k], part_class[k + i]);

                                  swapper(part_ohb[k], part_ohb[k + i]);
                                  swapper(part_cost[k], part_cost[k + i]);
                           }
                     }
              }
       }
}


void print_stats(int searches, int good, int bad)
{
       cout << "\n The additional Part numbers are aded to the list." << endl;

       cout << "Total searches: " << searches << endl;

       cout << "Total successful searches: " << good << endl;

       cout << "Total added/failed searches: " << bad << endl;
}


void put_data(const vector <string>& part_number, const vector <char>& part_class,
const vector <int>& part_ohb, const vector <double>& part_cost)
{
       fstream infile;

       infile.open("parts.txt");

       for (int i = 0; i < part_number.size(); i++)

       {

              infile << part_number[i] << " " << part_class[i] << " " << part_ohb[i]

              << " " << part_cost[i] << endl;

       }

       //close the file

       infile.close();
}