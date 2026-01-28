#include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
     int x;
    int y;
public:
    void setData(int p,int q)
    {
      x=p;
      y=q;
    }
   Complex operator +(Complex g1)   //complex type kise bihi oprator ko function name use karna cahti ho to uska phle oprator name use karna hoga
    {
       Complex p1;
       p1.x=x+g1.x;
       p1.y=y+g1.y;
       return p1;
    }
    void display()      //do not return to void type
    {
        cout<<x<<"+"<<y<<"i"<<endl;
    }
};
int main()
{
  Complex c1,c2,c3;
  c1.setData(5,9);
  c2.setData(11,15);

  c3=c1+c2;     //function over loding Pluce oprator not suport primetive data type
  c3.display();

    getch();
}
