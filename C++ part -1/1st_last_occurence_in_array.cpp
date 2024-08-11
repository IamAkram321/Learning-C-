#include <iostream>
using namespace std;
int first_occur(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }

    if (arr[i] == key)
    {
        return i;
    }
    return first_occur(arr, n, i + 1, key);
}

int main()
{
    int arr[] = {4, 2, 1, 2, 5, 2, 7};
    cout << first_occur(arr, 7, 0, 2);
    return 0;
}