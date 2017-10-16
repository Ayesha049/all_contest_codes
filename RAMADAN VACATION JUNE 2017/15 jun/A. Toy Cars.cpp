#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            int a;
            cin>>a;
            if(a==1) mp[i]=1;
            if(a==2) mp[j]=1;
            if(a==3)
            {
                mp[i]=1;
                mp[j]=1;
            }
        }
    }
    int ans=0;
    for(int i=1; i<=n; i++)
    {
        if(mp[i]==0) ans++;
    }
    cout<<ans<<endl;
    for(int i=1; i<=n; i++)
    {
        if(mp[i]==0) cout<<i<<" ";
    }
}



