#include<iostream>
#include<conio.h>
using namespace std;
class Demo
{
    int x;
    friend void fun1();   //friend function can exses praivet memburs
};
class Demo2
{
    int y;
    friend void fun1();
};
void fun1()
{
    Demo d1;
    Demo2 d2;
    d1.x=7;
    d2.y=8;
    cout<<d1.x+d2.y;
}
int main()
{
  fun1();

  getch();
}
