#include<iostream>
#include<conio.h>
#include<list>
using namespace std;
int main()
{
    list<int>l1{22,33,44,55,66,77};       //(class datatypename object)
    l1.pop_back();                        //back 1 data nikal do
    l1.pop_front();                       //front 1 data nikal do
    l1.push_back(88);                     //back 1 data daal do
    l1.push_front(11);                    //front 1 data daal do

    list<int>::iterator i1=l1.begin();    //l1 ke begin ko list<int> type ke i1 iterator ko da do
    while(i1!=l1.end())                    //i1 me l1 ka end nahi ajata tab tak i1 ko print krate raho
    {
        cout<<*i1<<" ";              //pointer
        i1++;                        //i1 ko ak ak kar ke bedhao

    }
}
