#include<iostream>
#include<conio.h>
#include<array>
using namespace std;
class A
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
};
int main()
{
pair<int,string>p1;           //pair class me int or string p1 datatype
pair<float,int>p2;           //pair class me float or int p2 datatype
p1=make_pair(45,"Anjali");
p2=make_pair(69.50,100);    //alage alage datatype ko rachne ka leya pair class ka use karte hai p2=make_pair(69.50,100);
cout<<p1.first<<" "<<p1.second<<endl;
cout<<p2.first<<" "<<p2.second<<endl;

pair<int,A>p3;           //pair class me int type p3 datatype
A a1,a2;
a1.setData(66,77);
p3=make_pair(55,a1);  //a1 object ko pass karo or a1 ake object hai
cout<<p3.first<<" ";   // a1 ko darect acsses nahi kar sakte
 a2=p3.second;
a2.display();





  getch();
}

