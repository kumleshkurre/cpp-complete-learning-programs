#include<iostream>
#include<conio.h>
using namespace std;
class samsung1                                               // class ka name same argument alg alg constructor  over loading
{
    int m;
    int s;
public:
    samsung1(int x,int y)   // perameter recve karta hai es liya perameterized constructor
   {
       m=x;
       s=y;
   }
   samsung1()  // default constructor ake bhi argument nahi la raha hai
   {
      m=0;
      s=0;
   }
   samsung1( int w)
   {
       m=w;
       s=w;
   }
    void display()
   {
     cout<<m<<" "<<s<<endl;
   }
    void display(int u)  //function ka name same argument alg function over loading
    {

    }
};
int main()
{
   samsung1 s1(5,2),s2(10,20),s3(11),s4;     //garbage falue stored
    s1.display();
    s2.display();
    s3.display();
    s4.display();




   getch();
}

