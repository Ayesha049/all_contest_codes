#include<bits/stdc++.h>
using namespace std;

int main()
{
    double l,d,v,g,r;
    cin>>l>>d>>v>>g>>r;
    double ans=d/v;
    //cout<<ans<<endl;
    int tt=(int)ans;
    double rem=ans-tt;
    //cout<<rem<<endl;

    tt=tt%((int)(g+r));
    rem+=tt;
    //cout<<rem<<endl;
    if(rem<g)
    {
        ans+=(l-d)/v;
    }
    else
    {
        double wait=(r+g)-rem;
        ans+=(l-d)/v;
        ans+=wait;
    }
    printf("%.8lf\n",ans);
}
