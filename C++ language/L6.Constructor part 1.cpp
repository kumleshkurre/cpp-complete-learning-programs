#include<iostream>
#include<conio.h>
using namespace std;
class samsung1
{
    int m;
    int s;
public:
    void setData()      //private member me data rachne ka leya functon benaya hai
    {
        m=5;
        s=2;

    }
   void display()
   {
     cout<<m<<" "<<s;
   }
   samsung1()          //function or class ka name same hone par espacel hojata hai or use constructor kahte hai or vo bena call kya chalta hai
   {
       cout<<"Automatic";    //jetane bar object banega utni bar chalega
   }

};
int main()
{
      samsung1 s1,s2;     //garbage falue stored
    s1.setData();      //value change
    s1.display();

    //s2.setData();
    //s2.display();




   getch();
}
