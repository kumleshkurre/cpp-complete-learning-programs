#include<iostream>
#include<conio.h>
using namespace std;
class Book
{
    public:
    int x;
    int y;
    int z;
    void f1()
    {
        x=11;
        y=22;
        z=33;
    }
};
int main()
{
    Book b1;  //object
    b1.f1();
    cout<<b1.x<<" "<<b1.y<<" "<<b1.z;
    getch();
}
