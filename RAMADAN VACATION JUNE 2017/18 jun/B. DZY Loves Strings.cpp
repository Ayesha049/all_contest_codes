#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    map<char,int>mp;
    char ch='a';
    int mx=0;
    for(int i=0;i<26;i++)
    {
        int a;
        cin>>a;
        mp[ch+i]=a;
        mx=max(mx,a);
        //ch++;
        //cout<<ch<<" ";
    }
    int x=s.length();
    long long ans=0;
    for(int i=1;i<=x;i++)
    {
        long long xx=mp[s[i-1]]*i;
        ans+=xx;

    }
    for(int i=1;i<=k;i++)
    {
        long long xx=mx*(i+x);
        ans+=xx;
    }
    cout<<ans<<endl;
}

