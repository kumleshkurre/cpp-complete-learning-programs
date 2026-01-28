#include<iostream>
#include<conio.h>
using namespace std;
class Demo
{
    int p,q;
public:
    Demo(int x,int y)
    {
      p=x; q=y;  //x ko rach do p me y ko rach do q me
    }

    Demo (Demo &j1) //Refrance variable recurtion void karne ka leya
    {
        j1.p++;
        j1.q++;
        p=j1.p; // j1.p ko rach do p me
        q=j1.q; // j1.q ko rach do q me
    }
        void display()
    {
        cout<<p<<" "<<q<<endl;
    }
};
int main()
{
    Demo d1(4,5),d2(7,9),d3(d1);
    d3.display();
    d1.display();
    d2.display();

    getch();

}
