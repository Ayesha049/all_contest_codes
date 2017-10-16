#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2,s;
    cin>>s1>>s2>>s;
    string ss;
    map<char,char>mp;
    map<int,int>mp1;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='A' && s[i]<='Z') mp1[i]=1;
    }
    for(int i=0;i<s1.length();i++) mp[s1[i]]=s2[i];
    for(int i=0;i<s.length();i++)
    {
        if(mp1[i]==0)
        {
            if(mp[s[i]]!=0) ss+=(mp[s[i]]);
            else ss+=s[i];
        }
        else
        {
            s[i]+=32;
            ss+= (char)(mp[s[i]]-32);
        }
    }
    cout<<ss<<endl;
}

