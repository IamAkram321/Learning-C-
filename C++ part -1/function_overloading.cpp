// function overloading
#include <iostream>
using namespace std;
int fun(int x, int y)
{
    cout << x + y << endl;
}
int fun(double x, double y)
{
    cout << x + y << endl;
}
string fun(string x, string y)
{
    cout << x + y << endl;
}
int main()
{
    int a = 20, b = 30;
    double c = 20.5, d = 30.5;
    string e = "MD ",f="Akram";
    fun(a, b);
    fun(c, d);
    fun(e, f);
    return 0;
}