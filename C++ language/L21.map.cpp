#include<iostream>
#include<conio.h>
#include<map>
using namespace std;
int main()
{
map<string,int>m2{{"ajit",42},{"amit",35},{"akash",33}};
map<string,int>::iterator i1=m2.begin();
while(i1!=m2.end())
{
    cout<<i1->first<<":"<<i1->second<<endl;
    i1++;
}
    //cout<<m1[100];

    /* map<int,string>m1;
    m1[100]="kumlesh";
    m1[105]="anjali";
    m1[103]="sahil";
    m1[109]="chandan";
    m1[101]="avinash";
map<int,string>::iterator i1=m1.begin();
m1.insert(pair<int,string>{102,"raider"});
while(i1!=m1.end())
   {
    cout<<i1->first<<":"<<i1->second<<endl;
    i1++;
   }
    //cout<<m1[100];*/

    getch();
}
