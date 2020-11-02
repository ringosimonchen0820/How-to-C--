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
  s[0] = toupper(s[0]); 
  char c = ' ';
  
  size_t f = s.find(c); 
  s[f + 1] = toupper(s[f + 1]);

  size_t f1 = s.find(c, f + 1); 
  s[f1 + 1] = toupper(s[f1 + 1]);

  string s1 = ""; 
        for(int i = f1 + 1; i < s.size(); i++) 
          s1= s1 + s[i];
        s1 = s1 + ',' + ' ';

        for(int i = 0; i < f; i++)
          s1 = s1 + s[i];
        s1 = s1 + ' ';

        for(int i = f + 1; i < f1; i++)
          s1 = s1 + s[i];

  return s1; 
}