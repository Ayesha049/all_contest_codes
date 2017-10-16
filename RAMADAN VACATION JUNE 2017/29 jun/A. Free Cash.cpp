#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int mx=0;
    map<pair<int,int>,int>mp;
    for(int i=1;i<=n;i++)
    {
        int a,b;
        cin>>a>>b;
        mp[make_pair(a,b)]++;
        mx=max(mx,mp[make_pair(a,b)]);
    }
    cout<<mx<<endl;
}

