#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n>26)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        int cnt=0;
        map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            if(mp[s[i]]==0)
            {
                mp[s[i]]=1;
                cnt++;
            }
        }
        cout<<(n-cnt)<<endl;
    }
}
