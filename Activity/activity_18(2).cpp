#include <iostream>
#include <string>
using namespace std;

// Function prototype
string change(string s);

int main()
{
  char choice;
   
  do
  {
    cout << "Enetr the name in the format of first middle initial last:\n";
    string S;

    // Input the name
    getline(cin, S);   
    cout << change(S) << endl;
    cout << "Do you wish to enter another name? ";
    cin  >> choice;
    cin.ignore();
  } while(choice == 'y' || choice == 'Y');

  return 0;
}

string change(string s)
{
  // Upper the first char of string so the string will be Samuel p. clemens
   s[0] = toupper(s[0]); 
   char c = ' ';
  
  // Find the first space
   size_t f = s.find(c); 
   s[f+1] = toupper(s[f+1]); // Upper the character next to space so the string will be Samuel P. clemens

  // Find the second space
   size_t f1 = s.find(c,f+1); 
   s[f1+1] = toupper(s[f1+1]); // upper the character next to second space so the string will be Samuel P. Clemens

  // Create empty string
   string s1 = ""; 
        // Concatenate last name to s1 then s1=Clemens
        for(int i = f1 + 1; i < s.size(); i++) 
          s1= s1 + s[i];
        s1 = s1 + ',' + ' '; // Add , and spac to s1 then s1 = Clemens,

        for(int i = 0; i < f; i++) // Concatenate first name to s1 then s1 = Clemens, Samuel
          s1 = s1 + s[i];
        s1 = s1 + ' '; // Add extra space to s1

        for(int i = f + 1; i < f1; i++) // Concatenate middle name to s1 then s1 = Clemens, Samuel P.
          s1 = s1 + s[i];

  // return the string
  return s1; 
}