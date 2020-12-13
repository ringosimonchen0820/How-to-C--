#include<iostream>
#include<string>
#include<fstream>
#include<vector>
using namespace std;
//Prototypes
// fills vectors
bool get_data(vector <string>& part_number, vector <char>& part_class, vector <int>& part_ohb, vector <double>& part_cost);
// Does a binary search
int bin_search(string key, const vector<string>& part_number);
// Asks user for a part number to search for
string get_target();
// gets remaining info to add a part number
void get_more_data(char& class_in, int& part_ohb_in, double& part_cost_in);
// Inserts part number data into vectors
void insert_data(vector <string>& part_number, vector <char>& part_class, vector <int>& part_ohb, vector <double>& part_cost, string part_in, char class_in, int part_ohb_in, double part_cost_in);
// Displays info on part number
void display(const vector <string>& part_number, const vector <char>& part_class, const vector <int>& part_ohb, const vector <double>& part_cost, int finder);
// sorts vectors (Calls swapper)

void sort(vector <string>& part_number, vector <char>& part_class, vector <int>& part_ohb, vector <double>& part_cost);

// writes out file when program ends, so additions are saved to file

void put_data(const vector <string>& part_number, const vector <char>& part_class, const vector <int>& part_ohb,
   const vector <double>& part_cost);

// templated swap function – Swaps two items in a vector of any type
// Put this BEFORE main() Called from sort function
template <class CType>
void swapper(CType& a, CType & b)
{
   CType temp;
   temp = a;
   a = b;
   b = temp;
}
//Main driver method
int main()
{
   //Variable declaration
   vector <string> part_number;
   vector <char> part_class;
   vector <int> part_ohb;
   vector <double> part_cost;
   char class_in, ch,cont='y';
   int part_ohb_in;
   double part_cost_in;
   //Call method to read data
   get_data(part_number, part_class, part_ohb, part_cost);
   while (cont == 'y') {
       //Call method to get parts number
       string key = get_target();
       //Call search if present or not
       int finder = bin_search(key, part_number);
       //cout << finder << endl;
       //If not ask user to enter other details
       while (finder == -1) {
           cout << "Do you want to add data(y/n)";
           cin >> ch;
           if (ch == 'y' || ch == 'Y') {
              
               get_more_data(class_in, part_ohb_in, part_cost_in);
               insert_data(part_number, part_class, part_ohb, part_cost, key, class_in, part_ohb_in, part_cost_in);
               //Call method to get parts number
               string key = get_target();
               /*for (int i = 0; i<part_number.size(); i++)
               cout << part_number[i] << " "<< part_class[i]<<" "<< part_ohb[i]<<" "<< part_cost[i]<<endl;*/
               //Call search if present or not
               finder = bin_search(key, part_number);
               //cout << finder << endl;
           }
           else if (ch == 'n' || ch == 'N') {
               //Call method to get parts number
               string key = get_target();
               //Call search if present or not
               finder = bin_search(key, part_number);
              
           }
       }

       //Display details
       display(part_number, part_class, part_ohb, part_cost, finder);
       cout << "Do you want to continue(y/n):";
       cin >> cont;
   }
   //sort
   sort(part_number, part_class, part_ohb, part_cost);
   put_data(part_number, part_class, part_ohb, part_cost);
   /*for (int i = 0; i < part_class.size(); i++) {
   cout << "There are " << part_ohb[i] << " of Part Number " << part_number[i] << " in inventory.It is a class " << part_class[i] << " part.The cost is $" << part_cost[i] << ".The value of that inventory is $" << (part_cost[i] * part_ohb[i]) << "." << endl;
   }*/
   return 0;
}
//Fii text data
bool get_data(vector <string>& part_number, vector <char>& part_class, vector <int>& part_ohb, vector <double>& part_cost) {
   ifstream f;
   string line;
   f.open("C:/Users/deept/Desktop/parts.txt");
   if (!f) {
       cout << "File not found" << endl;
       return false;
   }
   else {
       while (!f.eof()) {
           string val1;
           char val2;
           int val3;
           double val4;
           f >> val1 >> val2 >> val3 >> val4;
           part_number.push_back(val1);
           part_class.push_back(val2);
           part_ohb.push_back(val3);
           part_cost.push_back(val4);
       }
       return true;
   }
}
//Binary search
int bin_search(string key, const vector<string>& part_number) {
   int n = part_number.size();
   int first = 0;
   int last = n - 1;
   int middle = (first + last) / 2;
   while (first <= last)
   {
       if (part_number[middle] < key)
       {
           first = middle + 1;

       }
       else if (part_number[middle] == key)
       {
           return middle;
           break;
       }
       else
       {
           last = middle - 1;
       }
       middle = (first + last) / 2;
   }
   if (first > last)
   {
       return -1;
   }
}
//part number gettinf function
string get_target() {
   string key;
   cout << "Please enter the part number to search:";
   cin >> key;
   return key;
}
//Other details need to add
void get_more_data(char& class_in, int& part_ohb_in, double& part_cost_in) {
   cout << "Please enter the class of the part:";
   cin >> class_in;
   cout << "Please enter the count of the part:";
   cin >> part_ohb_in;
   cout << "Please enter the cost of the part:";
   cin >> part_cost_in;
}
//Insert into vector
void insert_data(vector <string>& part_number, vector <char>& part_class, vector <int>& part_ohb, vector <double>& part_cost, string part_in, char class_in, int part_ohb_in, double part_cost_in)
{
   part_number.push_back(part_in);
   part_class.push_back(class_in);
   part_ohb.push_back(part_ohb_in);
   part_cost.push_back(part_cost_in);
}
//Display details
void display(const vector <string>& part_number, const vector <char>& part_class, const vector <int>& part_ohb, const vector <double>& part_cost, int finder) {
   cout << "There are " << part_ohb[finder] << " of Part Number " << part_number[finder] << " in inventory.It is a class " << part_class[finder] << " part.The cost is $" << part_cost[finder] << ".The value of that inventory is $" << (part_cost[finder] * part_ohb[finder]) << "." << endl;
}
//Sort according to parts number
void sort(vector <string>& part_number, vector <char>& part_class, vector <int>& part_ohb, vector <double>& part_cost) {
   int i, j, k;
   string temp;
   int n = part_number.size();
   // Gap 'i' between index of the element to be compared, initially n/2.
   for (i = n / 2; i > 0; i = i / 2)
   {
       for (j = i; j < n; j++)
       {
           for (k = j - i; k >= 0; k = k - i)
           {
               // If value at higher index is greater, then break the loop.
               if (part_number[k + i] >= part_number[k])
                   break;
               // Switch the values otherwise.
               else
               {
                   swapper(part_number[k], part_number[k + i]);
                   swapper(part_class[k], part_class[k + i]);
                   swapper(part_ohb[k], part_ohb[k + i]);
                   swapper(part_cost[k], part_cost[k + i]);
               }
           }
       }
   }
}
//Save data in to a file
void put_data(const vector <string>& part_number, const vector <char>& part_class, const vector <int>& part_ohb, const vector <double>& part_cost) {
   ofstream of;
   string line;
   of.open("C:/Users/deept/Desktop/partsOutput.txt");
   if (!of) {
       cout << "File not found" << endl;

   }
   else {
       for (int i = 0; i<part_class.size(); i++) {
           of << part_number[i] << " " << part_class[i] << " " << part_ohb[i] << " " << part_cost[i] << endl;
       }

   }
}