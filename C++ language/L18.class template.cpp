#include<iostream>
#include<conio.h>
using namespace std;
template<class k>
class Demo          //class type tamplate
{
    k x;
    k y;
    k z;
public:
    void setData(k p,k q,k r)
    {

        x=p;
        y=q;
        z=r;
    }
    void display()
    {
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
};
int main()
{
   Demo<int>d1;
   d1.setData(5,7,3);
   d1.display();

   Demo<double>d2;
   d2.setData(14.2,18.45,14.91);
   d2.display();





     getch();

}

