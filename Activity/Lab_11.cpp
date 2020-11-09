#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// Function prototypes
string extractField( string &input);
string fixName( string &input );
string fixSSN( string &input );
string fixPhone( string &input );
string fixAddress( string &input );
string fixCity( string &input );
string fixState( string &input );
string getZip( string &input );
void buildLine( string name, string SSN, string phone, string addr, string city, string state, string zip, ostream &fout );

int main()

{
    string input, name, SSN, phone, addr, city, state, zip;
    ifstream fin;
    ofstream fout;

    fin.open("badnames.txt");

    if (fin.fail()) {
        cout << "File open failed" << endl;
    }
    else {
        fout.open("output.txt");
        if (fout.fail()) {
            cout << "File open failed" << endl;
        }
        else{
            while (getline(fin,input))
            {
                name = fixName(input);
                SSN = fixSSN(input);
                phone = fixPhone(input);
                addr = fixAddress(input);
                city = fixCity(input);
                state = fixState(input);
                zip = getZip(input);
                buildLine(name, SSN, phone, addr, city, state, zip, fout);
                input.clear();
            }
            
            fout.close();
        }

        fin.close();
    }
    cout << "Complete" << endl;

    return 0;
}

string extractField(string &input)
{
    char delimiter = '#';
    const auto num = input.find(delimiter, 0);
    string s = input.substr(0, num) ;
    input.erase(0, num + 1);

    return s;
}

string fixName(string &input)
{
    string name = extractField( input );
    auto num = name.find( ' ', 0 );
    string first = name.substr( 0, num );
    name.erase( 0, num + 1 ) ;
    string last = name;
    first.front() = toupper( first.front() ) ;
    last.front() = toupper( last.front() ) ;

    return last + "," + first + "," ;
}

string fixSSN(string &input)
{
    string SSN = extractField(input);
    SSN.insert(4, 1, '-');
    SSN.insert(7, 1, '-');
    SSN += "," ;

    return SSN;
}

string fixPhone(string &input)
{
    // string phone;
    string phone = extractField(input);
    phone.insert(4, 1, '-');
    phone.insert(8, 1, '-');

    return phone + "," ;
}

string fixAddress(string &input)
{
    string addr = extractField( input );
    int len = addr.length();
    for(int i = 1;i < len;i++) {
        if(addr[i-1] == ' ') {
            addr[i] = toupper(addr[i]);
        }
    }

    return addr + "," ;
}

string fixCity(string &input)
{
    string city = extractField(input);
    city.front() = toupper(city.front()) ;

    return city + "," ;
}

string fixState(string &input)
{
    string state = extractField(input);

    for(char& c : state) c = toupper(c) ;
    return state + "," ;
}

string getZip(string &input)
{
    string zip;
    zip = input;

    return zip;
}

void buildLine(string name, string SSN, string phone, string addr, string city, string state, string zip, ostream &fout)
{
    fout << name << SSN << phone << addr << city << state << zip << '\n';
}
