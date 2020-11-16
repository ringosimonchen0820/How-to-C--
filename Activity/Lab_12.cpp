// C++ program to read the input file and calculate the total sales for each equipment
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

// struct to represent the Sales record
struct SalesRecord
{
string invoice;
char equipCode;
double cost;
};

// function declaration
void accumulate(const SalesRecord &s, double &capSales, double &eqpSales, double &prtSales);
void writeReport(double capSales, double eqpSales, double prtSales);

int main()
{
SalesRecord s;
double capSales = 0, eqpSales = 0, prtSales = 0 ;
ifstream fin("sales.txt"); // open the input file, provide full path to file

// check if file can be opened
if(fin.is_open())
{
// read till the end of file
while(!fin.eof())
{
fin>>s.invoice>>s.equipCode>>s.cost; // read a line of record into s
accumulate(s,capSales,eqpSales, prtSales); // call accumulate
}

// close the input file
fin.close();
// output the report
writeReport(capSales, eqpSales, prtSales);
}else
cout<<"Unable to open file: sales.txt"<<endl;
return 0;
}

// function to increment the sales for the equipment based on the equipment code
void accumulate(const SalesRecord &s, double &capSales, double &eqpSales, double &prtSales)
{
if(s.equipCode == 'A') // capital equipment
capSales += s.cost;
else if(s.equipCode == 'B') // expensed equipment
eqpSales += s.cost;
else if(s.equipCode == 'C') // small parts
prtSales += s.cost;
}

// function to output the report to file
void writeReport(double capSales, double eqpSales, double prtSales)
{
ofstream fout("inventoryReport.txt");
double totalSales = capSales + eqpSales + prtSales;
fout<<fixed<<setprecision(2);
fout<<"SALES REPORT"<<endl;

fout<<left<<setw(25)<<"Capital Equipment"<<"$"<<left<<setw(10)<<capSales<<((capSales*100)/totalSales)<<"%"<<endl;
fout<<left<<setw(25)<<"Expensed Equipment"<<"$"<<left<<setw(10)<<eqpSales<<((eqpSales*100)/totalSales)<<"%"<<endl;
fout<<left<<setw(25)<<"Small Parts"<<"$"<<left<<setw(10)<<prtSales<<((prtSales*100)/totalSales)<<"%"<<endl;
fout<<left<<setw(26)<<""<<left<<setw(10)<<"---------"<<endl;
fout<<left<<setw(25)<<"Total Sales"<<"$"<<left<<setw(10)<<totalSales<<endl;
fout.close();
}

//end of program