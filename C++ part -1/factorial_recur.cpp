#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * factorial(n - 1);
}
int main()
{
    int a;
    cout << "Enter a number:" << endl;
    cin >> a;
    cout << "Factorial of " << a << " is " << factorial(a) << endl;
    return 0;
}