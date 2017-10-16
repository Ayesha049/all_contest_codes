#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int f=0;
    int rem=n%2;
    int a=n/2;
    for(int i=0;i<a;i++)
    {
        if(f==0)
        {
            cout<<"aa";
            f=1;
        }
        else
        {
            cout<<"bb";
            f=0;
        }
    }
    if(rem==1)
    {
        if(f==0)
        {
            cout<<"a"<<endl;
        }
        else
            cout<<"b"<<endl;
    }
}
