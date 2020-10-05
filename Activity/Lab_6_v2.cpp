#include <iostream>
#include <math.h>
#include <cmath>  
using namespace std;

int main() {


int program_stop = 0,
    count = 0 ;
int x;
double y;
int trans_count [100];
double item [100];
double total_revenue;
double cost_trans[100];
double Largest_element , Smallest_element;
double unit_sold;


for( int a = 1; a < 100 && program_stop != -99 ; a = a + 1 )
   {
      cout << "Transaction # " << a << " : " ;
      cin >> x >> y;
  
   trans_count[a] = x;
   item [a] = y;
   cost_trans[a] = x*y;
  
   program_stop = x;
   count = count + 1;
  
   }
  
  
   for( int a = 1; a < count; a = a + 1 )
   {
    total_revenue = total_revenue + cost_trans[a];
    unit_sold = unit_sold + trans_count[a];
   }
  
  
   Largest_element = cost_trans[1];
   for(int i = 2;i < count - 1; ++i)
    {
       // Change < to > if you want to find the smallest element
       if(Largest_element < cost_trans[i])
           Largest_element = cost_trans[i];
    }

Smallest_element = cost_trans[1];
   for(int i = 2;i < count - 1; ++i)
    {
       // Change < to > if you want to find the smallest element
       if(Smallest_element > cost_trans[i])
           Smallest_element = cost_trans[i];
    }

  
   cout << "TRANSACTION PROCESSING REPORT     " << endl;
   cout << "Transaction Processed :           " << count-1 << endl;
   cout << "Uints Sold:                       " << unit_sold << endl;
   cout << "Average Units per order:          " << unit_sold/(count - 1) << endl;
   cout << "Largest Transaction:              " << Largest_element << endl;
   cout << "Smallest Transaction:             " << Smallest_element << endl;
   cout << "Total Revenue:               $    " << total_revenue << endl;
   cout << "Average Revenue :            $    " << total_revenue/(count - 1) << endl;
     
  
   return 0;
  
}