#include<iostream>
#include<conio.h>
using namespace std;
template<class w>  //alag alge type ka data ko 1 he memory me rachne ka leya tamplate ka use karte hai (typename placeholder)
 add(6,7);

void add(w p,w q)
{
    w r;
    r=p+q;
    cout<<r<<endl;
}
int main()
{

 add(6.9,7.4);

getch();

}


//what is polymorfesume?
//alge aleg type ka leya 1 function benaya use junric function kaha jata hai

