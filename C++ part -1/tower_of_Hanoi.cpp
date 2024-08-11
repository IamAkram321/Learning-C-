#include <iostream>
using namespace std;
void towerofHanoi(int n, char A, char B, char C)
{
    if (n == 1)
    {
        cout << "Move disk 1 from rod " << A << " to rod " << C << endl;
    }
    else
    {
        towerofHanoi(n - 1, A, C, B);
        cout << "Move disk " << n << " from rod " << A << " to rod " << C << endl;
        towerofHanoi(n - 1, B, A, C);
    }
}
int main()
{
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;
    towerofHanoi(n, 'A', 'B', 'C');
    return 0;
}