#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a1, a2, a3;
    int b1, b2, b3;
    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    int aliceScore = 0;
    int bobScore = 0;
    if (a1 > b1)
    {
        aliceScore += 1;
    }
    else if (b1 > a1)
    {
        bobScore++;
    }
    if (a2 > b2)
    {
        aliceScore++;
    }
    else if (b2 > a2)
    {
        bobScore++;
    }
    if (a3 > b3)
    {
        aliceScore++;
    }
    else if (b3 > a3)
    {
        bobScore++;
    }
    cout << aliceScore << " " << bobScore;

    return 0;
}
