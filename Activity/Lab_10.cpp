#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

float bf(int, int , int );
// Function Prototype
int main () {
   // Declaring variables
   float lumber_cost = 0;
   float total = 0;
   string lumbertype;
   float lumber_total;
   float board_Feet;
   char lumber_Type;
   int quantity;
   int width;
   int height;
   int length;

   cout << fixed << setprecision(2);

   cout << "You will be entering your order by type, quantity, width, height, and length. "
       << "\n An example order is: C 8 2 4 8 "<< endl <<"Please use this format for orders."
       << endl << endl;

   cout << "By entering T in the order line, total cost of all orders will be displayed." << endl
       << "Enter your order: ";

   cin >> lumber_Type;
   if(toupper(lumber_Type) == 'T')
       return 0;

   cin >> quantity;
   cin >> width;
   cin >> length;
   cin >> height;

   while (!(toupper(lumber_Type) == 'T')) {
       if (toupper (lumber_Type) == 'F') {
           lumber_cost = 1.09; lumbertype = "Fir";
       }
       else if (toupper (lumber_Type) == 'P') {
           lumber_cost = .89; lumbertype = "Pine";
       }
       else if (toupper (lumber_Type) == 'C') {
           lumber_cost = 2.26;
       lumbertype = "Cedar";
       }
       else if (toupper (lumber_Type) == 'M') {
           lumber_cost = 4.50;
           lumbertype = "Maple";
       }
       else if ( toupper(lumber_Type) == 'O') {
           lumber_cost = 3.10;
           lumbertype = "Oak";
       }
       else {
           cout << lumber_Type << " " << "is not a lumber type" << endl;
           cout << "Please enter a valid lumber type with order." << endl;
           cin.clear();
       }
      
       board_Feet = bf(width, height, length);
       total += board_Feet * lumber_cost * quantity;//calculates the total cost untill we entered T or t
      

       //print each items specifications and it's cost
       cout << quantity << " " << length << "x" << width << "x" << height << " " << lumbertype << ", cost: $" << board_Feet * lumber_cost * quantity << endl;
       //reads another order untill we enter T
       cout << "\nEnter your order: ";
       cin >> lumber_Type;
      
       if (toupper(lumber_Type) == 'T') {
           cout << "Total cost: $" << total << endl;
       }
       else {
           cin >> quantity;
           cin >> width;
           cin >> length;
           cin >> height;
       }
   }
  
   system ("pause");
   return 0;
}
//returns boardfeet
float bf ( int width, int height, int length) {
   float squareFeet;
   float boardfeet;
   squareFeet = (length * width) / 12.0;
   boardfeet = squareFeet * height;
   return boardfeet;
}