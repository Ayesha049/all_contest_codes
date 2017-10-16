#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    map<char,int>mp;
    vector<int>cnt;
    vector<char>vc;
    for(int i=0;i<n;i++)
    {
        char a;
        cin>>a;
        if(mp[a]==0) vc.push_back(a);
        mp[a]++;
    }
    long long ans=0;
    int x=vc.size();
    for(int i=0;i<x;i++)
    {
        cnt.push_back(mp[vc[i]]);
    }
    sort(cnt.begin(),cnt.end());
    reverse(cnt.begin(),cnt.end());

    for(int i=0;i<x;i++)
    {
        if(cnt[i]<=k)
        {
            long long cc=cnt[i];
            cc=cc*cc;
            ans+=cc;
            k-=cnt[i];
        }
        else
        {
            long long cc=k;
            cc=cc*cc;
            ans+=cc;
            k=0;
        }

        if(k==0) break;


    }
    cout<<ans<<endl;
}

