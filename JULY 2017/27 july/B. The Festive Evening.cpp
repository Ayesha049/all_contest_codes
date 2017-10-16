#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int gd=0;
    map<char,int>mp;
    for(int i=0; i<n; i++)
    {
        mp[s[i]]++;
    }
    int free=0;
    map<char,int>cnt;
    map<char,int>gate;
    int flag=0;
    for(int i=0;;)
    {
        if(i>(n-1)) break;
        char t=s[i];
        if(gate[t]==0)
        {
            if(k>0)
            {
                k--;
                gate[t]=1;
            }
            else
            {
                flag=1;
                break;
            }
        }
        while(1)
        {
            if(i>(n-1)) break;
            if(s[i]!=t) break;
            cnt[t]++;
            i++;
        }
        if(cnt[t]==mp[t])
        {
            k++;
            gate[t]=0;
        }
    }
    if(flag==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
