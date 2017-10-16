#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    n-=1;
    map<char,int>mp;
    int cnt=0;
    for(int i=0;i<2*n;i++)
    {
        if(i%2==0) mp[s[i]]++;
        else
        {
            char ch= s[i]+32;
            if(mp[ch]==0) cnt++;
            else mp[ch]--;
        }
    }
    cout<<cnt<<endl;
}

