#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>
using namespace std;

ofstream fileout;

double calcCost(int quantity, double unitCost)
{
   double totalCost = static_cast<double>(quantity) * unitCost;
   return totalCost;
}

double accTotal(double totalCost, double itemCost)
{
   double newTotalCost = totalCost + itemCost;
   return newTotalCost;
}

void printLine(string itemNo, string name, int quantity,
   double unitCost, double totalCost)
{
   fileout << "\t" << itemNo << "\t" << setw(10) << left << name << " " <<
      setw(3) << fixed << right << quantity << "    " <<
      setw(6) << setprecision(2) << right << unitCost << "    " <<
      setw(7) << totalCost << endl;
}

void printInvoiceHeader(string date)
{
   fileout << "Invoice date: " << date << "\n\n";
}

void printReportHeader()
{
   fileout << "\tErie Industrial Supply Corporation\n";
}

void printTotal(double invoiceTotal)
{
   fileout << "Total ......................................" << invoiceTotal << "\n\n";
}


int items, quantity;
double unitCost;
string date, name, itemNo;

int main()
{
   double totalCost, invoiceCost, unitCost;
   ifstream filein;
   filein.open("input.txt");

   if (filein)
   {
      fileout.open("output.txt");

      if (fileout)
      {
         printReportHeader();

         while (filein >> items >> date)
         {
            totalCost = 0;
            invoiceCost = 0;
            printInvoiceHeader(date);

            for (int i = 0; i < items; i++)
            {
               filein >> itemNo >> name >> quantity >> unitCost;
               totalCost = calcCost(quantity, unitCost);
               invoiceCost = accTotal(invoiceCost, totalCost);
               printLine(itemNo, name, quantity, unitCost, totalCost);
            }
            printTotal(invoiceCost);
         }
         filein.close();
         fileout.close();
      }
      else
         cout << "Error opening output file.\n";
   }
   else
      cout << "Error opening input file.\n";

   return 0;
}