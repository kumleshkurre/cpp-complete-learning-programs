#include<iostream>
#include<conio.h>
using namespace std;
class Demo1
{
    public:
     void fun1()
    {

    }
    void fun2()
    {

    }
    void fun3()
    {

    }
};
class Demo2
{
    int x;
    public:
        friend class Demo1;
    /*friend void Demo1 :: fun1();
    friend void Demo1 :: fun2();
    friend void Demo1 :: fun3();*/

};
int main()
{
  getch();
}

