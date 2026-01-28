#include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
    public:
    int x;
    int y;
};
int main()
{
  Complex c1,c2,c3;
  c1.x=5;
  c1.y=8;
  c2.x=2;
  c2.y=6;
  c3.x=c1.x+c2.x;
  c3.y=c1.y+c2.y;
  cout<<c3.x<<" "<<c3.y;

    getch();
}
