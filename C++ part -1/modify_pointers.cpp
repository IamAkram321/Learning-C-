#include <iostream>
using namespace std;
int main()
{
    string college = "cambridge";
    string *my_ptr = &college;
    cout << college << endl;
    cout << &college << endl;
    cout << *my_ptr << endl;
    *my_ptr = "Harvard"; //modifying pointers
    cout << *my_ptr << endl;
    cout << college << endl;
    return 0;
}