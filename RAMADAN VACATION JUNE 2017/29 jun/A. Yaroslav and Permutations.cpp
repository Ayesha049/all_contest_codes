#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int mx=0;
    map<int,int>mp;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        mp[a]++;
        mx=max(mx,mp[a]);
    }
    if(mx<=(n+1)/2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

