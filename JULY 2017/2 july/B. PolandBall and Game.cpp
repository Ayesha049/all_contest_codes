#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int k=0;
    map<string,int>mp;
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        mp[s]=1;
    }
    int mm=m;
    for(int i=0;i<mm;i++)
    {
        cin>>s;
        if(mp[s]!=0)
        {
            m--;
            n--;
            k++;
        }
    }
    if(k%2!=0) n++;
    if(n<=m) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

