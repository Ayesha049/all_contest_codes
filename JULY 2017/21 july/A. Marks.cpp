#include<bits/stdc++.h>
using namespace std;

char arr[101][101];
int main()
{
    int n,m;
    cin>>n>>m;
    map<int,int>mp;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            cin>>arr[i][j];
    }
    for(int i=1;i<=m;i++)
    {
        char mx=-1;
        for(int j=1;j<=n;j++)
        {
            mx=max(mx,arr[j][i]);
        }
        for(int j=1;j<=n;j++)
        {
            if(arr[j][i]==mx) mp[j]=1;
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++) ans+=mp[i];
    cout<<ans<<endl;
}

