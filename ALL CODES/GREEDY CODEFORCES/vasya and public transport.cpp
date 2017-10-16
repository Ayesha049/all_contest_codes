#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c1,c2,c3,c4;
    cin>>c1>>c2>>c3>>c4;
    int n,m;
    cin>>n>>m;
    int mn1=0,mn2=0,bus=0,trol=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        bus+=a;
        int a1,a2;
        a1=a*c1;
        a2=min(a1,c2);
        mn1+=a2;
    }
    for(int i=0;i<m;i++)
    {
        int a;
        cin>>a;
        trol+=a;
        int a1,a2;
        a1=a*c1;
        a2=min(a1,c2);
        mn2+=a2;
    }
    mn1=min(mn1,c3);
    mn2=min(mn2,c3);

    int ans=mn1+mn2;
    ans=min(ans,c4);
    cout<<ans<<endl;

}
