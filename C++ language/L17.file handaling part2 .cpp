#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
 /* //updatefuntion hota hai
  ofstream fout;                          //output rachna hai (ofstream class)
  fout.open("a.txt",ios::app|ios::ate);  //a.txt file ko open karo or update karo new wala racho
  cout<<fout.tellp()<<endl;    //get pointer jaha tak chalega vaha taka position check karta hai
  fout<<"Seekho";             //file me rachna hai
 fout.seekp(-2,ios_base::end); // jaha pe position hai waha se 3 aghe jao
  cout<<fout.tellp();*/

  //seekg function hota hai
  /*ifstream fin;     //output nikalna lena hai
  char ch;
  fin.open("a.txt");  //a.txt file ko open karo
  ch=fin.get();    //get()pointer ka matlab file se nikalna)
  cout<<ch;

  ch=fin.get();
  cout<<ch;

  ch=fin.get();
  cout<<ch;

  cout<<fin.tellg();  //get pointer jaha tak chalega vaha taka position check karta hai
  fin.seekg(1);       //get pointer ka 1 number posision me jao
  fin.seekg(3,ios_base::cur); // jaha pe position hai waha se 3 aghe jao
  cout<<fin.tellg();*/

   //tellp funtion hota hai
  /*ofstream fout;               //output rachna hai (ofstream class)
  fout.open("a.txt",ios::app);  //a.txt file ko open karo or pahle wala delete na ho
  cout<<fout.tellp()<<endl;    //get pointer jaha tak chalega vaha taka position check karta hai
  fout<<"Seekho";       //file me rachna hai
  cout<<fout.tellp();*/  //get pointer ka position check karta hai or dusribar rachne sa new zero position se start karta hai


    //tellg funtion hota hai
  ifstream fin;      //output nikalna lena hai
  char ch;
  fin.open("a.txt");  //a.txt file ko open karo
  ch=fin.get();    //get()pointer ka matlab file se nikalna)
  cout<<ch;

  ch=fin.get();
  cout<<ch;

  ch=fin.get();
  cout<<ch;

  cout<<fin.tellg();  //get pointer jaha tak chalega vaha taka position check karta hai



    getch();
}



/*ak karke rachta hai use put pointer kahte hai
fail se input lena ifstream
leta hai use get pointer   me tellg ka help se pogition peta kar sakte hai*/

