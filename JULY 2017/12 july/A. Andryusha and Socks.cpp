#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cnt=0;
    int mx=0;
    map<int,int>mp;
    int a;
    for(int i=0;i<2*n;i++)
    {
        cin>>a;
        if(mp[a]==0)
        {
            mp[a]=1;
            cnt++;
        }
        else
        {
            mp[a]=0;
            cnt--;
        }
        mx=max(mx,cnt);

    }
    cout<<mx<<endl;
}

