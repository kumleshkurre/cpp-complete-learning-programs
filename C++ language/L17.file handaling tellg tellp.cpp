#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
  /*ifstream fin;
  char ch;
  fin.open("a.txt");
  ch=fin.get();
  cout<<ch;

  ch=fin.get();
  cout<<ch;

  ch=fin.get();
  cout<<ch;
  cout<<fin.tellg();*/  //tellg ka help se uske position ka peta legaya ja sekta hai ke vo kaha pe ruka hua hai


  /*ofstream fout;
  fout.open("b.txt",ios::app);
  cout<<fout.tellp()<<endl;
  fout<<"seekho";
  cout<<fout.tellp()<<endl;*/      //tellp ka help se uske position ka peta legaya ja sekta hai ke vo kaha se kaha tak chela


  ifstream fin;
  char ch;
  fin.open("a.txt");
  ch=fin.get();
  cout<<ch;

  ch=fin.get();
  cout<<ch;

  ch=fin.get();
  cout<<ch;
  cout<<fin.tellg();  //tellg ka help se uske position ka peta legaya ja sekta hai ke vo kaha pe ruka hua hai
  fin.seekg(2);       //seekg ka help se uske position ko change kar sekte hai
   cout<<fin.tellg();




    getch();
}



/*ak karke rachta hai use put pointer kahte hai (put pointer ofstream me use hota hai
fail se input leta hai use get pointer kahte hai (get pointer ifstream me use hota hai*/
