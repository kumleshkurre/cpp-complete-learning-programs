#include<iostream>
#include<conio.h>
using namespace std;
class Demo
{
    public:
 int x;
 int y;
 private:
 static int z;
 public:
 void f1()        //opject benana hoga
 {
     z=55;
   cout<<z;
 };
 static void f2()    //Bena object benaya

 {
     z=44;
   cout<<z<<endl;
 }

};
int Demo::z;  //scopresulation oprator    Z Demo ka hisa hai defain karna hota hai
int main()
{

   // Demo::f2();
    Demo d1,d2;
    d1.f1();
    d2.f2();





   getch();
}

