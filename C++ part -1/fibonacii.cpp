#include <iostream>
using namespace std;
int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    return fib(n - 1) + fib(n - 2);
}
int main()
{
    int a;
    cout << "Enter nth fibonacii you what to print:";
    cin >> a;
    cout << " The " << a << "th fibonacii number is " << fib(a) << endl;
    return 0;
}