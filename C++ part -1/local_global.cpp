#include <iostream>
using namespace std;
int x = 10;
int myFun()
{
    int x = 20;
    cout << x << endl;
}
int main()
{
    myFun();
    cout << x << endl;
    return 0;
}