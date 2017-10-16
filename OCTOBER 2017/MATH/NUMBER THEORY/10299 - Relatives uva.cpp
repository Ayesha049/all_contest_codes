#include<bits/stdc++.h>
using namespace std;


long long phi(long long n)
{
    long long ret=n;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n/=i;
            }
            ret-=ret/i;
        }

    }
    if(n>1) ret-=ret/n;
    return ret;
}

int main()
{
    long long n;
    while(cin>>n)
    {
        if(n==0) break;
        if(n==1) cout<<"0"<<endl;
        else cout<<phi(n)<<endl;
    }
}
