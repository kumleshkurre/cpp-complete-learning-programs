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

   void display()
   {
       cout<<x<<" "<<y<<endl;
   }
    friend OpOver add(OpOver o2);
};
 OpOver add(OpOver o2)
   {
       OpOver r1;
       r1.x=x+o2.x;
       r1.y=y+o2.y;
       return r1;
   }
int main()
{
   OpOver o1,o2,o3;
   o1.setData(4,7);
   o2.setData(5,18);
   o3=add(o2);        //+ operator call hua o1 and o2 as argument pass hua jo return hua use recive kea o3 ne
   o3.display();



  getch();
}
