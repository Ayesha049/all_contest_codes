#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    map<string,string>mp;
    map<string,int>mp1;
    for(int i=1;i<=b;i++)
    {
        string s1,s2;
        cin>>s1>>s2;
        mp[s1]=s2;
        mp[s2]=s1;
        mp1[s1]=1;
        mp1[s2]=2;
    }
    string arr[3001];
    string ans[3001];
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
        string ss=mp[arr[i]];
        if(ss.length()>arr[i].length())
        {
            ans[i]=arr[i];
        }
        else if(ss.length()<arr[i].length())
        {
            ans[i]=ss;
        }
        else
        {
            if(mp1[ss]==1)
                ans[i]=ss;
            else
                ans[i]=arr[i];
        }
    }

    for(int i=0;i<a;i++)
    {
        cout<<ans[i]<<" ";
    }
}
