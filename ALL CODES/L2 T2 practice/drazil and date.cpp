#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,s;
    cin>>a>>b>>s;
    a=abs(a);
    b=abs(b);
    a=(a+b);
    if(s<a)
        cout<<"NO"<<endl;
    else
    {
        a=s-a;
        if(a%2==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
