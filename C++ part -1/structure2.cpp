#include<iostream>
#include<string>
using namespace std;
 struct Bike{
        string brand;
        string model;
        int price;
    };

int main(){
    Bike bike1,bike2;
    bike1.brand="Bajaj";
    bike1.model="NS200";
    bike1.price=200000;


    bike2.brand="YAMAHA";
    bike2.model="R15";
    bike2.price=300000;

    cout<<bike1.brand<<"\t"<<bike1.model<<"\t"<<bike1.price<<"\n";
    cout<<bike2.brand<<"\t"<<bike2.model<<"\t"<<bike2.price<<"\n";
    
    return 0;
}