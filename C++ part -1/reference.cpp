/*A reference variable is a "reference" to an existing variable, and it is created with the & operator
We can use either the variable name food or the reference name meal to refer to the food variable*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string meal = "mutton biryani";
    string &food = meal;
    cout << meal << "\n";
    cout << food;
    return 0;
}