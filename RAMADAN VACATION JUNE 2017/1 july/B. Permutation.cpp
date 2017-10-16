#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        mp[a]=1;
    }
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(mp[i]==0) cnt++;
    }
    cout<<cnt<<endl;
}

