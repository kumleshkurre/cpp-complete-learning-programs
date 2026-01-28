#include<iostream>
#include<conio.h>
using namespace std;
class Demo
{
    int x,y;
    friend void fun1();   //friend function can exses praivet memburs
};
void fun1()
{
    Demo d1;
    d1.x=5;
    d1.y=7;
    cout<<d1.x+d1.y;
}
int main()
{
  fun1();

  getch();
}
