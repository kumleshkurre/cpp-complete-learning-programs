#include<iostream>
#include<conio.h>
using namespace std;
class samsung1
{
    int m;
    int s;
public:
    void setData()  //function me hi deta set kar deya (constructor) hmare constructor bena ne sa compiler nahi benata hemare na benane se benata hai
   {
       m=5;
       s=2;
   }
    void display()
   {
     cout<<m<<" "<<s<<endl;
   }


};
int main()
{
   samsung1 s1,s2;     //garbage falue stored
    s1.setData();
    s1.display();
    s2.setData();
    s2.display();




   getch();
}

