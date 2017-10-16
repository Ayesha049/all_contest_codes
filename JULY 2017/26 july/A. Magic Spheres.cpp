#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,x,y,z;
    cin>>a>>b>>c>>x>>y>>z;
    int cnt=0;
    int need=0;
    if(a>x) cnt+=(a-x)/2;
    else need+=(x-a);
    if(b>y) cnt+=(b-y)/2;
    else need+=(y-b);
    if(c>z) cnt+=(c-z)/2;
    else need+=(z-c);
    if(need>cnt) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}

