#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d;
    cin>>n>>d;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        sum+=a;
    }
    int time=sum+(10*(n-1));
    if(time>d)
        cout<<"-1"<<endl;
    else
    {
        int ans=d-sum;
        ans=ans/5;
        cout<<ans<<endl;
    }
}
