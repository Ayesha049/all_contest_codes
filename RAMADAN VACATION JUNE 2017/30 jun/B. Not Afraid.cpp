#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int f=0;
    for(int i=0; i<m; i++)
    {
        int k;
        cin>>k;
        map<int,int>mp;
        int flag=0;
        for(int j=0; j<k; j++)
        {
            int a;
            cin>>a;
            int xx=(-1)*a;
            if(mp[xx]==1) flag=1;
            mp[a]=1;
        }
        if(flag==0) f=1;
    }
    if(f==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

