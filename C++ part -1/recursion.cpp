#include <iostream>
using namespace std;
int sum(int k)
{
    if (k > 0)
    {
        // int prev_sum=sum(k-1);
        // return prev_sum+k;
        return k + sum(k - 1);
    }
    else
    {
        return 0;
    }
}
int main()
{
    int result = sum(10);
    cout << result;
    return 0;
}