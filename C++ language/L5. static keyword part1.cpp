#include<iostream>
#include<conio.h>
using namespace std;
class Demo
{
    public:
 int x;
 int y;
 static int z;

 };
int Demo::z;  //scopresulation oprator    Z Demo ka hisa hai defain karna hota hai
int main()
{
    Demo d1,d2,d3;
    d1.x=10;
    d2.y=20;       //koi behi data rach sekta hai
    d1.z=75;
    Demo::z=54;
    d2.z=8;
    d3.z=12;
    cout<<Demo::z<<" "<<d1.z;

   getch();
}
