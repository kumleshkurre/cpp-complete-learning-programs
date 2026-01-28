#include<iostream>
#include<conio.h>
using namespace std;
class Com
{
    int x;
    int y;
public:
    void setData(int p,int q)
    {
      x=p;
      y=q;
    }
    Com operator -()     //oprator overloding
    {
      Com k1;  //object bena lo k1
      k1.x=-x;
      k1.y=-y;
      return k1;   //k1 ko c2 me bhajo
    }
    void display()
    {
        cout<<x<<" "<<y<<endl;
    }

};
int main()
{
    Com c1,c2;
    c1.setData(5,7);
    c2=-c1;   //c1 ne - oprator ko call kea koi argument pass nahi hua jo return hua use c2 ne recive kea
    c2.display();

    getch();
}

