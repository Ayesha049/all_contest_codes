#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long mx=-INFINITY;
    long long my=-INFINITY;
    long long mnx=INFINITY;
    long long mny=INFINITY;
    long long a,b;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        mx=max(mx,a);
        my=max(my,b);
        mnx=min(mnx,a);
        mny=min(mny,b);
    }
    long long ans=abs(mx-mnx);
    ans=max(ans,abs(my-mny));
    ans*=ans;
    cout<<ans<<endl;
}

