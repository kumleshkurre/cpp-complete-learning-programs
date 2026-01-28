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
    Com negative()
    {
      Com k1;
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
    c2=c1.negative();   //c1 ne negative function ko call kea
    c2.display();

    getch();
}
