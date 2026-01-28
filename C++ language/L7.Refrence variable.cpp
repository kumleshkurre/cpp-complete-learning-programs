#include<iostream>
#include<conio.h>
using namespace std;
void fun1(int x,int y)
{
    x++;
    y--;
    x++;
    cout<<x+y<<endl;
}
int main()
{
    int p=5,q=8;
    fun1(p,q);
    cout<<p+q;

    getch();
}
