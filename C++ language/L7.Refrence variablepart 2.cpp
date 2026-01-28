#include<iostream>
#include<conio.h>
using namespace std;
void fun1(int &x,int &y,int &z,int &w)   // & And percent leganepar refrence variable hota hai jo
{
    x--;
    y++;
    y--;
    z++;
    z++;
    w++;
    cout<<x+y<<endl;
}
int main()
{
    int p=1,q=6,r=4,s=7;
    fun1(p,q,r,s);
    cout<<p+q+r+s;

    getch();
}

