#include<iostream>
#include<conio.h>
using namespace std;
class Example
{
public:
    void fun1() //function
    {
      cout<<"a";
    }
    void fun1(int x) // same class me function ka name same or argumentes aleg aleg hai to overloding
    {
       cout<<"A"<<endl;
    }
      void sum1() //uriy baimding parent ki na child ki ho
    {
        cout<<"parent";
    }
    void f1()
    {
        cout<<"old technology";
    }
};
class Demo :public Example //pahle apne char me dechega
{
    public:
    void sum1()   //child class me function ka name same or argumentes bhi same use overriding kahte hai or old wala nahi caliga
    {
       cout<<"Child"<<endl;
    }
    void f1(int u) //child class me function ka name same or argumentes aleg aleg hai to use haiding kahte hai
    {
       cout<<"New technology"<<endl;
    }
};
int main()
{
   Example *e1; //Parent class pointer
   Demo d1;  //4parent 2child total6
   e1=&d1;   //d1 ka address e1 dal rahi hai
   e1->sum1(); //sum1 function call ho raha hai or sum1 urly bainding ho raha hai e1 se (cheak kar raha hai e1 kon sa type ka hai)

  /*Demo d1;
    d1.f1(5);    //Haiding
    d1.sum1();   //overriding
    d1.fun1(5);  //overloding
    d1.fun1();*/   //function calling


    getch();
}
