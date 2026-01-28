#include<iostream>
#include<conio.h>
using namespace std;
class Demo1
{
public:

    int x;
    int y;
    void f1()
    {
        cout<<"fun1 executed"<<endl;
    }
};
class Demo2 : public Demo1   //single inheritance
{
   public:
    int z;
    void f2()
    {
        cout<<"fun2 executed"<<endl;
    }
};
int main()
{
  Demo2 d1;
  d1.z=55;
  d1.x=23;
  d1.y=27;
  cout<<d1.z<<" "<<d1.x<<" "<<d1.y<<endl;
  d1.f1();
  d1.f2();    //Function calling

  getch();
}

