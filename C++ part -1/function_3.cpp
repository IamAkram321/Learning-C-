#include <iostream>
using namespace std;
void myFunction(string country = "Norway")
{
    cout << country << endl;
}
int main()
{
    myFunction("India");
    myFunction("Canada");
    myFunction();
    myFunction("Sweden");
    return 0;
}