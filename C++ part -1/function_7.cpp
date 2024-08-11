#include<iostream>
using namespace std;
int fun1(int x, int y){
    cout<<x+y<<endl;
}
int fun2(double x, double y){
    cout<<x+y<<endl;
}
int main()
{
    int a=10,b=20;
    double c=10.5,d=20.5;
    fun1(a,b); 
    fun2(c,d); 
    return 0;
}