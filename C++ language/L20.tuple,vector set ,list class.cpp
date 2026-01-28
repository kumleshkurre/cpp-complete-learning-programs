#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;
int main()
{

/*tuple<int,float,string,int,string>t1;              //tuple class me int,float,string,int,string (class datatypename object)
    t1=make_tuple(67,81.45,"kurre",85,"computers");  //make_tuple function ka help se data ko t1 me rach do
    cout<<get<0>(t1)<<endl;
    cout<<get<1>(t1)<<endl;                           //print
    cout<<get<2>(t1)<<endl;
    cout<<get<3>(t1)<<endl;
    cout<<get<4>(t1)<<endl;*/
}
/*vector<int>v1;           //(class datatypename object)
   vector<float>v2(5);      //(class datatypename object)   v2 ke capicity 5 block ke hai or v2 float type data hai
   vector<char>v3(4,'T');   //(class datatypename object)

   int i;
   for(i=0;i<v3.capacity();i++)     //loop
   {
       cout<<v3[i]<<endl;           //print

   }*/

   /*vector<char>v3(4,'T');   //(class datatypename object)
   v3.push_back('v');
   cout<<v3.capacity()<<endl;
   v3.pop_back();             //1 data nikala
   v3.pop_back();             //1 data nikala
   cout<<v3.size()<<endl;           //v3 ka size kea hai
   cout<<v3.at(0)<<endl;           //v3 ka 0 me kea hai
   cout<<v3.back();*/               //v3 ek back me kea hai

{
   vector<char>v3(4,'T');   //(class datatypename object)
   v3.push_back('v');
 vector<char>:: iterator i1=v3.begin();  //v3 ke begin ko vector<char> type ke i1 iterator ko da do (iterator 1 class hai)
 v3.insert(i1+0,'m');   //v3 ke begin ko i1 me M insert kar do(rach do

 while(i1!=v3.end())                 //i1 me v3 ka end nahi ajata tab tak i1 ko print krate raho
 {
     cout<<*i1<<" ";    //i1 is pointer vecto ko pint kar raha hai(i1 ko print karao
     i1++;         //i1 ko ak ak kar ke bedhao
 }














     getch();
}
