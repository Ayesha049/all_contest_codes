#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int cnt=0;
    map<char,int>mp;
    for(int i=0;i<s.length();i++)
    {
        if(mp[s[i]]==0)
        {
            mp[s[i]]++;
            cnt++;
        }
        else
        {
            if(s[i-1]!=s[i]) cnt++;
        }
    }
    int a=s.length();
    a=(a+1)*25;
    a++;
    cout<<a<<endl;
}

