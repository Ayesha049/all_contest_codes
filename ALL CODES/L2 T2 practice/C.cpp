#include<iostream>
using namespace std;

int main()
{
   int x1,x2;
   cin>>x1>>x2;
   if(x2<x1)
   {
       int t=x1;
       x1=x2;
       x2=t;
   }
   int max=0;
   while((2*x1)>x2)
   {
       max=max+1;
       x1=x1-2;
       x2=x2-1;
       //cout<<"in loop  "<<max<<"\n";
   }
   max=max+x1;
   cout<<max;
}
