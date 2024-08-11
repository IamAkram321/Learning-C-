#include<iostream>
using namespace std;
enum Day
{
    sunday=5,monday,tuesday,wednesday,thursday,friday,saturday
};
int main()
{
    Day today=thursday;
    switch (today)
    {
    case 5:
        cout<<"Today is sunday";
        break;
    case 6:
        cout<<"Today is monday";
        break;
    case  7:
        cout<<"Today is  tuesday";
        break;
    case 8:
        cout<<"Today is wednesday";
        break;
    case 9:
        cout<<"I love consistency";
        break;
    case 10:
        cout<<"Today is friday";
        break;
    case 11:
        cout<<"Today is saturday";
        break;
    }
    return 0;
}