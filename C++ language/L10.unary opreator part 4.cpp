#include<iostream>
#include<conio.h>
using namespace std;
class UnaryOver
{
    int x;
    int y;
public:
    void setData(int p,int q)
    {
        x=p;
        y=q;
    }
     UnaryOver operator --(int)
    {
      UnaryOver t1;
      t1.x=--x;
      t1.y=--y;
      return t1;
    }
    void display()
    {
        cout<<x<<" "<<y<<endl;
    }
};
int main()
{
 UnaryOver u1,u2;
 u1.setData(6,8);
 u2=u1--;         //u1 ne - oprator ko call kea koi argument pass nahi hua jo return hua use u2 ne recive kea
 u2.display();

 getch();
}

