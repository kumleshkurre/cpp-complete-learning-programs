#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
    //Right Mode
    /*ofstream fout;                       //output rachna hai(ofstream class)
    fout.open("a.txt");                   //HDD ka fail ko RAM me lana hai or open name ka function file apne ape crate kr deta hai
    fout<<"coding";             //coding ko file me rach do
    fout.close();*/                     //file ko save kea do hdd me

     //Append Mode
    ofstream fout;                   //output rachna hai (ofstream class)
    fout.open("a.txt",ios::app);      //HDD ka fail ko RAM me lana hai or open name ka function file apne ape crate kr deta hai (or old wala delete na ho)
    fout<<"kurre computers";         //kurre computers ko fail me rach do
    fout.close();                //file ko save kea do hdd me

    //1 word print karane ka leya
    /*ifstream fin;                 //output nikalna lena hai
    char x[50];
    fin.open("a.txt");
    fin>>x;                     //file se nikal kar x me racho or is funtion me space a jane se ache ka line nahi chalta hai
    cout<<x;*/                   //print

    //pura word print karne ka leya
    /*ifstream fin;                       //output nikalna (lena) hai
    char x;
    fin.open("a.txt");
    while(!fin.eof())                 //eof function ke help sa fin ka end of fail na aagaye tab tak chalao
    {
       x=fin.get();                  //get function ke help se nikalo ake charecter or use rach do x me (get()function ka matlab file se nikalna)
    cout<<x;
    }
    fin.close();*/


    //lena bhi hai or rachna bhi hai
    /*fstream f1;    //object                  //rachna hai
    f1.open("a.txt",ios::app);  //a.txt file ko lao or racho(rachna bhi hai)
    f1<<"Hi";                 // rache deya
    f1.close();

    char z;                   //file se input lena hai
    f1.open("a.txt",ios::in);
    while(!f1.eof())         //f1 ka end of file na aagaye tab tak chalao
     {
          z=f1.get();        //nikalo ake charecter or use rach do z me (get()pointer ka matlab file se nikalna)
          cout<<z;
     }
       f1.close();*/                //file close


    getch();
}


/*File opning mode
 output
 input
 append
 apdedate
 binary*/
