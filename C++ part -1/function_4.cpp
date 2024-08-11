#include <iostream>
using namespace std;
void myFunction(string fname, int age)
{
    cout << "My name is " << fname << " and I am " << age << " years old" << endl;
}
int main()
{
    myFunction("Akram", 22);
    myFunction("Roshni", 23);
    myFunction("Altamash", 20);

    return 0;
}