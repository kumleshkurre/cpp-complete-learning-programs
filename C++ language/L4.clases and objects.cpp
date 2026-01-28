
 #include<iostream>
#include<conio.h>
using namespace std;
class Demo
{
    int x;  //instance(object) member variable
    int y;
    int z;
    public:
        void setData(int p,int q,int r)  //instancemember member functon
        {
           // cout<<"Hello";
            x=p;
            y=q;
            z=r;
            //cout<<x<<" "<<y<<" "<<z;
        }
        void setData()
        {
            x=5;
            y=6;                          //function overloding
            z=7;
        }
        void setData(int g)
        {
            x=g;
            y=g;
            z=g;
        }
        void display()
        {
           cout<<x<<" "<<y<<" "<<z<<endl;
        }

};
/*class Demo2
{
    int x;  //instance(object) member variable
    int y;
    int z;
    public:
        void setData(int p,int q,int r)  //instancemember functon
        {
           // cout<<"Hello";
            x=p;
            y=q;
            z=r;
            //cout<<x<<" "<<y<<" "<<z;
        }
        void display()
        {
           cout<<x<<" "<<y<<" "<<z;
        }

};*/
int main()
{
    Demo d1,d2,d3,d4;
    d1.setData(10,20,30);
    d1.display();

   // Demo2 d2;
    d2.setData(70,80,90);
    d2.display();

    d3.setData();
    d3.display();

    d4.setData(55);
    d4.display();



   // cout<<sizeof(d1);


    getch();
}
