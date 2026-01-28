#include<iostream>
#include<conio.h>
using namespace std;
class unaryOver
{
    public:
    int x;
    int y;
};
int main()
{
    unaryOver k1,k2;
    k1.x=5;
    k1.y=6;
    k2.x=++k1.x;
    k2.y=++k1.y;

    cout<<k2.x<<" "<<k2.y<<endl;

 getch();
}
