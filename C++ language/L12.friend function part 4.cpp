#include<iostream>
#include<conio.h>
using namespace std;
class Demo2;  //class decalration
class Demo1
{
    int x;
    friend void fun1(Demo1 x1,Demo2 x2);   //friend function can exses praivet memburs
};
class Demo2
{
    int y;
    friend void fun1(Demo1 x1,Demo2 x2);
};
void fun1(Demo1 x1,Demo2 x2)
{
  x1.x=6;
  x2.y=8;
  cout<<x1.x+x2.y;
}
int main()
{
  Demo1 d1;
  Demo2 d2;
  fun1(d1,d2);

  getch();
}
