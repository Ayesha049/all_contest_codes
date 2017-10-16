#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long r,x,y,a,b,d,ans;
    cin>>r>>x>>y>>a>>b;
    d=sqrt(pow(x-a,2)+pow(y-b,2));
    ans=d/(2*r);
    if(d%(2*r)!=0||d*d<pow(x-a,2)+pow(y-b,2))
        ans++;
    cout<<ans;
}


