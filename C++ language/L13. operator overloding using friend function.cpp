#include<iostream>
#include<conio.h>
using namespace std;
class OpOver
{
    int x,y;
public:
    void setData(int p,int q)
    {
        x=p;
        y=q;

    }
   OpOver operator +(OpOver o2)
   {
       OpOver r1;
       r1.x=x+o2.x;
       r1.y=y+o2.y;
       return r1;
   }
   void display()
   {
       cout<<x<<" "<<y<<endl;
   }

};
int main()
{
   OpOver o1,o2,o3;
   o1.setData(4,7);
   o2.setData(5,18);
   o3=o1+o2;
   o3.display();



  getch();
}
