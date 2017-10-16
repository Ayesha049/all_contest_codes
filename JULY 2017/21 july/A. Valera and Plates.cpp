#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int one=0;
    int two=0;
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a==1) one++;
        else two++;
    }
    int ans=0;
    if(m<one)
    {
        ans+=(one-m);
        m=0;
    }
    else
    {
        k+=(m-one);
    }
    if(k<two) ans+=(two-k);
    cout<<ans<<endl;
}

