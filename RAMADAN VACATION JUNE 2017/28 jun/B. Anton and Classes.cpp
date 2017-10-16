#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int mn1=INFINITY;
    int mx1=-INFINITY;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        mn1=min(mn1,b);
        mx1=max(mx1,a);
    }
    int m;
    cin>>m;
    int mn2=INFINITY;
    int mx2=-INFINITY;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        mn2=min(mn2,b);
        mx2=max(mx2,a);

    }

    int ans=mx1-mn2;
    int ans2=mx2-mn1;
    ans=max(ans,ans2);

    if(ans<0) ans=0;
    cout<<ans<<endl;
}

