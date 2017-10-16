
#include<bits/stdc++.h>
using namespace std;


int isprime(int n)
{
    if(n==2)
        return 1;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int n,m;
    cin>>n>>m;
    int np=0;
    for(int i=n+1;i<=m;i++)
    {
        if(isprime(i)==1)
        {
            np=i;
            break;
        }
    }
    if(np==m)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
