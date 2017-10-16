#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<int,int>mp;
    int cnt=0;
    int mx=0;
    for(int i=0;i<n;i++)
    {
        char a;
        int b;
        cin>>a>>b;
        if(a=='+')
        {
            cnt++;
            mp[b]=1;
        }
        else
        {
            if(mp[b]==1)
            {
                cnt--;
                mp[b]=0;
            }
            else
            {
                mx++;
            }
        }
        mx=max(mx,cnt);
    }
    cout<<mx<<endl;
}

