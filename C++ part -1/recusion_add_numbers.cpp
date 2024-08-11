#include <iostream>
using namespace std;

int recursive_add(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return recursive_add(a + 1, b - 1);
}

int main()
{
    int a, b;
    cin >> a >> b;
    int result = recursive_add(a, b);
    cout << "The sum of numbers " << a << " and " << b << " is " << result << endl;
    return 0;
}