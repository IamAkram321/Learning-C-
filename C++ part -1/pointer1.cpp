#include<iostream>
using namespace std;
int main()
{
    string bike  = "YAMAHA";
    string* myPtr = &bike;
    cout << bike << "\n"; 
    cout << &bike << "\n";
    cout << myPtr << "\n";
    return 0;
}
/*string* mystring; // Preferred
string *mystring;
string * mystring;*/