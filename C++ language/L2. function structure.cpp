#include<iostream>
#include<conio.h>
using namespace std;

struct student           //incapsulation concept
{
    int roll;
    float per;
    int marks;
    void fun1()
    {
        cout<<"kumlesh"<<endl;
    }
    void fun2()
    {
        cout<<"anjali";
    }
};

 int main()
 {
     student s1;
     s1.roll=100;
     s1.per=81.1;
     s1.marks=720;
     cout<<s1.roll<<" "<<s1.per<<" "<<s1.marks<<endl;
     s1.fun1();
     s1.fun2();


/*shyam()    //function deffination
{
 cout<<" Bye";
}

int main()
{
  cout<<"Hello";
  shyam();*/
  getch();
}
