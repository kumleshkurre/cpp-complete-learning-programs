#include<iostream>
#include<conio.h>
#include<array>
using namespace std;
int main()
{
pair<int,string>p1;     //pair class me int or string (class datatype and object)
pair<float,int>p2;     //pair class me float or int (class datatype and object)

  p1=make_pair(45,"Avinash");     //alage alage datatype ko rachne ka leya pair class ka use karte hai
  p2=make_pair(69.50,100);        //make_pair function pairs ko jodta hai

  cout<<p1.first<<" "<<p1.second<<endl;   //first ak pointer hai
  cout<<p2.first<<" "<<p2.second<<endl;

  getch();
}
