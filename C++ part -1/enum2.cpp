#include<iostream>
using namespace std;
enum Day
{
    sunday,monday,tuesday,wednesday,thursday,friday,saturday
};
int main()
{
    Day today=thursday;
    switch (today)
    {
    case sunday:
        cout<<"Today is sunday";
        break;
    case monday:
        cout<<"Today is monday";
        break;
    case  tuesday:
        cout<<"Today is  tuesday";
        break;
    case wednesday:
        cout<<"Today is wednesday";
        break;
    case thursday:
        cout<<"I love consistency";
        break;
    case friday:
        cout<<"Today is friday";
        break;
    case saturday:
        cout<<"Today is saturday";
        break;
    }
    return 0;
}