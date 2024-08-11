#include <iostream>
using namespace std;
void fib(int n)
{
    int a = 0, b = 1, c;
    if (n >= 0)
    {
        cout << a << " ";
    }
    if (n >= 1)
    {
        cout << b << " ";
    }
    c = a + b;
    while (c <= n)
    {
        cout << c << " ";
        a = b;
        b = c;
        c = a + b;
    }
}
int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;
    cout << "Fibonacii numbers upto " << n << " are: ";
    fib(n);
    return 0;
}