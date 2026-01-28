#include<iostream>
#include<conio.h>
using namespace std;
class samsung
{
public:
    void setMic()
    {
        cout<<"Mic set by Sumsung.";
    }
};
class onePlus
{
    void setMic()
    {
     cout<<"Mic set by onePlus.";
    }
};
class Vivo : public samsung,onePlus
int main()
{
    Vivo c1;
    c1.setMic();  //due to ambiguity we cant call this function

    getch();
}
