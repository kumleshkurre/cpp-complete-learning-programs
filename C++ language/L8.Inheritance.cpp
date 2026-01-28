#include<iostream>
#include<conio.h>
using namespace std;
class Demo1
{
public:
    ~Demo1()  //Distructor
    {
        cout<<"Destructor parent";
    };
    Demo1(int h)
    {
        cout<<h<<endl<<"parent class construct"<<endl;
    }
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
        ~Demo2()
    {
        cout<<"Destructor child"<<" ";
    };
    Demo2(int g): Demo1(g)
    {
        cout<<"child class construct"<<endl;
    }
    int z;
    void f2()
    {
        cout<<"fun2 executed"<<endl;
    }
};
int main()
{
  Demo2 d1(6),d2(5),d3(7);
  d1.z=55;
  d1.x=23;
  d1.y=27;
  cout<<d1.z<<" "<<d1.x<<" "<<d1.y<<endl;
  d1.f1();
  d1.f2();    //Function calling

  getch();
}
