#include<iostream>
#include<conio.h>
using namespace std;
class Bank
{
    int x,y; //kise  bhi obstreact class ke private instant member variable
                // ke ander value ko inesilaise karne ka leya obstreact class me constructer hota hai
    public:
    virtual void roi()=0;
  Bank()
   {
     cout<<"constructor of parent"<<endl; //pahle chalata hai
   }
};
class SA : public Bank
{
 public:
     void roi() //function overraiding
     {

     }
     SA()
   {
     cout<<"constructor of child"<<endl; //Dusre me isko chlata hai
   }

};
int main()
{
  SA s1;



    getch();
}
