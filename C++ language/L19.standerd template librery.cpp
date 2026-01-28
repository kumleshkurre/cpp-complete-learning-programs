#include<iostream>
#include<conio.h>
#include<array>
using namespace std;
int main()
{
  /*array<int,5>a1{11,22,33,44,55};   //array class me int type ka 5 block bena do (class datatypename object)
  cout<<a1.at(3);
  cout<<a1[2];                     //at function calling


  cout<<a1.front();               //front function calling

  cout<<a1.back();*/               //back funtion calling



  /*array<string,6>a2;                 //array class me string type ka 6 block bena do  (class and object)
  a2.fill("kurre computers");        //a2 me fill ka do kurre computers
  int i;
  for (i=0;i<a2.size();i++)        //i ko0 se start karo or a2 ko size tak chlao or i ko ak ak kar ke bedhao
  {
      cout<<a2[i]<<endl;
  }*/

  array<int,5>a1{11,22,33,44,55};     //array class me int type ka 5 block bena do (class and object)
  array<int,5>a2{100,90,80,70,60};   //array me int type ka 5 block bena do (class and object)
  a1.swap(a2);                      //a2 ka data ko a1 me dal do

  int i;
  for (i=0;i<a1.size();i++)        //i ko 0 se start karo or a1 ke size tak chlao or i ko 1,1 kar ke bedhao
  {
      cout<<a1[i]<<endl;

  }

  getch();
}

/*staderd template libreary(STL)
c++ ka ander bahut predifain template classes hote hai
well structure 3 component
1.Contaner   =    contan karene wala(like arrey,stack,vactar,pair)
2.Algorethom  =   (sorting,searching,inserchun)
3.Itvater     =   pointer

types of class on c++
array
pair
tuple
vector
map
list
set
string
queue
stack
priority_queue


seqence contaners like array,linked list etc.)
Associative contaners (solted data structure like map,set etc.)
unorderd ASSociative contaners (unorderd data structure like trees and drafs)

types of function
at()
[]oprator
frint()
back()
fill()
swap()
size()
begin()
end()*/






