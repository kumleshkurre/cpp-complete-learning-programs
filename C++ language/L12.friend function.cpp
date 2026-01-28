#include<iostream>
#include<conio.h>
using namespace std;
class Demo
{
    int x,y;
    public:
   void fun5()
{
    x=5;
    y=8;
    cout<<x+y<<" "<<"fun5 executed.";
}
};

void fun1()
{
    cout<<"fun1 executed.";
}
int main()
{
   Demo d1;
   d1.fun5(); //d1 ke fun5 ko call kea
   fun1();

  getch();
}
