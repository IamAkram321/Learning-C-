/*A union in C++ is a special data structure that allows you to store different data types in the same memory location. However, only one of the data members can be accessed at a time. All members of a union share the same memory space, meaning the size of the union is determined by the size of its largest member*/

#include<iostream>
using namespace std;
union data
{
    int a;
    float b;
    char c;             
};
int main()
{
    data values;
    values.a=10;
    values.b=20.5;
    values.c='d';
    cout<<values.c;
    return 0;

/*If we try to cout values.a then it will throw garbage value because after a we have assigned b and c also. a is overwritten by c so as union takes only one value values.c will give correct answer*/