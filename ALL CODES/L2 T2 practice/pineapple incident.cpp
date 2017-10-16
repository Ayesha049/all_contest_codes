#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,s,x;
    cin>>t>>s>>x;
    int a=x-t;
    if(a<0)
        cout<<"NO"<<endl;
    else if(a==0)
        cout<<"YES"<<endl;
    else if(a>=s &&(a%s==0 || a%s==1))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
