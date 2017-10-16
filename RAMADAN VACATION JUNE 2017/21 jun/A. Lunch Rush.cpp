#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
    long long mx=-INFINITY;
    for(int i=1;i<=n;i++)
    {
        long long f,t;
        cin>>f>>t;
        if(k<t) f=f-(t-k);
        mx=max(f,mx);
    }
    cout<<mx<<endl;
}

