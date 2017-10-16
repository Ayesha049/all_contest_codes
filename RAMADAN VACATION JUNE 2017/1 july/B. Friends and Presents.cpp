#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long cnt1,cnt2,x,y;
    cin>>cnt1>>cnt2>>x>>y;
    long long l=cnt1+cnt2;
    long long h=1000000000000000;
    long long ans;
    long long m,cx,cy,xy;
    while(l<=h)
    {
        m=(l+h)/2;
        cx=m-(m/x);
        cy=m-(m/y);
        xy=m-((m/x)/y);
        if(cx>=cnt1 && cy>=cnt2 && xy>=(cnt1+cnt2))
        {
            ans=m;
            h=m-1;
        }
        else l=m+1;
    }
    cout<<ans<<endl;
}

