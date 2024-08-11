
#include <iostream>
using namespace std;
int main()
{
    string bike = "honda";
    string *myptr = &bike;
    cout << myptr << endl;  // output memory address of bike(0x61fef0)
    cout << *myptr << endl; // output value of bike (honda)
    return 0;
}