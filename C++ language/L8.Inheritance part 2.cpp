#include<iostream>
#include<conio.h>
using namespace std;
class vehicle
{
    int brake;
    int oil;
    int clutch;
public:
    vehicle()
    {
        cout<<"parent class constructor"<<endl;
    }

};
class car : vehicle
{
    int four_tyre;
    int sunroof;
public:
    car()
    {
        cout<<"child class constructor"<<endl;
    }
};
class Bike : vehicle
{
    int two_tyre;
public:
    Bike()
    {
        cout<<"child2 class constructor";
    }

};
int main()
{
    car b1;
    Bike b2;

    getch();
}
