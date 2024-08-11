#include <iostream>
using namespace std;
int myFun(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}
int main()
{
    int a = 10, b = 20;
    cout << "Before Swap:" << "\n";
    cout << a << " " << b << endl;
    myFun(a, b);
    cout << "After Swap:" << "\n";
    cout << a << " " << b << endl;
    return 0;
}