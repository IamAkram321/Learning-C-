#include<iostream>
using namespace std;
int last_occur(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    int restArray=last_occur(arr, n, i + 1, key);
    if ( restArray!= -1)
    {
        return restArray;
    }
    if (arr[i]==key)
    {
        return i;
    }
    return -1;
    
}
int main()
{
    int arr[] = {4, 2, 1, 2, 5, 2, 7};
    cout << last_occur(arr, 7, 0, 2);
    return 0;
}

